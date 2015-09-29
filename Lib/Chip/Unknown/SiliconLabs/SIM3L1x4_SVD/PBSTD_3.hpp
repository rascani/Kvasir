#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonepb{    ///<Output Latch
        using Addr = Register::Address<0x4002a280,0xffff0000,0,unsigned>;
        ///Output Latch. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Nonepbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a290,0xffff0000,0,unsigned>;
        ///Pin Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbpin{}; 
    }
    namespace Nonepbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a2a0,0xffff0000,0,unsigned>;
        ///Mode Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Nonepbskipen{    ///<Crossbar Pin Skip Enable
        using Addr = Register::Address<0x4002a2b0,0xffff0000,0,unsigned>;
        ///Crossbar Pin Skip Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbskipen{}; 
    }
    namespace Nonepboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a2c0,0xffff0000,0,unsigned>;
        ///Output Mode. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
    }
    namespace Nonepbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a2d0,0xfffe0000,0,unsigned>;
        ///Drive Strength. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        ///Port Bank Weak Pull-up Enable. 
        enum class pbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        namespace pbpuenValC{
            constexpr MPL::Value<pbpuenVal,pbpuenVal::disabled> disabled{};
            constexpr MPL::Value<pbpuenVal,pbpuenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pbpuenVal> pbpuen{}; 
    }
    namespace Nonepm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a2e0,0xffff0000,0,unsigned>;
        ///Port Match Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Nonepmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a2f0,0xffff0000,0,unsigned>;
        ///Port Match Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
    }
}