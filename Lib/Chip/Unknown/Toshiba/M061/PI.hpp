#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PI)
    namespace Nonedata{    ///<PI Data Register
        using Addr = Register::Address<0x400c0800,0xffffff80,0,unsigned>;
        ///PI0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0{}; 
        ///PI1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1{}; 
        ///PI2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2{}; 
        ///PI3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3{}; 
        ///PI4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4{}; 
        ///PI5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5{}; 
        ///PI6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6{}; 
    }
    namespace Nonecr{    ///<PI Control Register
        using Addr = Register::Address<0x400c0804,0xffffff80,0,unsigned>;
        ///PI0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0c{}; 
        ///PI1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1c{}; 
        ///PI2C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2c{}; 
        ///PI3C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3c{}; 
        ///PI4C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4c{}; 
        ///PI5C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5c{}; 
        ///PI6C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6c{}; 
    }
    namespace Nonefr1{    ///<PI Function Register 1
        using Addr = Register::Address<0x400c0808,0xffffff80,0,unsigned>;
        ///PI0F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0f1{}; 
        ///PI1F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1f1{}; 
        ///PI2F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2f1{}; 
        ///PI3F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3f1{}; 
        ///PI4F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4f1{}; 
        ///PI5F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5f1{}; 
        ///PI6F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6f1{}; 
    }
    namespace Nonefr2{    ///<PI Function Register 2
        using Addr = Register::Address<0x400c080c,0xffffffba,0,unsigned>;
        ///PI0F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0f2{}; 
        ///PI2F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2f2{}; 
        ///PI6F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6f2{}; 
    }
    namespace Nonefr3{    ///<PI Function Register 3
        using Addr = Register::Address<0x400c0810,0xffffffbb,0,unsigned>;
        ///PI2F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2f3{}; 
        ///PI6F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6f3{}; 
    }
    namespace Noneod{    ///<PI OPIn Drain Control Register
        using Addr = Register::Address<0x400c0828,0xffffff80,0,unsigned>;
        ///PI0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0od{}; 
        ///PI1OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1od{}; 
        ///PI2OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2od{}; 
        ///PI3OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3od{}; 
        ///PI4OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4od{}; 
        ///PI5OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5od{}; 
        ///PI6OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6od{}; 
    }
    namespace Nonepup{    ///<PI Pull-Up Control Register
        using Addr = Register::Address<0x400c082c,0xffffff80,0,unsigned>;
        ///PI0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0up{}; 
        ///PI1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1up{}; 
        ///PI2UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2up{}; 
        ///PI3UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3up{}; 
        ///PI4UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4up{}; 
        ///PI5UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5up{}; 
        ///PI6UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6up{}; 
    }
    namespace Nonepdn{    ///<PI Pull-Down Control Register
        using Addr = Register::Address<0x400c0830,0xffffff80,0,unsigned>;
        ///PI0DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0dn{}; 
        ///PI1DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1dn{}; 
        ///PI2DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2dn{}; 
        ///PI3DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3dn{}; 
        ///PI4DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4dn{}; 
        ///PI5DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5dn{}; 
        ///PI6DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6dn{}; 
    }
    namespace Noneie{    ///<PI Input Enable Control Register
        using Addr = Register::Address<0x400c0838,0xffffff80,0,unsigned>;
        ///PI0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0ie{}; 
        ///PI1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1ie{}; 
        ///PI2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2ie{}; 
        ///PI3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3ie{}; 
        ///PI4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4ie{}; 
        ///PI5IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5ie{}; 
        ///PI6IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6ie{}; 
    }
}
