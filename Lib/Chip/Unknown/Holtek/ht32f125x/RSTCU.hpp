#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//RSTCU
    namespace NonerstcuGrsr{    ///<RSTCU_GRSR
        using Addr = Register::Address<0x40088100,0xfffffff0,0,unsigned>;
        ///SYSRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sysrstf{}; 
        ///EXTRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extrstf{}; 
        ///WDTRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtrstf{}; 
        ///PORSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> porstf{}; 
    }
    namespace NonerstcuApbprstr0{    ///<RSTCU_APBPRSTR0
        using Addr = Register::Address<0x40088108,0xfffc3eee,0,unsigned>;
        ///I2CRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2crst{}; 
        ///SPIRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spirst{}; 
        ///URRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urrst{}; 
        ///AFIORST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> afiorst{}; 
        ///EXTIRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extirst{}; 
        ///PARST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> parst{}; 
        ///PBRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pbrst{}; 
    }
    namespace NonerstcuApbprstr1{    ///<RSTCU_APBPRSTR1
        using Addr = Register::Address<0x4008810c,0xfe3ffcef,0,unsigned>;
        ///WDTRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdtrst{}; 
        ///GPTM0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gptm0rst{}; 
        ///GPTM1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gptm1rst{}; 
        ///OPA0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa0rst{}; 
        ///OPA1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa1rst{}; 
        ///ADCRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adcrst{}; 
    }
}
