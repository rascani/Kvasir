#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PJ)
    namespace Nonedata{    ///<PJ Data Register
        using Addr = Register::Address<0x400c0900,0xffffff00,0,unsigned>;
        ///PJ0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0{}; 
        ///PJ1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1{}; 
        ///PJ2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2{}; 
        ///PJ3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3{}; 
        ///PJ4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4{}; 
        ///PJ5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5{}; 
        ///PJ6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6{}; 
        ///PJ7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7{}; 
    }
    namespace Nonecr{    ///<PJ Control Register
        using Addr = Register::Address<0x400c0904,0xffffff00,0,unsigned>;
        ///PJ0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0c{}; 
        ///PJ1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1c{}; 
        ///PJ2C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2c{}; 
        ///PJ3C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3c{}; 
        ///PJ4C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4c{}; 
        ///PJ5C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5c{}; 
        ///PJ6C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6c{}; 
        ///PJ7C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7c{}; 
    }
    namespace Nonefr2{    ///<PJ Function Register 2
        using Addr = Register::Address<0x400c090c,0xffffff7f,0,unsigned>;
        ///PJ7F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7f2{}; 
    }
    namespace Nonefr3{    ///<PJ Function Register 3
        using Addr = Register::Address<0x400c0910,0xffffff3f,0,unsigned>;
        ///PJ6F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6f3{}; 
        ///PJ7F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7f3{}; 
    }
    namespace Nonepup{    ///<PJ Pull-Up Control Register
        using Addr = Register::Address<0x400c092c,0xffffff00,0,unsigned>;
        ///PJ0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0up{}; 
        ///PJ1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1up{}; 
        ///PJ2UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2up{}; 
        ///PJ3UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3up{}; 
        ///PJ4UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4up{}; 
        ///PJ5UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5up{}; 
        ///PJ6UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6up{}; 
        ///PJ7UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7up{}; 
    }
    namespace Noneie{    ///<PJ Input Enable Control Register
        using Addr = Register::Address<0x400c0938,0xffffff00,0,unsigned>;
        ///PJ0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0ie{}; 
        ///PJ1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1ie{}; 
        ///PJ2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2ie{}; 
        ///PJ3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3ie{}; 
        ///PJ4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4ie{}; 
        ///PJ5IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5ie{}; 
        ///PJ6IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pj6ie{}; 
        ///PJ7IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pj7ie{}; 
    }
}
