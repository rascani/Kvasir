# What is Kvasir?
Kvasir is a C++ Metaprogramming library enabling full static checking and register abstraction in embedded software. Despite the fact that we use modern C++ tools under the hood the public interface is quite "C like" and familliar to most embedded developers.

# Why Kvasir?
## Efficiency
By fully abstracting the hardware Kvasir is able to use optimizations under the hood which are either too obscure or too ugly to appear in user code. The header only nature of Kvasir and very sophisticated use of the volatile keyword give the optimizer more room to do its thing without breaking anything. We often reach severalfold improvements over hand written C code!
## Security
As mentioned above Kvasir register interactions are fully statically checked. It is essentially impossible to write to reserved bits, overflow the destination bit field, use a wrong mask or suffer from off by one errors when shifting. There are also a lot of atomic and synchronization features being developed in order to handle shared data much more efficiently.
## Portability
Kvasir works on essentially every ARM Cortex (we generate the chip specific code from the vendor provided CMSIS-SWD files). Although different chips will still have different peripherals because of Kvasirs level of abstraction it is still far easier and safer when porting.
## Testability
Kvasir introduces a seam right above the bare metal in a zero cost manner using a traits class. This means unit test of embedded code which interacts directly with registers is finally possible without big tools.

# Getting started with Kvasir
We took great care to reduce dependencies, therefore Kvasir should be easy to add to an existing embedded project. To use the library simply pull the folder Lib from this repository and add it to your compilers include paths (-I directive). Be sure and set your compiler dialect to C++11 at least. Thats it, you're ready to go.

# Basic concepts
In Kvasir we view registers as tuples of BitFields, which are accessable to the user, and reserved bits which are not. The type of a BitField is not always int, as is common practice in the embeded domain, rather it is often a strongly classed enum where it is more fitting. The bool type also often represents single bits. 
We also make a dastinction between compile time known values and runtime known values. For example 10 is a runtime known value, when passed to a function it must be copied at runtime and when saved in a variable it requires RAM. In order to save work at runtime and RAM we can also work with compile time values which only live in the compiler, these can be passed to functions without needing to be copied at runtime and do not use ram. ```Kvasir::Register::value<10>()``` is a compile time value where ```Kvasir::Register::value< >()``` is a wrapper around any unsigned int.
Reading from or writing to a Field is known as an Action. When we combine an Action and a Field plus a value in the case of write we call this a FieldAction. FieldActions are prodiced by factory functions such as ```read()```, ```write()```, ```set()``` etc. These factory functions do not actually preform the action, rather they return a FieldAction which can be passed to the ```apply()``` function whih preforms the action. We typically pass many FieldActions to apply at once.
Putting off the action untill the last minute and only returning what to do rather than actually doing it is called lazy evaluation. It is important to be lazy in this case because the later we actually do the work the more we know about the other work going on around us and the mroe we can merge these tasks and optimize them.
