#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit Multi-Purpose Timer (MPT-PMD)
    namespace Nonemden{    ///<PMD Enable Register
        using Addr = Register::Address<0x400f6000,0xfffffffe,0,unsigned>;
        ///PWMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwmen{}; 
    }
    namespace Noneportmd{    ///<Port Output Mode Register
        using Addr = Register::Address<0x400f6004,0xfffffffe,0,unsigned>;
        ///PORTMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> portmd{}; 
    }
    namespace Nonemdcr{    ///<PMD Control Register
        using Addr = Register::Address<0x400f6008,0xffffff80,0,unsigned>;
        ///PWMMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwmmd{}; 
        ///INTPRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> intprd{}; 
        ///PINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pint{}; 
        ///DTYMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtymd{}; 
        ///SYNTMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> syntmd{}; 
        ///PWMCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pwmck{}; 
    }
    namespace Nonecntsta{    ///<PWM Counter Status Register
        using Addr = Register::Address<0x400f600c,0xfffffffe,0,unsigned>;
        ///UPDWN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> updwn{}; 
    }
    namespace Nonemdcnt{    ///<PWM Counter Register
        using Addr = Register::Address<0x400f6010,0xffff0000,0,unsigned>;
        ///MDCNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mdcnt{}; 
    }
    namespace Nonemdprd{    ///<PWM Period Register
        using Addr = Register::Address<0x400f6014,0xffff0000,0,unsigned>;
        ///MDPRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mdprd{}; 
    }
    namespace Nonecmpu{    ///<PWM Compare Register
        using Addr = Register::Address<0x400f6018,0xffff0000,0,unsigned>;
        ///CMPU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpu{}; 
    }
    namespace Nonecmpv{    ///<PWM Compare Register
        using Addr = Register::Address<0x400f601c,0xffff0000,0,unsigned>;
        ///CMPV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpv{}; 
    }
    namespace Nonecmpw{    ///<PWM Compare Register
        using Addr = Register::Address<0x400f6020,0xffff0000,0,unsigned>;
        ///CMPW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmpw{}; 
    }
    namespace Nonemdout{    ///<PMD Output Control Register
        using Addr = Register::Address<0x400f6028,0xfffff8c0,0,unsigned>;
        ///UOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> uoc{}; 
        ///VOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> voc{}; 
        ///WOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> woc{}; 
        ///UPWM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> upwm{}; 
        ///VPWM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vpwm{}; 
        ///WPWM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> wpwm{}; 
    }
    namespace Nonemdpot{    ///<PMD Output Setting Register
        using Addr = Register::Address<0x400f602c,0xfffffff0,0,unsigned>;
        ///PSYNCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> psyncs{}; 
        ///POLL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> poll{}; 
        ///POLH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> polh{}; 
    }
    namespace Noneemgrel{    ///<EMG Release Register
        using Addr = Register::Address<0x400f6030,0xffffff00,0,unsigned>;
        ///EMGREL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> emgrel{}; 
    }
    namespace Noneemgcr{    ///<EMG Control Register
        using Addr = Register::Address<0x400f6034,0xfffff0c4,0,unsigned>;
        ///EMGEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emgen{}; 
        ///EMGRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> emgrs{}; 
        ///EMGMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> emgmd{}; 
        ///INHEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inhen{}; 
        ///EMGCNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> emgcnt{}; 
    }
    namespace Noneemgsta{    ///<EMG Status Register
        using Addr = Register::Address<0x400f6038,0xfffffffc,0,unsigned>;
        ///EMGST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> emgst{}; 
        ///EMGI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> emgi{}; 
    }
    namespace Nonedtr{    ///<Dead Time Register
        using Addr = Register::Address<0x400f6044,0xffffff00,0,unsigned>;
        ///DTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dtr{}; 
    }
}
