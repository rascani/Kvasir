#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//State Configurable Timer (SCT)
    namespace Noneconfig{    ///<SCT configuration register
        using Addr = Register::Address<0x50004000,0xfff80000,0,unsigned>;
        ///SCT operation
        enum class unifyVal {
            theSctOperatesAs=0x00000000,     ///<The SCT operates as two 16-bit counters named L and H.
            theSctOperatesAs=0x00000001,     ///<The SCT operates as a unified 32-bit counter.
        };
        namespace unifyValC{
            constexpr MPL::Value<unifyVal,unifyVal::theSctOperatesAs> theSctOperatesAs{};
            constexpr MPL::Value<unifyVal,unifyVal::theSctOperatesAs> theSctOperatesAs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unifyVal> unify{}; 
        ///SCT clock mode
        enum class clkmodeVal {
            theBusClockClocks=0x00000000,     ///<The bus clock clocks the SCT and prescalers.
            theSctClockIsThe=0x00000001,     ///<The SCT clock is the bus clock, but the prescalers are  enabled to count only when sampling of the input selected by  the CKSEL field finds the selected edge. The minimum pulse  width on the clock input is 1 bus clock period. This mode is the high-performance  sampled-clock mode.
            theInputSelectedB=0x00000002,     ///<The input selected by  CKSEL clocks the SCT and prescalers. The input is synchronized to the bus clock and possibly inverted.  The minimum pulse width on the clock input is 1 bus clock  period. This mode is the low-power sampled-clock mode.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace clkmodeValC{
            constexpr MPL::Value<clkmodeVal,clkmodeVal::theBusClockClocks> theBusClockClocks{};
            constexpr MPL::Value<clkmodeVal,clkmodeVal::theSctClockIsThe> theSctClockIsThe{};
            constexpr MPL::Value<clkmodeVal,clkmodeVal::theInputSelectedB> theInputSelectedB{};
            constexpr MPL::Value<clkmodeVal,clkmodeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,clkmodeVal> clkmode{}; 
        ///SCT clock select
        enum class clkselVal {
            risingEdgesOnInpu=0x00000000,     ///<Rising edges on input 0.
            fallingEdgesOnInp=0x00000001,     ///<Falling edges on input 0.
            risingEdgesOnInpu=0x00000002,     ///<Rising edges on input 1.
            fallingEdgesOnInp=0x00000003,     ///<Falling edges on input 1.
            risingEdgesOnInpu=0x00000004,     ///<Rising edges on input 2.
            fallingEdgesOnInp=0x00000005,     ///<Falling edges on input 2.
            risingEdgesOnInpu=0x00000006,     ///<Rising edges on input 3.
            fallingEdgesOnInp=0x00000007,     ///<Falling edges on input 3.
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr MPL::Value<clkselVal,clkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr MPL::Value<clkselVal,clkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr MPL::Value<clkselVal,clkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr MPL::Value<clkselVal,clkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr MPL::Value<clkselVal,clkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr MPL::Value<clkselVal,clkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr MPL::Value<clkselVal,clkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,clkselVal> clksel{}; 
        ///A 1 in this bit prevents the lower match registers from being  reloaded from their respective reload registers. Software can  write to set or clear this bit at any time. This bit applies to both the  higher and lower registers when the UNIFY bit is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> norelaodL{}; 
        ///A 1 in this bit prevents the higher match registers from being  reloaded from their respective reload registers. Software can  write to set or clear this bit at any time. This bit is not used when  the UNIFY bit is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> noreloadH{}; 
        ///Synchronization for input N (bit 9 = input 0, bit 10 = input 1,..., bit 16 = input 7). A 1 in one of these bits subjects the corresponding input to  synchronization to the SCT clock, before it is used to create an  event. If an input is synchronous to the SCT clock, keep its bit 0 for  faster response. When the CKMODE field is 1x, the bit in this field, corresponding  to the input selected by the CKSEL field, is not used.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,9),Register::ReadWriteAccess,unsigned> insync{}; 
        ///A one in this bit causes a match on match register 0 to be treated  as a de-facto LIMIT condition without the need to define an  associated event. As with any LIMIT event, this automatic limit causes the  counter to be cleared to zero in uni-directional mode or to change  the direction of count in bi-directional mode. Software can write to set or clear this bit at any time. This bit  applies to both the higher and lower registers when the UNIFY bit  is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> autolimitL{}; 
        ///A one in this bit will cause a match on match register 0 to be treated  as a de-facto LIMIT condition without the need to define an  associated event. As with any LIMIT event, this automatic limit causes the  counter to be cleared to zero in uni-directional mode or to change  the direction of count in bi-directional mode. Software can write to set or clear this bit at any time. This bit is  not used when the UNIFY bit is set.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autolimitH{}; 
    }
    namespace Nonectrl{    ///<SCT control register
        using Addr = Register::Address<0x50004004,0xe000e000,0,unsigned>;
        ///This bit is 1 when the L or unified counter is counting down. Hardware sets this bit   when the counter limit is reached and BIDIR is 1. Hardware clears this bit when the counter is counting down and a limit condition occurs or when the counter reaches 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> downL{}; 
        ///When this bit is 1 and HALT is 0, the L or unified counter does not run, but I/O  events related to the counter can occur. If such an event matches  the mask in the Start register, this bit is cleared and counting  resumes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stopL{}; 
        ///When this bit is 1, the L or unified counter does not run and no events can occur.  A reset sets this bit. When the HALT_L bit is one, the STOP_L bit is cleared. If you want to remove the halt condition and keep the SCT in the stop condition (not running), then you can change the halt and stop condition with one single write to this register. Once set, only software can clear this bit to restore counter operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> haltL{}; 
        ///Writing a 1 to this bit clears the L or unified counter. This bit always reads as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrctrL{}; 
        ///L or unified counter direction select
        enum class bidirLVal {
            theCounterCountsU=0x00000000,     ///<The counter counts up to its limit condition, then is cleared to zero.
            theCounterCountsU=0x00000001,     ///<The counter counts up to its limit, then counts down to a limit condition or to 0.
        };
        namespace bidirLValC{
            constexpr MPL::Value<bidirLVal,bidirLVal::theCounterCountsU> theCounterCountsU{};
            constexpr MPL::Value<bidirLVal,bidirLVal::theCounterCountsU> theCounterCountsU{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bidirLVal> bidirL{}; 
        ///Specifies the factor by which the SCT clock is prescaled to produce the  L or unified counter clock. The counter clock is clocked at the rate of the SCT  clock divided by PRE_L+1. Clear the counter (by writing a 1  to the CLRCTR bit) whenever changing the PRE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,5),Register::ReadWriteAccess,unsigned> preL{}; 
        ///This bit is 1 when the H counter is counting down. Hardware sets this bit   when the counter limit is reached and BIDIR is 1. Hardware clears this bit when the counter is counting down and a limit condition occurs or when the counter reaches 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> downH{}; 
        ///When this bit is 1 and HALT is 0, the H counter does not, run but I/O  events related to the counter can occur. If such an event matches  the mask in the Start register, this bit is cleared and counting  resumes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> stopH{}; 
        ///When this bit is 1, the H counter does not run and no events can occur.  A reset sets this bit. When the HALT_H bit is one, the STOP_H bit is cleared. If you want to remove the halt condition and keep the SCT in the stop condition (not running), then you can change the halt and stop condition with one single write to this register. Once set, this bit can only be cleared by software to restore counter operation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> haltH{}; 
        ///Writing a 1 to this bit clears the H counter. This bit always reads as 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrctrH{}; 
        ///Direction select
        enum class bidirHVal {
            theHCounterCounts=0x00000000,     ///<The H counter counts up to its limit condition, then is cleared to zero.
            theHCounterCounts=0x00000001,     ///<The H counter counts up to its limit, then counts down to a limit condition or to 0.
        };
        namespace bidirHValC{
            constexpr MPL::Value<bidirHVal,bidirHVal::theHCounterCounts> theHCounterCounts{};
            constexpr MPL::Value<bidirHVal,bidirHVal::theHCounterCounts> theHCounterCounts{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,bidirHVal> bidirH{}; 
        ///Specifies the factor by which the SCT clock is prescaled to produce the  H counter clock. The counter clock is clocked at the rate of the SCT  clock divided by PRELH+1. Clear the counter (by writing a 1  to the CLRCTR bit) whenever changing the PRE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,21),Register::ReadWriteAccess,unsigned> preH{}; 
    }
    namespace Nonelimit{    ///<SCT limit register
        using Addr = Register::Address<0x50004008,0xffe0ffc0,0,unsigned>;
        ///If bit n is one, event n is used as a counter limit for the L or unified counter (event 0 = bit 0, event 1 = bit 1, event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> limmskL{}; 
        ///If bit n is one, event n is used as a counter limit for the H counter (event 0 = bit 16, event 1 = bit 17, event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> limmskH{}; 
    }
    namespace Nonehalt{    ///<SCT halt condition register
        using Addr = Register::Address<0x5000400c,0xffe0ffc0,0,unsigned>;
        ///If bit n is one, event n sets the HALT_L bit in the CTRL register (event 0 = bit 0, event 1 = bit 1, event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> haltmskL{}; 
        ///If bit n is one, event n sets the HALT_H bit in the CTRL register (event 0 = bit 16, event 1 = bit 17, event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> haltmskH{}; 
    }
    namespace Nonestop{    ///<SCT stop condition register
        using Addr = Register::Address<0x50004010,0xffe0ffc0,0,unsigned>;
        ///If bit n is one, event n sets the STOP_L bit in the CTRL register (event 0 = bit 0, event 1 = bit 1, event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> stopmskL{}; 
        ///If bit n is one, event n sets the STOP_H bit in the CTRL register (event 0 = bit 16, event 1 = bit 17, event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> stopmskH{}; 
    }
    namespace Nonestart{    ///<SCT start condition register
        using Addr = Register::Address<0x50004014,0xffe0ffc0,0,unsigned>;
        ///If bit n is one, event n clears the STOP_L bit in the CTRL register (event 0 = bit 0, event 1 = bit 1, event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> startmskL{}; 
        ///If bit n is one, event n clears the STOP_H bit in the CTRL register (event 0 = bit 16, event 1 = bit 17, event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> startmskH{}; 
    }
    namespace Nonecount{    ///<SCT counter register
        using Addr = Register::Address<0x50004040,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit L counter value. When UNIFY = 1, read or write the lower 16 bits of the 32-bit unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctrL{}; 
        ///When UNIFY = 0, read or write the 16-bit H counter value. When UNIFY = 1, read or write the upper 16 bits of the 32-bit unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctrH{}; 
    }
    namespace Nonestate{    ///<SCT state register
        using Addr = Register::Address<0x50004044,0xffe0ffe0,0,unsigned>;
        ///State variable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> stateL{}; 
        ///State variable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> stateH{}; 
    }
    namespace Noneinput{    ///<SCT input register
        using Addr = Register::Address<0x50004048,0xfff0fff0,0,unsigned>;
        ///Real-time status of input 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ain0{}; 
        ///Real-time status of input 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ain1{}; 
        ///Real-time status of input 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ain2{}; 
        ///Real-time status of input 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ain3{}; 
        ///Input 0 state synchronized to the SCT clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sin0{}; 
        ///Input 1 state synchronized to the SCT clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sin1{}; 
        ///Input 2 state synchronized to the SCT clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sin2{}; 
        ///Input 3 state synchronized to the SCT clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sin3{}; 
    }
    namespace Noneregmode{    ///<SCT match/capture registers mode register
        using Addr = Register::Address<0x5000404c,0xfff0ffe0,0,unsigned>;
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 4 = bit 4).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> regmodL{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 4 = bit 19). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> regmodH{}; 
    }
    namespace Noneoutput{    ///<SCT output register
        using Addr = Register::Address<0x50004050,0xfffffff0,0,unsigned>;
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 3 = bit 3).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> out{}; 
    }
    namespace Noneoutputdirctrl{    ///<SCT output counter direction control register
        using Addr = Register::Address<0x50004054,0xffffff00,0,unsigned>;
        ///Set/clear operation on output 0. Value 0x3 is reserved. Do not program this value.
        enum class setclr0Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        namespace setclr0ValC{
            constexpr MPL::Value<setclr0Val,setclr0Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr MPL::Value<setclr0Val,setclr0Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr MPL::Value<setclr0Val,setclr0Val::setAndClearAreRe> setAndClearAreRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,setclr0Val> setclr0{}; 
        ///Set/clear operation on output 1. Value 0x3 is reserved. Do not program this value.
        enum class setclr1Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        namespace setclr1ValC{
            constexpr MPL::Value<setclr1Val,setclr1Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr MPL::Value<setclr1Val,setclr1Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr MPL::Value<setclr1Val,setclr1Val::setAndClearAreRe> setAndClearAreRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,setclr1Val> setclr1{}; 
        ///Set/clear operation on output 2. Value 0x3 is reserved. Do not program this value.
        enum class setclr2Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        namespace setclr2ValC{
            constexpr MPL::Value<setclr2Val,setclr2Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr MPL::Value<setclr2Val,setclr2Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr MPL::Value<setclr2Val,setclr2Val::setAndClearAreRe> setAndClearAreRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,setclr2Val> setclr2{}; 
        ///Set/clear operation on output 3. Value 0x3 is reserved. Do not program this value.
        enum class setclr3Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        namespace setclr3ValC{
            constexpr MPL::Value<setclr3Val,setclr3Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr MPL::Value<setclr3Val,setclr3Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr MPL::Value<setclr3Val,setclr3Val::setAndClearAreRe> setAndClearAreRe{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,setclr3Val> setclr3{}; 
    }
    namespace Noneres{    ///<SCT conflict resolution register
        using Addr = Register::Address<0x50004058,0xffffff00,0,unsigned>;
        ///Effect of simultaneous set and clear on output 0.
        enum class o0resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR0 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR0 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        namespace o0resValC{
            constexpr MPL::Value<o0resVal,o0resVal::noChange> noChange{};
            constexpr MPL::Value<o0resVal,o0resVal::setOutputOrClear> setOutputOrClear{};
            constexpr MPL::Value<o0resVal,o0resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr MPL::Value<o0resVal,o0resVal::toggleOutput> toggleOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,o0resVal> o0res{}; 
        ///Effect of simultaneous set and clear on output 1.
        enum class o1resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR1 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR1 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        namespace o1resValC{
            constexpr MPL::Value<o1resVal,o1resVal::noChange> noChange{};
            constexpr MPL::Value<o1resVal,o1resVal::setOutputOrClear> setOutputOrClear{};
            constexpr MPL::Value<o1resVal,o1resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr MPL::Value<o1resVal,o1resVal::toggleOutput> toggleOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,o1resVal> o1res{}; 
        ///Effect of simultaneous set and clear on output 2.
        enum class o2resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR2 field).
            clearOutputNOrS=0x00000002,     ///<Clear output n (or set based on the SETCLR2 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        namespace o2resValC{
            constexpr MPL::Value<o2resVal,o2resVal::noChange> noChange{};
            constexpr MPL::Value<o2resVal,o2resVal::setOutputOrClear> setOutputOrClear{};
            constexpr MPL::Value<o2resVal,o2resVal::clearOutputNOrS> clearOutputNOrS{};
            constexpr MPL::Value<o2resVal,o2resVal::toggleOutput> toggleOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,o2resVal> o2res{}; 
        ///Effect of simultaneous set and clear on output 3.
        enum class o3resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR3 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR3 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        namespace o3resValC{
            constexpr MPL::Value<o3resVal,o3resVal::noChange> noChange{};
            constexpr MPL::Value<o3resVal,o3resVal::setOutputOrClear> setOutputOrClear{};
            constexpr MPL::Value<o3resVal,o3resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr MPL::Value<o3resVal,o3resVal::toggleOutput> toggleOutput{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,o3resVal> o3res{}; 
    }
    namespace Noneeven{    ///<SCT event enable register
        using Addr = Register::Address<0x500040f0,0xffffffc0,0,unsigned>;
        ///The SCT requests an interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace Noneevflag{    ///<SCT event flag register
        using Addr = Register::Address<0x500040f4,0xffffffc0,0,unsigned>;
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> flag{}; 
    }
    namespace Noneconen{    ///<SCT conflict enable register
        using Addr = Register::Address<0x500040f8,0xfffffff0,0,unsigned>;
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 3 = bit 3).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ncen{}; 
    }
    namespace Noneconflag{    ///<SCT conflict flag register
        using Addr = Register::Address<0x500040fc,0x3ffffff0,0,unsigned>;
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 3 = bit 3).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ncflag{}; 
        ///The most recent bus error from this SCT involved writing CTR  L/Unified, STATE L/Unified, MATCH L/Unified, or the Output register when the  L/U counter was not halted. A word write to certain L  and H registers can be half successful and half unsuccessful.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> buserrl{}; 
        ///The most recent bus error from this SCT involved writing CTR H,  STATE H, MATCH H, or the Output register when the H  counter was not halted.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> buserrh{}; 
    }
    namespace Nonematch0{    ///<SCT match value register of match channels 0 to 4; REGMOD0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004100,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch1{    ///<SCT match value register of match channels 0 to 4; REGMOD0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004104,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch2{    ///<SCT match value register of match channels 0 to 4; REGMOD0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004108,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch3{    ///<SCT match value register of match channels 0 to 4; REGMOD0 to REGMODE4 = 0
        using Addr = Register::Address<0x5000410c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonematch4{    ///<SCT match value register of match channels 0 to 4; REGMOD0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004110,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Nonecap0{    ///<SCT capture register of capture channel 0 to 4; REGMOD0 to REGMODE4 = 1
        using Addr = Register::Address<0x50004100,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap1{    ///<SCT capture register of capture channel 0 to 4; REGMOD0 to REGMODE4 = 1
        using Addr = Register::Address<0x50004104,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap2{    ///<SCT capture register of capture channel 0 to 4; REGMOD0 to REGMODE4 = 1
        using Addr = Register::Address<0x50004108,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap3{    ///<SCT capture register of capture channel 0 to 4; REGMOD0 to REGMODE4 = 1
        using Addr = Register::Address<0x5000410c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonecap4{    ///<SCT capture register of capture channel 0 to 4; REGMOD0 to REGMODE4 = 1
        using Addr = Register::Address<0x50004110,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Nonematchrel0{    ///<SCT match reload value register 0 to 4 REGMOD0 = 0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004200,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel1{    ///<SCT match reload value register 0 to 4 REGMOD0 = 0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004204,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel2{    ///<SCT match reload value register 0 to 4 REGMOD0 = 0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004208,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel3{    ///<SCT match reload value register 0 to 4 REGMOD0 = 0 to REGMODE4 = 0
        using Addr = Register::Address<0x5000420c,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonematchrel4{    ///<SCT match reload value register 0 to 4 REGMOD0 = 0 to REGMODE4 = 0
        using Addr = Register::Address<0x50004210,0x00000000,0,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the SCTMATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Nonecapctrl0{    ///<SCT capture control register 0 to 4; REGMOD0 = 1 to REGMODE4 = 1
        using Addr = Register::Address<0x50004200,0xffe0ffc0,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> capconmL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> capconmH{}; 
    }
    namespace Nonecapctrl1{    ///<SCT capture control register 0 to 4; REGMOD0 = 1 to REGMODE4 = 1
        using Addr = Register::Address<0x50004204,0xffe0ffc0,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> capconmL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> capconmH{}; 
    }
    namespace Nonecapctrl2{    ///<SCT capture control register 0 to 4; REGMOD0 = 1 to REGMODE4 = 1
        using Addr = Register::Address<0x50004208,0xffe0ffc0,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> capconmL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> capconmH{}; 
    }
    namespace Nonecapctrl3{    ///<SCT capture control register 0 to 4; REGMOD0 = 1 to REGMODE4 = 1
        using Addr = Register::Address<0x5000420c,0xffe0ffc0,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> capconmL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> capconmH{}; 
    }
    namespace Nonecapctrl4{    ///<SCT capture control register 0 to 4; REGMOD0 = 1 to REGMODE4 = 1
        using Addr = Register::Address<0x50004210,0xffe0ffc0,0,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> capconmL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 5 = bit 20).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> capconmH{}; 
    }
    namespace Noneev0State{    ///<SCT event state register 0
        using Addr = Register::Address<0x50004300,0xfffffffc,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 5) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> statemskm{}; 
    }
    namespace Noneev0Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x50004304,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class heventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        namespace heventValC{
            constexpr MPL::Value<heventVal,heventVal::selectsTheLState> selectsTheLState{};
            constexpr MPL::Value<heventVal,heventVal::selectsTheHState> selectsTheHState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,heventVal> hevent{}; 
        ///Input/output select
        enum class outselVal {
            selectsTheInputsE=0x00000000,     ///<Selects the inputs elected by IOSEL.
            selectsTheOutputs=0x00000001,     ///<Selects the outputs selected by IOSEL.
        };
        namespace outselValC{
            constexpr MPL::Value<outselVal,outselVal::selectsTheInputsE> selectsTheInputsE{};
            constexpr MPL::Value<outselVal,outselVal::selectsTheOutputs> selectsTheOutputs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,outselVal> outsel{}; 
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lag the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class iocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        namespace iocondValC{
            constexpr MPL::Value<iocondVal,iocondVal::low> low{};
            constexpr MPL::Value<iocondVal,iocondVal::rise> rise{};
            constexpr MPL::Value<iocondVal,iocondVal::fall> fall{};
            constexpr MPL::Value<iocondVal,iocondVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,iocondVal> iocond{}; 
        ///Selects how the specified match and I/O condition are used and combined.
        enum class combmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        namespace combmodeValC{
            constexpr MPL::Value<combmodeVal,combmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr MPL::Value<combmodeVal,combmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr MPL::Value<combmodeVal,combmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr MPL::Value<combmodeVal,combmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,combmodeVal> combmode{}; 
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class stateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        namespace stateldValC{
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stateldVal> stateld{}; 
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class directionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUpThisEv=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDownThis=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::directionIndependen> directionIndependen{};
            constexpr MPL::Value<directionVal,directionVal::countingUpThisEv> countingUpThisEv{};
            constexpr MPL::Value<directionVal,directionVal::countingDownThis> countingDownThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,directionVal> direction{}; 
    }
    namespace Noneev1State{    ///<SCT event state register 1
        using Addr = Register::Address<0x50004308,0xfffffffc,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 5) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> statemskm{}; 
    }
    namespace Noneev1Ctrl{    ///<SCT event control register 1
        using Addr = Register::Address<0x5000430c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class heventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        namespace heventValC{
            constexpr MPL::Value<heventVal,heventVal::selectsTheLState> selectsTheLState{};
            constexpr MPL::Value<heventVal,heventVal::selectsTheHState> selectsTheHState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,heventVal> hevent{}; 
        ///Input/output select
        enum class outselVal {
            selectsTheInputsE=0x00000000,     ///<Selects the inputs elected by IOSEL.
            selectsTheOutputs=0x00000001,     ///<Selects the outputs selected by IOSEL.
        };
        namespace outselValC{
            constexpr MPL::Value<outselVal,outselVal::selectsTheInputsE> selectsTheInputsE{};
            constexpr MPL::Value<outselVal,outselVal::selectsTheOutputs> selectsTheOutputs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,outselVal> outsel{}; 
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lag the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class iocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        namespace iocondValC{
            constexpr MPL::Value<iocondVal,iocondVal::low> low{};
            constexpr MPL::Value<iocondVal,iocondVal::rise> rise{};
            constexpr MPL::Value<iocondVal,iocondVal::fall> fall{};
            constexpr MPL::Value<iocondVal,iocondVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,iocondVal> iocond{}; 
        ///Selects how the specified match and I/O condition are used and combined.
        enum class combmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        namespace combmodeValC{
            constexpr MPL::Value<combmodeVal,combmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr MPL::Value<combmodeVal,combmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr MPL::Value<combmodeVal,combmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr MPL::Value<combmodeVal,combmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,combmodeVal> combmode{}; 
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class stateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        namespace stateldValC{
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stateldVal> stateld{}; 
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class directionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUpThisEv=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDownThis=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::directionIndependen> directionIndependen{};
            constexpr MPL::Value<directionVal,directionVal::countingUpThisEv> countingUpThisEv{};
            constexpr MPL::Value<directionVal,directionVal::countingDownThis> countingDownThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,directionVal> direction{}; 
    }
    namespace Noneev2State{    ///<SCT event state register 2
        using Addr = Register::Address<0x50004310,0xfffffffc,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 5) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> statemskm{}; 
    }
    namespace Noneev2Ctrl{    ///<SCT event control register 2
        using Addr = Register::Address<0x50004314,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class heventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        namespace heventValC{
            constexpr MPL::Value<heventVal,heventVal::selectsTheLState> selectsTheLState{};
            constexpr MPL::Value<heventVal,heventVal::selectsTheHState> selectsTheHState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,heventVal> hevent{}; 
        ///Input/output select
        enum class outselVal {
            selectsTheInputsE=0x00000000,     ///<Selects the inputs elected by IOSEL.
            selectsTheOutputs=0x00000001,     ///<Selects the outputs selected by IOSEL.
        };
        namespace outselValC{
            constexpr MPL::Value<outselVal,outselVal::selectsTheInputsE> selectsTheInputsE{};
            constexpr MPL::Value<outselVal,outselVal::selectsTheOutputs> selectsTheOutputs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,outselVal> outsel{}; 
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lag the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class iocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        namespace iocondValC{
            constexpr MPL::Value<iocondVal,iocondVal::low> low{};
            constexpr MPL::Value<iocondVal,iocondVal::rise> rise{};
            constexpr MPL::Value<iocondVal,iocondVal::fall> fall{};
            constexpr MPL::Value<iocondVal,iocondVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,iocondVal> iocond{}; 
        ///Selects how the specified match and I/O condition are used and combined.
        enum class combmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        namespace combmodeValC{
            constexpr MPL::Value<combmodeVal,combmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr MPL::Value<combmodeVal,combmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr MPL::Value<combmodeVal,combmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr MPL::Value<combmodeVal,combmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,combmodeVal> combmode{}; 
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class stateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        namespace stateldValC{
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stateldVal> stateld{}; 
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class directionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUpThisEv=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDownThis=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::directionIndependen> directionIndependen{};
            constexpr MPL::Value<directionVal,directionVal::countingUpThisEv> countingUpThisEv{};
            constexpr MPL::Value<directionVal,directionVal::countingDownThis> countingDownThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,directionVal> direction{}; 
    }
    namespace Noneev3State{    ///<SCT event state register 3
        using Addr = Register::Address<0x50004318,0xfffffffc,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 5) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> statemskm{}; 
    }
    namespace Noneev3Ctrl{    ///<SCT event control register 3
        using Addr = Register::Address<0x5000431c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class heventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        namespace heventValC{
            constexpr MPL::Value<heventVal,heventVal::selectsTheLState> selectsTheLState{};
            constexpr MPL::Value<heventVal,heventVal::selectsTheHState> selectsTheHState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,heventVal> hevent{}; 
        ///Input/output select
        enum class outselVal {
            selectsTheInputsE=0x00000000,     ///<Selects the inputs elected by IOSEL.
            selectsTheOutputs=0x00000001,     ///<Selects the outputs selected by IOSEL.
        };
        namespace outselValC{
            constexpr MPL::Value<outselVal,outselVal::selectsTheInputsE> selectsTheInputsE{};
            constexpr MPL::Value<outselVal,outselVal::selectsTheOutputs> selectsTheOutputs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,outselVal> outsel{}; 
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lag the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class iocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        namespace iocondValC{
            constexpr MPL::Value<iocondVal,iocondVal::low> low{};
            constexpr MPL::Value<iocondVal,iocondVal::rise> rise{};
            constexpr MPL::Value<iocondVal,iocondVal::fall> fall{};
            constexpr MPL::Value<iocondVal,iocondVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,iocondVal> iocond{}; 
        ///Selects how the specified match and I/O condition are used and combined.
        enum class combmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        namespace combmodeValC{
            constexpr MPL::Value<combmodeVal,combmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr MPL::Value<combmodeVal,combmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr MPL::Value<combmodeVal,combmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr MPL::Value<combmodeVal,combmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,combmodeVal> combmode{}; 
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class stateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        namespace stateldValC{
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stateldVal> stateld{}; 
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class directionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUpThisEv=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDownThis=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::directionIndependen> directionIndependen{};
            constexpr MPL::Value<directionVal,directionVal::countingUpThisEv> countingUpThisEv{};
            constexpr MPL::Value<directionVal,directionVal::countingDownThis> countingDownThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,directionVal> direction{}; 
    }
    namespace Noneev4State{    ///<SCT event state register 4
        using Addr = Register::Address<0x50004320,0xfffffffc,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 5) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> statemskm{}; 
    }
    namespace Noneev4Ctrl{    ///<SCT event control register 4
        using Addr = Register::Address<0x50004324,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class heventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        namespace heventValC{
            constexpr MPL::Value<heventVal,heventVal::selectsTheLState> selectsTheLState{};
            constexpr MPL::Value<heventVal,heventVal::selectsTheHState> selectsTheHState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,heventVal> hevent{}; 
        ///Input/output select
        enum class outselVal {
            selectsTheInputsE=0x00000000,     ///<Selects the inputs elected by IOSEL.
            selectsTheOutputs=0x00000001,     ///<Selects the outputs selected by IOSEL.
        };
        namespace outselValC{
            constexpr MPL::Value<outselVal,outselVal::selectsTheInputsE> selectsTheInputsE{};
            constexpr MPL::Value<outselVal,outselVal::selectsTheOutputs> selectsTheOutputs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,outselVal> outsel{}; 
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lag the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class iocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        namespace iocondValC{
            constexpr MPL::Value<iocondVal,iocondVal::low> low{};
            constexpr MPL::Value<iocondVal,iocondVal::rise> rise{};
            constexpr MPL::Value<iocondVal,iocondVal::fall> fall{};
            constexpr MPL::Value<iocondVal,iocondVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,iocondVal> iocond{}; 
        ///Selects how the specified match and I/O condition are used and combined.
        enum class combmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        namespace combmodeValC{
            constexpr MPL::Value<combmodeVal,combmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr MPL::Value<combmodeVal,combmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr MPL::Value<combmodeVal,combmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr MPL::Value<combmodeVal,combmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,combmodeVal> combmode{}; 
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class stateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        namespace stateldValC{
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stateldVal> stateld{}; 
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class directionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUpThisEv=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDownThis=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::directionIndependen> directionIndependen{};
            constexpr MPL::Value<directionVal,directionVal::countingUpThisEv> countingUpThisEv{};
            constexpr MPL::Value<directionVal,directionVal::countingDownThis> countingDownThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,directionVal> direction{}; 
    }
    namespace Noneev5State{    ///<SCT event state register 5
        using Addr = Register::Address<0x50004328,0xfffffffc,0,unsigned>;
        ///If bit m is one, event n (n= 0 to 5) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> statemskm{}; 
    }
    namespace Noneev5Ctrl{    ///<SCT event control register 5
        using Addr = Register::Address<0x5000432c,0xff800000,0,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class heventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        namespace heventValC{
            constexpr MPL::Value<heventVal,heventVal::selectsTheLState> selectsTheLState{};
            constexpr MPL::Value<heventVal,heventVal::selectsTheHState> selectsTheHState{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,heventVal> hevent{}; 
        ///Input/output select
        enum class outselVal {
            selectsTheInputsE=0x00000000,     ///<Selects the inputs elected by IOSEL.
            selectsTheOutputs=0x00000001,     ///<Selects the outputs selected by IOSEL.
        };
        namespace outselValC{
            constexpr MPL::Value<outselVal,outselVal::selectsTheInputsE> selectsTheInputsE{};
            constexpr MPL::Value<outselVal,outselVal::selectsTheOutputs> selectsTheOutputs{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,outselVal> outsel{}; 
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lag the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class iocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        namespace iocondValC{
            constexpr MPL::Value<iocondVal,iocondVal::low> low{};
            constexpr MPL::Value<iocondVal,iocondVal::rise> rise{};
            constexpr MPL::Value<iocondVal,iocondVal::fall> fall{};
            constexpr MPL::Value<iocondVal,iocondVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,iocondVal> iocond{}; 
        ///Selects how the specified match and I/O condition are used and combined.
        enum class combmodeVal {
            orTheEventOccurs=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            matchUsesTheSpec=0x00000001,     ///<MATCH. Uses the specified match only.
            ioUsesTheSpecifi=0x00000002,     ///<IO. Uses the specified I/O condition only.
            andTheEventOccur=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        namespace combmodeValC{
            constexpr MPL::Value<combmodeVal,combmodeVal::orTheEventOccurs> orTheEventOccurs{};
            constexpr MPL::Value<combmodeVal,combmodeVal::matchUsesTheSpec> matchUsesTheSpec{};
            constexpr MPL::Value<combmodeVal,combmodeVal::ioUsesTheSpecifi> ioUsesTheSpecifi{};
            constexpr MPL::Value<combmodeVal,combmodeVal::andTheEventOccur> andTheEventOccur{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,combmodeVal> combmode{}; 
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class stateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        namespace stateldValC{
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr MPL::Value<stateldVal,stateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stateldVal> stateld{}; 
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class directionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUpThisEv=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDownThis=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::directionIndependen> directionIndependen{};
            constexpr MPL::Value<directionVal,directionVal::countingUpThisEv> countingUpThisEv{};
            constexpr MPL::Value<directionVal,directionVal::countingDownThis> countingDownThis{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,directionVal> direction{}; 
    }
    namespace Noneout0Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x50004500,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout0Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x50004504,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout1Set{    ///<SCT output 1 set register
        using Addr = Register::Address<0x50004508,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout1Clr{    ///<SCT output 1 clear register
        using Addr = Register::Address<0x5000450c,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout2Set{    ///<SCT output 2 set register
        using Addr = Register::Address<0x50004510,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout2Clr{    ///<SCT output 2 clear register
        using Addr = Register::Address<0x50004514,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
    namespace Noneout3Set{    ///<SCT output 3 set register
        using Addr = Register::Address<0x50004518,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> set{}; 
    }
    namespace Noneout3Clr{    ///<SCT output 3 clear register
        using Addr = Register::Address<0x5000451c,0xffffffc0,0,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 5 = bit 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> clr{}; 
    }
}
