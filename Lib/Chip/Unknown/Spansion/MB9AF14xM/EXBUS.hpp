#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Bus Interface
    namespace Nonemode0{    ///<Mode Register 0
        using Addr = Register::Address<0x4003f000,0xffffc400,0,unsigned>;
        ///select how to set the MOEX width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> moexeup{}; 
        ///select a CS assertion from the start of accessing to the end of address output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mpxcsof{}; 
        ///select whether or not the address is output to the data lines in multiplex mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mpxdoff{}; 
        ///set up the polarity of the ALE signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aleinv{}; 
        ///select operation bus mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mpxmode{}; 
        ///select to which idle cycle the write data output is extended
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shrtdout{}; 
        ///control the external RDY function
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rdy{}; 
        ///NOR Flash memory page access mode 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> page{}; 
        ///NAND Flash memory mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nand{}; 
        ///disable the write enable signal (MWEX) operation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> weoff{}; 
        ///Read Byte Mask ON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbmon{}; 
        ///specify Data Width 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wdth{}; 
    }
    namespace Nonemode1{    ///<Mode Register 1
        using Addr = Register::Address<0x4003f004,0xffffffff,0,unsigned>;
    }
    namespace Nonemode6{    ///<Mode Register 6
        using Addr = Register::Address<0x4003f018,0xffffffff,0,unsigned>;
    }
    namespace Nonemode7{    ///<Mode Register 7
        using Addr = Register::Address<0x4003f01c,0xffffffff,0,unsigned>;
    }
    namespace Nonetim0{    ///<Timing Register 0
        using Addr = Register::Address<0x4003f020,0x00000000,0,unsigned>;
        ///Write Idle Cycle 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> widlc{}; 
        ///Write Enable Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> wwec{}; 
        ///Write Address Setup cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> wadc{}; 
        ///Write Access Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wacc{}; 
        ///Read Idle Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ridlc{}; 
        ///First Read Address Cycle 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fradc{}; 
        ///Read Address Setup cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> radc{}; 
        ///Read Access Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> racc{}; 
    }
    namespace Nonetim1{    ///<Timing Register 1
        using Addr = Register::Address<0x4003f024,0xffffffff,0,unsigned>;
    }
    namespace Nonetim6{    ///<Timing Register 6
        using Addr = Register::Address<0x4003f038,0xffffffff,0,unsigned>;
    }
    namespace Nonetim7{    ///<Timing Register 7
        using Addr = Register::Address<0x4003f03c,0xffffffff,0,unsigned>;
    }
    namespace Nonearea0{    ///<Area Register 0
        using Addr = Register::Address<0x4003f040,0xff80ff00,0,unsigned>;
        ///address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Nonearea1{    ///<Area Register 1
        using Addr = Register::Address<0x4003f044,0xff80ff00,0,unsigned>;
        ///address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Nonearea6{    ///<Area Register 6
        using Addr = Register::Address<0x4003f058,0xff80ff00,0,unsigned>;
        ///address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Nonearea7{    ///<Area Register 7
        using Addr = Register::Address<0x4003f05c,0xff80ff00,0,unsigned>;
        ///address mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace Noneatim0{    ///<ALE Timing Register 0
        using Addr = Register::Address<0x4003f060,0xfffff000,0,unsigned>;
        ///Address Latch Enable Width 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> alew{}; 
        ///Address Latch Enable Setup cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ales{}; 
        ///Address Latch Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> alc{}; 
    }
    namespace Noneatim1{    ///<ALE Timing Register 1
        using Addr = Register::Address<0x4003f064,0xffffffff,0,unsigned>;
    }
    namespace Noneatim6{    ///<ALE Timing Register 6
        using Addr = Register::Address<0x4003f078,0xffffffff,0,unsigned>;
    }
    namespace Noneatim7{    ///<ALE Timing Register 7
        using Addr = Register::Address<0x4003f07c,0xffffffff,0,unsigned>;
    }
    namespace Nonedclkr{    ///<Division Clock Register
        using Addr = Register::Address<0x4003f300,0xffffffe0,0,unsigned>;
        ///MCLK ON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mclkon{}; 
        ///MCLK Division Ratio Setup
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mdiv{}; 
    }
}
