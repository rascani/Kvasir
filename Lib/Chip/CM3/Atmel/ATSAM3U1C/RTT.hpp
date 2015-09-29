#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real-time Timer
    namespace RttMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1230,0xfff80000,0,unsigned>;
        ///Real-time Timer Prescaler Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rtpres{}; 
        ///Alarm Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> almien{}; 
        ///Real-time Timer Increment Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rttincien{}; 
        ///Real-time Timer Restart
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rttrst{}; 
    }
    namespace RttAr{    ///<Alarm Register
        using Addr = Register::Address<0x400e1234,0x00000000,0,unsigned>;
        ///Alarm Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> almv{}; 
    }
    namespace RttVr{    ///<Value Register
        using Addr = Register::Address<0x400e1238,0x00000000,0,unsigned>;
        ///Current Real-time Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crtv{}; 
    }
    namespace RttSr{    ///<Status Register
        using Addr = Register::Address<0x400e123c,0xfffffffc,0,unsigned>;
        ///Real-time Alarm Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> alms{}; 
        ///Real-time Timer Increment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rttinc{}; 
    }
}
