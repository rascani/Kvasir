#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//OPACMP
    namespace Noneopacr0{    ///<OPACR0
        using Addr = Register::Address<0x40018000,0xfffffef0,0,unsigned>;
        ///OPA0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa0en{}; 
        ///OPC0MS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opc0ms{}; 
        ///A0OFM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a0ofm{}; 
        ///A0RS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a0rs{}; 
        ///CMP0S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp0s{}; 
    }
    namespace Noneofvcr0{    ///<OFVCR0
        using Addr = Register::Address<0x40018004,0xffffffc0,0,unsigned>;
        ///A0OF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> a0of{}; 
    }
    namespace Nonecmpier0{    ///<CMPIER0
        using Addr = Register::Address<0x40018008,0xfffffffc,0,unsigned>;
        ///CF0IEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0ien{}; 
        ///CR0IEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0ien{}; 
    }
    namespace Nonecmprsr0{    ///<CMPRSR0
        using Addr = Register::Address<0x4001800c,0xfffffffc,0,unsigned>;
        ///CF0RAW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0raw{}; 
        ///CR0RAW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0raw{}; 
    }
    namespace Nonecmpisr0{    ///<CMPISR0
        using Addr = Register::Address<0x40018010,0xfffffffc,0,unsigned>;
        ///CF0IS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0is{}; 
        ///CR0IS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0is{}; 
    }
    namespace Nonecmpiclr0{    ///<CMPICLR0
        using Addr = Register::Address<0x40018014,0xfffffffc,0,unsigned>;
        ///CF0ICLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf0iclr{}; 
        ///CR0ICLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr0iclr{}; 
    }
    namespace Noneopacr1{    ///<OPACR1
        using Addr = Register::Address<0x40018100,0xfffffef0,0,unsigned>;
        ///OPA1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> opa1en{}; 
        ///OPC1MS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> opc1ms{}; 
        ///A1OFM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> a1ofm{}; 
        ///A1RS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> a1rs{}; 
        ///CMP1S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmp1s{}; 
    }
    namespace Noneofvcr1{    ///<OFVCR1
        using Addr = Register::Address<0x40018104,0xffffffc0,0,unsigned>;
        ///A1OF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> a1of{}; 
    }
    namespace Nonecmpier1{    ///<CMPIER1
        using Addr = Register::Address<0x40018108,0xfffffffc,0,unsigned>;
        ///CF1IEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1ien{}; 
        ///CR1IEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1ien{}; 
    }
    namespace Nonecmprsr1{    ///<CMPRSR1
        using Addr = Register::Address<0x4001810c,0xfffffffc,0,unsigned>;
        ///CF1RAW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1raw{}; 
        ///CR1RAW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1raw{}; 
    }
    namespace Nonecmpisr1{    ///<CMPISR1
        using Addr = Register::Address<0x40018110,0xfffffffc,0,unsigned>;
        ///CF1IS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1is{}; 
        ///CR1IS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1is{}; 
    }
    namespace Nonecmpiclr1{    ///<CMPICLR1
        using Addr = Register::Address<0x40018114,0xfffffffc,0,unsigned>;
        ///CF1ICLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cf1iclr{}; 
        ///CR1ICLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cr1iclr{}; 
    }
}
