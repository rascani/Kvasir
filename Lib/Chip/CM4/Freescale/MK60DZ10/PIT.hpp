#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Periodic Interrupt Timer
    namespace PitMcr{    ///<PIT Module Control Register
        using Addr = Register::Address<0x40037000,0xfffffffc,0,unsigned>;
        ///Freeze
        enum class frzVal {
            v0=0x00000000,     ///<Timers continue to run in debug mode.
            v1=0x00000001,     ///<Timers are stopped in debug mode.
        };
        namespace frzValC{
            constexpr MPL::Value<frzVal,frzVal::v0> v0{};
            constexpr MPL::Value<frzVal,frzVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,frzVal> frz{}; 
        ///Module Disable
        enum class mdisVal {
            v0=0x00000000,     ///<Clock for PIT Timers is enabled.
            v1=0x00000001,     ///<Clock for PIT Timers is disabled.
        };
        namespace mdisValC{
            constexpr MPL::Value<mdisVal,mdisVal::v0> v0{};
            constexpr MPL::Value<mdisVal,mdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mdisVal> mdis{}; 
    }
    namespace PitLdval0{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037100,0x00000000,0,unsigned>;
        ///Timer Start Value Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval1{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037110,0x00000000,0,unsigned>;
        ///Timer Start Value Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval2{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037120,0x00000000,0,unsigned>;
        ///Timer Start Value Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitLdval3{    ///<Timer Load Value Register
        using Addr = Register::Address<0x40037130,0x00000000,0,unsigned>;
        ///Timer Start Value Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tsv{}; 
    }
    namespace PitCval0{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037104,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval1{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037114,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval2{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037124,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitCval3{    ///<Current Timer Value Register
        using Addr = Register::Address<0x40037134,0x00000000,0,unsigned>;
        ///Current Timer Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tvl{}; 
    }
    namespace PitTctrl0{    ///<Timer Control Register
        using Addr = Register::Address<0x40037108,0xfffffffc,0,unsigned>;
        ///Timer Enable Bit.
        enum class tenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is active.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Interrupt Enable Bit.
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tieVal> tie{}; 
    }
    namespace PitTctrl1{    ///<Timer Control Register
        using Addr = Register::Address<0x40037118,0xfffffffc,0,unsigned>;
        ///Timer Enable Bit.
        enum class tenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is active.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Interrupt Enable Bit.
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tieVal> tie{}; 
    }
    namespace PitTctrl2{    ///<Timer Control Register
        using Addr = Register::Address<0x40037128,0xfffffffc,0,unsigned>;
        ///Timer Enable Bit.
        enum class tenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is active.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Interrupt Enable Bit.
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tieVal> tie{}; 
    }
    namespace PitTctrl3{    ///<Timer Control Register
        using Addr = Register::Address<0x40037138,0xfffffffc,0,unsigned>;
        ///Timer Enable Bit.
        enum class tenVal {
            v0=0x00000000,     ///<Timer n is disabled.
            v1=0x00000001,     ///<Timer n is active.
        };
        namespace tenValC{
            constexpr MPL::Value<tenVal,tenVal::v0> v0{};
            constexpr MPL::Value<tenVal,tenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tenVal> ten{}; 
        ///Timer Interrupt Enable Bit.
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt requests from Timer n are disabled.
            v1=0x00000001,     ///<Interrupt will be requested whenever TIF is set.
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tieVal> tie{}; 
    }
    namespace PitTflg0{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003710c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag.
        enum class tifVal {
            v0=0x00000000,     ///<Time-out has not yet occurred.
            v1=0x00000001,     ///<Time-out has occurred.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
    }
    namespace PitTflg1{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003711c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag.
        enum class tifVal {
            v0=0x00000000,     ///<Time-out has not yet occurred.
            v1=0x00000001,     ///<Time-out has occurred.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
    }
    namespace PitTflg2{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003712c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag.
        enum class tifVal {
            v0=0x00000000,     ///<Time-out has not yet occurred.
            v1=0x00000001,     ///<Time-out has occurred.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
    }
    namespace PitTflg3{    ///<Timer Flag Register
        using Addr = Register::Address<0x4003713c,0xfffffffe,0,unsigned>;
        ///Timer Interrupt Flag.
        enum class tifVal {
            v0=0x00000000,     ///<Time-out has not yet occurred.
            v1=0x00000001,     ///<Time-out has occurred.
        };
        namespace tifValC{
            constexpr MPL::Value<tifVal,tifVal::v0> v0{};
            constexpr MPL::Value<tifVal,tifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tifVal> tif{}; 
    }
}
