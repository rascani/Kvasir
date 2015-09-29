#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortePcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037000,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037004,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037008,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003700c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037010,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037014,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037018,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003701c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037020,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037024,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037028,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003702c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037030,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037034,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037038,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003703c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037040,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037044,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037048,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003704c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037050,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037054,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037058,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003705c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037060,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037064,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037068,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003706c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037070,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037074,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x40037078,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortePcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4003707c,0xfef078fd,0,unsigned>;
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pullup resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v0100=0x00000004,     ///<Reserved.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v0100> v0100{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PorteGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x40037080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PorteGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x40037084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PorteIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x400370a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
    namespace PorteDfer{    ///<Digital Filter Enable Register
        using Addr = Register::Address<0x400370c0,0x00000000,0,unsigned>;
        ///Digital Filter Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dfe{}; 
    }
    namespace PorteDfcr{    ///<Digital Filter Clock Register
        using Addr = Register::Address<0x400370c4,0xfffffffe,0,unsigned>;
        ///Clock Source
        enum class csVal {
            v0=0x00000000,     ///<Digital filters are clocked by the bus clock.
            v1=0x00000001,     ///<Digital filters are clocked by the 1 kHz LPO clock.
        };
        namespace csValC{
            constexpr MPL::Value<csVal,csVal::v0> v0{};
            constexpr MPL::Value<csVal,csVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,csVal> cs{}; 
    }
    namespace PorteDfwr{    ///<Digital Filter Width Register
        using Addr = Register::Address<0x400370c8,0xffffffe0,0,unsigned>;
        ///Filter Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> filt{}; 
    }
}
