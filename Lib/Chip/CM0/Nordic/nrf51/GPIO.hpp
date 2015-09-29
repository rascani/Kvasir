#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose input and output.
    namespace Noneout{    ///<Write GPIO port.
        using Addr = Register::Address<0x50000504,0x00000000,0,unsigned>;
        ///Pin 0.
        enum class pin0Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::low> low{};
            constexpr MPL::Value<pin0Val,pin0Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Pin 1.
        enum class pin1Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::low> low{};
            constexpr MPL::Value<pin1Val,pin1Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Pin 2.
        enum class pin2Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::low> low{};
            constexpr MPL::Value<pin2Val,pin2Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Pin 3.
        enum class pin3Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::low> low{};
            constexpr MPL::Value<pin3Val,pin3Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Pin 4.
        enum class pin4Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::low> low{};
            constexpr MPL::Value<pin4Val,pin4Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Pin 5.
        enum class pin5Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::low> low{};
            constexpr MPL::Value<pin5Val,pin5Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Pin 6.
        enum class pin6Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::low> low{};
            constexpr MPL::Value<pin6Val,pin6Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Pin 7.
        enum class pin7Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::low> low{};
            constexpr MPL::Value<pin7Val,pin7Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Pin 8.
        enum class pin8Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::low> low{};
            constexpr MPL::Value<pin8Val,pin8Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Pin 9.
        enum class pin9Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::low> low{};
            constexpr MPL::Value<pin9Val,pin9Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Pin 10.
        enum class pin10Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::low> low{};
            constexpr MPL::Value<pin10Val,pin10Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Pin 11.
        enum class pin11Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::low> low{};
            constexpr MPL::Value<pin11Val,pin11Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Pin 12.
        enum class pin12Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::low> low{};
            constexpr MPL::Value<pin12Val,pin12Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Pin 13.
        enum class pin13Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::low> low{};
            constexpr MPL::Value<pin13Val,pin13Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Pin 14.
        enum class pin14Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::low> low{};
            constexpr MPL::Value<pin14Val,pin14Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Pin 15.
        enum class pin15Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::low> low{};
            constexpr MPL::Value<pin15Val,pin15Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Pin 16.
        enum class pin16Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::low> low{};
            constexpr MPL::Value<pin16Val,pin16Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Pin 17.
        enum class pin17Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::low> low{};
            constexpr MPL::Value<pin17Val,pin17Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Pin 18.
        enum class pin18Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::low> low{};
            constexpr MPL::Value<pin18Val,pin18Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Pin 19.
        enum class pin19Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::low> low{};
            constexpr MPL::Value<pin19Val,pin19Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Pin 20.
        enum class pin20Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::low> low{};
            constexpr MPL::Value<pin20Val,pin20Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Pin 21.
        enum class pin21Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::low> low{};
            constexpr MPL::Value<pin21Val,pin21Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Pin 22.
        enum class pin22Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::low> low{};
            constexpr MPL::Value<pin22Val,pin22Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Pin 23.
        enum class pin23Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::low> low{};
            constexpr MPL::Value<pin23Val,pin23Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Pin 24.
        enum class pin24Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::low> low{};
            constexpr MPL::Value<pin24Val,pin24Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Pin 25.
        enum class pin25Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::low> low{};
            constexpr MPL::Value<pin25Val,pin25Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Pin 26.
        enum class pin26Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::low> low{};
            constexpr MPL::Value<pin26Val,pin26Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Pin 27.
        enum class pin27Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::low> low{};
            constexpr MPL::Value<pin27Val,pin27Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Pin 28.
        enum class pin28Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::low> low{};
            constexpr MPL::Value<pin28Val,pin28Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Pin 29.
        enum class pin29Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::low> low{};
            constexpr MPL::Value<pin29Val,pin29Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Pin 30.
        enum class pin30Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::low> low{};
            constexpr MPL::Value<pin30Val,pin30Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Pin 31.
        enum class pin31Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::low> low{};
            constexpr MPL::Value<pin31Val,pin31Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace Noneoutset{    ///<Set individual bits in GPIO port.
        using Addr = Register::Address<0x50000508,0x00000000,0,unsigned>;
        ///Pin 0.
        enum class pin0Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::low> low{};
            constexpr MPL::Value<pin0Val,pin0Val::high> high{};
            constexpr MPL::Value<pin0Val,pin0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Pin 1.
        enum class pin1Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::low> low{};
            constexpr MPL::Value<pin1Val,pin1Val::high> high{};
            constexpr MPL::Value<pin1Val,pin1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Pin 2.
        enum class pin2Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::low> low{};
            constexpr MPL::Value<pin2Val,pin2Val::high> high{};
            constexpr MPL::Value<pin2Val,pin2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Pin 3.
        enum class pin3Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::low> low{};
            constexpr MPL::Value<pin3Val,pin3Val::high> high{};
            constexpr MPL::Value<pin3Val,pin3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Pin 4.
        enum class pin4Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::low> low{};
            constexpr MPL::Value<pin4Val,pin4Val::high> high{};
            constexpr MPL::Value<pin4Val,pin4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Pin 5.
        enum class pin5Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::low> low{};
            constexpr MPL::Value<pin5Val,pin5Val::high> high{};
            constexpr MPL::Value<pin5Val,pin5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Pin 6.
        enum class pin6Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::low> low{};
            constexpr MPL::Value<pin6Val,pin6Val::high> high{};
            constexpr MPL::Value<pin6Val,pin6Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Pin 7.
        enum class pin7Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::low> low{};
            constexpr MPL::Value<pin7Val,pin7Val::high> high{};
            constexpr MPL::Value<pin7Val,pin7Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Pin 8.
        enum class pin8Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::low> low{};
            constexpr MPL::Value<pin8Val,pin8Val::high> high{};
            constexpr MPL::Value<pin8Val,pin8Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Pin 9.
        enum class pin9Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::low> low{};
            constexpr MPL::Value<pin9Val,pin9Val::high> high{};
            constexpr MPL::Value<pin9Val,pin9Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Pin 10.
        enum class pin10Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::low> low{};
            constexpr MPL::Value<pin10Val,pin10Val::high> high{};
            constexpr MPL::Value<pin10Val,pin10Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Pin 11.
        enum class pin11Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::low> low{};
            constexpr MPL::Value<pin11Val,pin11Val::high> high{};
            constexpr MPL::Value<pin11Val,pin11Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Pin 12.
        enum class pin12Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::low> low{};
            constexpr MPL::Value<pin12Val,pin12Val::high> high{};
            constexpr MPL::Value<pin12Val,pin12Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Pin 13.
        enum class pin13Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::low> low{};
            constexpr MPL::Value<pin13Val,pin13Val::high> high{};
            constexpr MPL::Value<pin13Val,pin13Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Pin 14.
        enum class pin14Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::low> low{};
            constexpr MPL::Value<pin14Val,pin14Val::high> high{};
            constexpr MPL::Value<pin14Val,pin14Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Pin 15.
        enum class pin15Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::low> low{};
            constexpr MPL::Value<pin15Val,pin15Val::high> high{};
            constexpr MPL::Value<pin15Val,pin15Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Pin 16.
        enum class pin16Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::low> low{};
            constexpr MPL::Value<pin16Val,pin16Val::high> high{};
            constexpr MPL::Value<pin16Val,pin16Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Pin 17.
        enum class pin17Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::low> low{};
            constexpr MPL::Value<pin17Val,pin17Val::high> high{};
            constexpr MPL::Value<pin17Val,pin17Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Pin 18.
        enum class pin18Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::low> low{};
            constexpr MPL::Value<pin18Val,pin18Val::high> high{};
            constexpr MPL::Value<pin18Val,pin18Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Pin 19.
        enum class pin19Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::low> low{};
            constexpr MPL::Value<pin19Val,pin19Val::high> high{};
            constexpr MPL::Value<pin19Val,pin19Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Pin 20.
        enum class pin20Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::low> low{};
            constexpr MPL::Value<pin20Val,pin20Val::high> high{};
            constexpr MPL::Value<pin20Val,pin20Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Pin 21.
        enum class pin21Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::low> low{};
            constexpr MPL::Value<pin21Val,pin21Val::high> high{};
            constexpr MPL::Value<pin21Val,pin21Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Pin 22.
        enum class pin22Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::low> low{};
            constexpr MPL::Value<pin22Val,pin22Val::high> high{};
            constexpr MPL::Value<pin22Val,pin22Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Pin 23.
        enum class pin23Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::low> low{};
            constexpr MPL::Value<pin23Val,pin23Val::high> high{};
            constexpr MPL::Value<pin23Val,pin23Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Pin 24.
        enum class pin24Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::low> low{};
            constexpr MPL::Value<pin24Val,pin24Val::high> high{};
            constexpr MPL::Value<pin24Val,pin24Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Pin 25.
        enum class pin25Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::low> low{};
            constexpr MPL::Value<pin25Val,pin25Val::high> high{};
            constexpr MPL::Value<pin25Val,pin25Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Pin 26.
        enum class pin26Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::low> low{};
            constexpr MPL::Value<pin26Val,pin26Val::high> high{};
            constexpr MPL::Value<pin26Val,pin26Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Pin 27.
        enum class pin27Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::low> low{};
            constexpr MPL::Value<pin27Val,pin27Val::high> high{};
            constexpr MPL::Value<pin27Val,pin27Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Pin 28.
        enum class pin28Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::low> low{};
            constexpr MPL::Value<pin28Val,pin28Val::high> high{};
            constexpr MPL::Value<pin28Val,pin28Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Pin 29.
        enum class pin29Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::low> low{};
            constexpr MPL::Value<pin29Val,pin29Val::high> high{};
            constexpr MPL::Value<pin29Val,pin29Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Pin 30.
        enum class pin30Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::low> low{};
            constexpr MPL::Value<pin30Val,pin30Val::high> high{};
            constexpr MPL::Value<pin30Val,pin30Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Pin 31.
        enum class pin31Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            set=0x00000001,     ///<Set pin driver high.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::low> low{};
            constexpr MPL::Value<pin31Val,pin31Val::high> high{};
            constexpr MPL::Value<pin31Val,pin31Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace Noneoutclr{    ///<Clear individual bits in GPIO port.
        using Addr = Register::Address<0x5000050c,0x00000000,0,unsigned>;
        ///Pin 0.
        enum class pin0Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::low> low{};
            constexpr MPL::Value<pin0Val,pin0Val::high> high{};
            constexpr MPL::Value<pin0Val,pin0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Pin 1.
        enum class pin1Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::low> low{};
            constexpr MPL::Value<pin1Val,pin1Val::high> high{};
            constexpr MPL::Value<pin1Val,pin1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Pin 2.
        enum class pin2Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::low> low{};
            constexpr MPL::Value<pin2Val,pin2Val::high> high{};
            constexpr MPL::Value<pin2Val,pin2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Pin 3.
        enum class pin3Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::low> low{};
            constexpr MPL::Value<pin3Val,pin3Val::high> high{};
            constexpr MPL::Value<pin3Val,pin3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Pin 4.
        enum class pin4Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::low> low{};
            constexpr MPL::Value<pin4Val,pin4Val::high> high{};
            constexpr MPL::Value<pin4Val,pin4Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Pin 5.
        enum class pin5Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::low> low{};
            constexpr MPL::Value<pin5Val,pin5Val::high> high{};
            constexpr MPL::Value<pin5Val,pin5Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Pin 6.
        enum class pin6Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::low> low{};
            constexpr MPL::Value<pin6Val,pin6Val::high> high{};
            constexpr MPL::Value<pin6Val,pin6Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Pin 7.
        enum class pin7Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::low> low{};
            constexpr MPL::Value<pin7Val,pin7Val::high> high{};
            constexpr MPL::Value<pin7Val,pin7Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Pin 8.
        enum class pin8Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::low> low{};
            constexpr MPL::Value<pin8Val,pin8Val::high> high{};
            constexpr MPL::Value<pin8Val,pin8Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Pin 9.
        enum class pin9Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::low> low{};
            constexpr MPL::Value<pin9Val,pin9Val::high> high{};
            constexpr MPL::Value<pin9Val,pin9Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Pin 10.
        enum class pin10Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::low> low{};
            constexpr MPL::Value<pin10Val,pin10Val::high> high{};
            constexpr MPL::Value<pin10Val,pin10Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Pin 11.
        enum class pin11Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::low> low{};
            constexpr MPL::Value<pin11Val,pin11Val::high> high{};
            constexpr MPL::Value<pin11Val,pin11Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Pin 12.
        enum class pin12Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::low> low{};
            constexpr MPL::Value<pin12Val,pin12Val::high> high{};
            constexpr MPL::Value<pin12Val,pin12Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Pin 13.
        enum class pin13Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::low> low{};
            constexpr MPL::Value<pin13Val,pin13Val::high> high{};
            constexpr MPL::Value<pin13Val,pin13Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Pin 14.
        enum class pin14Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::low> low{};
            constexpr MPL::Value<pin14Val,pin14Val::high> high{};
            constexpr MPL::Value<pin14Val,pin14Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Pin 15.
        enum class pin15Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::low> low{};
            constexpr MPL::Value<pin15Val,pin15Val::high> high{};
            constexpr MPL::Value<pin15Val,pin15Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Pin 16.
        enum class pin16Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::low> low{};
            constexpr MPL::Value<pin16Val,pin16Val::high> high{};
            constexpr MPL::Value<pin16Val,pin16Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Pin 17.
        enum class pin17Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::low> low{};
            constexpr MPL::Value<pin17Val,pin17Val::high> high{};
            constexpr MPL::Value<pin17Val,pin17Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Pin 18.
        enum class pin18Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::low> low{};
            constexpr MPL::Value<pin18Val,pin18Val::high> high{};
            constexpr MPL::Value<pin18Val,pin18Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Pin 19.
        enum class pin19Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::low> low{};
            constexpr MPL::Value<pin19Val,pin19Val::high> high{};
            constexpr MPL::Value<pin19Val,pin19Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Pin 20.
        enum class pin20Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::low> low{};
            constexpr MPL::Value<pin20Val,pin20Val::high> high{};
            constexpr MPL::Value<pin20Val,pin20Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Pin 21.
        enum class pin21Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::low> low{};
            constexpr MPL::Value<pin21Val,pin21Val::high> high{};
            constexpr MPL::Value<pin21Val,pin21Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Pin 22.
        enum class pin22Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::low> low{};
            constexpr MPL::Value<pin22Val,pin22Val::high> high{};
            constexpr MPL::Value<pin22Val,pin22Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Pin 23.
        enum class pin23Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::low> low{};
            constexpr MPL::Value<pin23Val,pin23Val::high> high{};
            constexpr MPL::Value<pin23Val,pin23Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Pin 24.
        enum class pin24Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::low> low{};
            constexpr MPL::Value<pin24Val,pin24Val::high> high{};
            constexpr MPL::Value<pin24Val,pin24Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Pin 25.
        enum class pin25Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::low> low{};
            constexpr MPL::Value<pin25Val,pin25Val::high> high{};
            constexpr MPL::Value<pin25Val,pin25Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Pin 26.
        enum class pin26Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::low> low{};
            constexpr MPL::Value<pin26Val,pin26Val::high> high{};
            constexpr MPL::Value<pin26Val,pin26Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Pin 27.
        enum class pin27Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::low> low{};
            constexpr MPL::Value<pin27Val,pin27Val::high> high{};
            constexpr MPL::Value<pin27Val,pin27Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Pin 28.
        enum class pin28Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::low> low{};
            constexpr MPL::Value<pin28Val,pin28Val::high> high{};
            constexpr MPL::Value<pin28Val,pin28Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Pin 29.
        enum class pin29Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::low> low{};
            constexpr MPL::Value<pin29Val,pin29Val::high> high{};
            constexpr MPL::Value<pin29Val,pin29Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Pin 30.
        enum class pin30Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::low> low{};
            constexpr MPL::Value<pin30Val,pin30Val::high> high{};
            constexpr MPL::Value<pin30Val,pin30Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Pin 31.
        enum class pin31Val {
            low=0x00000000,     ///<Pin driver is low.
            high=0x00000001,     ///<Pin driver is high.
            clear=0x00000001,     ///<Set pin driver low.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::low> low{};
            constexpr MPL::Value<pin31Val,pin31Val::high> high{};
            constexpr MPL::Value<pin31Val,pin31Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace Nonein{    ///<Read GPIO port.
        using Addr = Register::Address<0x50000510,0x00000000,0,unsigned>;
        ///Pin 0.
        enum class pin0Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::low> low{};
            constexpr MPL::Value<pin0Val,pin0Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Pin 1.
        enum class pin1Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::low> low{};
            constexpr MPL::Value<pin1Val,pin1Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Pin 2.
        enum class pin2Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::low> low{};
            constexpr MPL::Value<pin2Val,pin2Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Pin 3.
        enum class pin3Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::low> low{};
            constexpr MPL::Value<pin3Val,pin3Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Pin 4.
        enum class pin4Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::low> low{};
            constexpr MPL::Value<pin4Val,pin4Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Pin 5.
        enum class pin5Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::low> low{};
            constexpr MPL::Value<pin5Val,pin5Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Pin 6.
        enum class pin6Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::low> low{};
            constexpr MPL::Value<pin6Val,pin6Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Pin 7.
        enum class pin7Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::low> low{};
            constexpr MPL::Value<pin7Val,pin7Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Pin 8.
        enum class pin8Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::low> low{};
            constexpr MPL::Value<pin8Val,pin8Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Pin 9.
        enum class pin9Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::low> low{};
            constexpr MPL::Value<pin9Val,pin9Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Pin 10.
        enum class pin10Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::low> low{};
            constexpr MPL::Value<pin10Val,pin10Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Pin 11.
        enum class pin11Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::low> low{};
            constexpr MPL::Value<pin11Val,pin11Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Pin 12.
        enum class pin12Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::low> low{};
            constexpr MPL::Value<pin12Val,pin12Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Pin 13.
        enum class pin13Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::low> low{};
            constexpr MPL::Value<pin13Val,pin13Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Pin 14.
        enum class pin14Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::low> low{};
            constexpr MPL::Value<pin14Val,pin14Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Pin 15.
        enum class pin15Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::low> low{};
            constexpr MPL::Value<pin15Val,pin15Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Pin 16.
        enum class pin16Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::low> low{};
            constexpr MPL::Value<pin16Val,pin16Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Pin 17.
        enum class pin17Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::low> low{};
            constexpr MPL::Value<pin17Val,pin17Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Pin 18.
        enum class pin18Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::low> low{};
            constexpr MPL::Value<pin18Val,pin18Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Pin 19.
        enum class pin19Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::low> low{};
            constexpr MPL::Value<pin19Val,pin19Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Pin 20.
        enum class pin20Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::low> low{};
            constexpr MPL::Value<pin20Val,pin20Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Pin 21.
        enum class pin21Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::low> low{};
            constexpr MPL::Value<pin21Val,pin21Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Pin 22.
        enum class pin22Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::low> low{};
            constexpr MPL::Value<pin22Val,pin22Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Pin 23.
        enum class pin23Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::low> low{};
            constexpr MPL::Value<pin23Val,pin23Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Pin 24.
        enum class pin24Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::low> low{};
            constexpr MPL::Value<pin24Val,pin24Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Pin 25.
        enum class pin25Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::low> low{};
            constexpr MPL::Value<pin25Val,pin25Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Pin 26.
        enum class pin26Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::low> low{};
            constexpr MPL::Value<pin26Val,pin26Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Pin 27.
        enum class pin27Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::low> low{};
            constexpr MPL::Value<pin27Val,pin27Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Pin 28.
        enum class pin28Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::low> low{};
            constexpr MPL::Value<pin28Val,pin28Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Pin 29.
        enum class pin29Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::low> low{};
            constexpr MPL::Value<pin29Val,pin29Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Pin 30.
        enum class pin30Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::low> low{};
            constexpr MPL::Value<pin30Val,pin30Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Pin 31.
        enum class pin31Val {
            low=0x00000000,     ///<Pin input is low.
            high=0x00000001,     ///<Pin input is high.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::low> low{};
            constexpr MPL::Value<pin31Val,pin31Val::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace Nonedir{    ///<Direction of GPIO pins.
        using Addr = Register::Address<0x50000514,0x00000000,0,unsigned>;
        ///Pin 0.
        enum class pin0Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::input> input{};
            constexpr MPL::Value<pin0Val,pin0Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Pin 1.
        enum class pin1Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::input> input{};
            constexpr MPL::Value<pin1Val,pin1Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Pin 2.
        enum class pin2Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::input> input{};
            constexpr MPL::Value<pin2Val,pin2Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Pin 3.
        enum class pin3Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::input> input{};
            constexpr MPL::Value<pin3Val,pin3Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Pin 4.
        enum class pin4Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::input> input{};
            constexpr MPL::Value<pin4Val,pin4Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Pin 5.
        enum class pin5Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::input> input{};
            constexpr MPL::Value<pin5Val,pin5Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Pin 6.
        enum class pin6Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::input> input{};
            constexpr MPL::Value<pin6Val,pin6Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Pin 7.
        enum class pin7Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::input> input{};
            constexpr MPL::Value<pin7Val,pin7Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Pin 8.
        enum class pin8Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::input> input{};
            constexpr MPL::Value<pin8Val,pin8Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Pin 9.
        enum class pin9Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::input> input{};
            constexpr MPL::Value<pin9Val,pin9Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Pin 10.
        enum class pin10Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::input> input{};
            constexpr MPL::Value<pin10Val,pin10Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Pin 11.
        enum class pin11Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::input> input{};
            constexpr MPL::Value<pin11Val,pin11Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Pin 12.
        enum class pin12Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::input> input{};
            constexpr MPL::Value<pin12Val,pin12Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Pin 13.
        enum class pin13Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::input> input{};
            constexpr MPL::Value<pin13Val,pin13Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Pin 14.
        enum class pin14Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::input> input{};
            constexpr MPL::Value<pin14Val,pin14Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Pin 15.
        enum class pin15Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::input> input{};
            constexpr MPL::Value<pin15Val,pin15Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Pin 16.
        enum class pin16Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::input> input{};
            constexpr MPL::Value<pin16Val,pin16Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Pin 17.
        enum class pin17Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::input> input{};
            constexpr MPL::Value<pin17Val,pin17Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Pin 18.
        enum class pin18Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::input> input{};
            constexpr MPL::Value<pin18Val,pin18Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Pin 19.
        enum class pin19Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::input> input{};
            constexpr MPL::Value<pin19Val,pin19Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Pin 20.
        enum class pin20Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::input> input{};
            constexpr MPL::Value<pin20Val,pin20Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Pin 21.
        enum class pin21Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::input> input{};
            constexpr MPL::Value<pin21Val,pin21Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Pin 22.
        enum class pin22Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::input> input{};
            constexpr MPL::Value<pin22Val,pin22Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Pin 23.
        enum class pin23Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::input> input{};
            constexpr MPL::Value<pin23Val,pin23Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Pin 24.
        enum class pin24Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::input> input{};
            constexpr MPL::Value<pin24Val,pin24Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Pin 25.
        enum class pin25Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::input> input{};
            constexpr MPL::Value<pin25Val,pin25Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Pin 26.
        enum class pin26Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::input> input{};
            constexpr MPL::Value<pin26Val,pin26Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Pin 27.
        enum class pin27Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::input> input{};
            constexpr MPL::Value<pin27Val,pin27Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Pin 28.
        enum class pin28Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::input> input{};
            constexpr MPL::Value<pin28Val,pin28Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Pin 29.
        enum class pin29Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::input> input{};
            constexpr MPL::Value<pin29Val,pin29Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Pin 30.
        enum class pin30Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::input> input{};
            constexpr MPL::Value<pin30Val,pin30Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Pin 31.
        enum class pin31Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::input> input{};
            constexpr MPL::Value<pin31Val,pin31Val::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace Nonedirset{    ///<DIR set register.
        using Addr = Register::Address<0x50000518,0x00000000,0,unsigned>;
        ///Set as output pin 0.
        enum class pin0Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::input> input{};
            constexpr MPL::Value<pin0Val,pin0Val::output> output{};
            constexpr MPL::Value<pin0Val,pin0Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Set as output pin 1.
        enum class pin1Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::input> input{};
            constexpr MPL::Value<pin1Val,pin1Val::output> output{};
            constexpr MPL::Value<pin1Val,pin1Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Set as output pin 2.
        enum class pin2Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::input> input{};
            constexpr MPL::Value<pin2Val,pin2Val::output> output{};
            constexpr MPL::Value<pin2Val,pin2Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Set as output pin 3.
        enum class pin3Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::input> input{};
            constexpr MPL::Value<pin3Val,pin3Val::output> output{};
            constexpr MPL::Value<pin3Val,pin3Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Set as output pin 4.
        enum class pin4Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::input> input{};
            constexpr MPL::Value<pin4Val,pin4Val::output> output{};
            constexpr MPL::Value<pin4Val,pin4Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Set as output pin 5.
        enum class pin5Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::input> input{};
            constexpr MPL::Value<pin5Val,pin5Val::output> output{};
            constexpr MPL::Value<pin5Val,pin5Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Set as output pin 6.
        enum class pin6Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::input> input{};
            constexpr MPL::Value<pin6Val,pin6Val::output> output{};
            constexpr MPL::Value<pin6Val,pin6Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Set as output pin 7.
        enum class pin7Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::input> input{};
            constexpr MPL::Value<pin7Val,pin7Val::output> output{};
            constexpr MPL::Value<pin7Val,pin7Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Set as output pin 8.
        enum class pin8Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::input> input{};
            constexpr MPL::Value<pin8Val,pin8Val::output> output{};
            constexpr MPL::Value<pin8Val,pin8Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Set as output pin 9.
        enum class pin9Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::input> input{};
            constexpr MPL::Value<pin9Val,pin9Val::output> output{};
            constexpr MPL::Value<pin9Val,pin9Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Set as output pin 10.
        enum class pin10Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::input> input{};
            constexpr MPL::Value<pin10Val,pin10Val::output> output{};
            constexpr MPL::Value<pin10Val,pin10Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Set as output pin 11.
        enum class pin11Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::input> input{};
            constexpr MPL::Value<pin11Val,pin11Val::output> output{};
            constexpr MPL::Value<pin11Val,pin11Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Set as output pin 12.
        enum class pin12Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::input> input{};
            constexpr MPL::Value<pin12Val,pin12Val::output> output{};
            constexpr MPL::Value<pin12Val,pin12Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Set as output pin 13.
        enum class pin13Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::input> input{};
            constexpr MPL::Value<pin13Val,pin13Val::output> output{};
            constexpr MPL::Value<pin13Val,pin13Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Set as output pin 14.
        enum class pin14Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::input> input{};
            constexpr MPL::Value<pin14Val,pin14Val::output> output{};
            constexpr MPL::Value<pin14Val,pin14Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Set as output pin 15.
        enum class pin15Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::input> input{};
            constexpr MPL::Value<pin15Val,pin15Val::output> output{};
            constexpr MPL::Value<pin15Val,pin15Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Set as output pin 16.
        enum class pin16Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::input> input{};
            constexpr MPL::Value<pin16Val,pin16Val::output> output{};
            constexpr MPL::Value<pin16Val,pin16Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Set as output pin 17.
        enum class pin17Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::input> input{};
            constexpr MPL::Value<pin17Val,pin17Val::output> output{};
            constexpr MPL::Value<pin17Val,pin17Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Set as output pin 18.
        enum class pin18Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::input> input{};
            constexpr MPL::Value<pin18Val,pin18Val::output> output{};
            constexpr MPL::Value<pin18Val,pin18Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Set as output pin 19.
        enum class pin19Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::input> input{};
            constexpr MPL::Value<pin19Val,pin19Val::output> output{};
            constexpr MPL::Value<pin19Val,pin19Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Set as output pin 20.
        enum class pin20Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::input> input{};
            constexpr MPL::Value<pin20Val,pin20Val::output> output{};
            constexpr MPL::Value<pin20Val,pin20Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Set as output pin 21.
        enum class pin21Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::input> input{};
            constexpr MPL::Value<pin21Val,pin21Val::output> output{};
            constexpr MPL::Value<pin21Val,pin21Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Set as output pin 22.
        enum class pin22Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::input> input{};
            constexpr MPL::Value<pin22Val,pin22Val::output> output{};
            constexpr MPL::Value<pin22Val,pin22Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Set as output pin 23.
        enum class pin23Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::input> input{};
            constexpr MPL::Value<pin23Val,pin23Val::output> output{};
            constexpr MPL::Value<pin23Val,pin23Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Set as output pin 24.
        enum class pin24Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::input> input{};
            constexpr MPL::Value<pin24Val,pin24Val::output> output{};
            constexpr MPL::Value<pin24Val,pin24Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Set as output pin 25.
        enum class pin25Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::input> input{};
            constexpr MPL::Value<pin25Val,pin25Val::output> output{};
            constexpr MPL::Value<pin25Val,pin25Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Set as output pin 26.
        enum class pin26Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::input> input{};
            constexpr MPL::Value<pin26Val,pin26Val::output> output{};
            constexpr MPL::Value<pin26Val,pin26Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Set as output pin 27.
        enum class pin27Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::input> input{};
            constexpr MPL::Value<pin27Val,pin27Val::output> output{};
            constexpr MPL::Value<pin27Val,pin27Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Set as output pin 28.
        enum class pin28Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::input> input{};
            constexpr MPL::Value<pin28Val,pin28Val::output> output{};
            constexpr MPL::Value<pin28Val,pin28Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Set as output pin 29.
        enum class pin29Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::input> input{};
            constexpr MPL::Value<pin29Val,pin29Val::output> output{};
            constexpr MPL::Value<pin29Val,pin29Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Set as output pin 30.
        enum class pin30Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::input> input{};
            constexpr MPL::Value<pin30Val,pin30Val::output> output{};
            constexpr MPL::Value<pin30Val,pin30Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Set as output pin 31.
        enum class pin31Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            set=0x00000001,     ///<Set pin as output.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::input> input{};
            constexpr MPL::Value<pin31Val,pin31Val::output> output{};
            constexpr MPL::Value<pin31Val,pin31Val::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace Nonedirclr{    ///<DIR clear register.
        using Addr = Register::Address<0x5000051c,0x00000000,0,unsigned>;
        ///Set as input pin 0.
        enum class pin0Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin0ValC{
            constexpr MPL::Value<pin0Val,pin0Val::input> input{};
            constexpr MPL::Value<pin0Val,pin0Val::output> output{};
            constexpr MPL::Value<pin0Val,pin0Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pin0Val> pin0{}; 
        ///Set as input pin 1.
        enum class pin1Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin1ValC{
            constexpr MPL::Value<pin1Val,pin1Val::input> input{};
            constexpr MPL::Value<pin1Val,pin1Val::output> output{};
            constexpr MPL::Value<pin1Val,pin1Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pin1Val> pin1{}; 
        ///Set as input pin 2.
        enum class pin2Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin2ValC{
            constexpr MPL::Value<pin2Val,pin2Val::input> input{};
            constexpr MPL::Value<pin2Val,pin2Val::output> output{};
            constexpr MPL::Value<pin2Val,pin2Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pin2Val> pin2{}; 
        ///Set as input pin 3.
        enum class pin3Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin3ValC{
            constexpr MPL::Value<pin3Val,pin3Val::input> input{};
            constexpr MPL::Value<pin3Val,pin3Val::output> output{};
            constexpr MPL::Value<pin3Val,pin3Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pin3Val> pin3{}; 
        ///Set as input pin 4.
        enum class pin4Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin4ValC{
            constexpr MPL::Value<pin4Val,pin4Val::input> input{};
            constexpr MPL::Value<pin4Val,pin4Val::output> output{};
            constexpr MPL::Value<pin4Val,pin4Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pin4Val> pin4{}; 
        ///Set as input pin 5.
        enum class pin5Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin5ValC{
            constexpr MPL::Value<pin5Val,pin5Val::input> input{};
            constexpr MPL::Value<pin5Val,pin5Val::output> output{};
            constexpr MPL::Value<pin5Val,pin5Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pin5Val> pin5{}; 
        ///Set as input pin 6.
        enum class pin6Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin6ValC{
            constexpr MPL::Value<pin6Val,pin6Val::input> input{};
            constexpr MPL::Value<pin6Val,pin6Val::output> output{};
            constexpr MPL::Value<pin6Val,pin6Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pin6Val> pin6{}; 
        ///Set as input pin 7.
        enum class pin7Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin7ValC{
            constexpr MPL::Value<pin7Val,pin7Val::input> input{};
            constexpr MPL::Value<pin7Val,pin7Val::output> output{};
            constexpr MPL::Value<pin7Val,pin7Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pin7Val> pin7{}; 
        ///Set as input pin 8.
        enum class pin8Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin8ValC{
            constexpr MPL::Value<pin8Val,pin8Val::input> input{};
            constexpr MPL::Value<pin8Val,pin8Val::output> output{};
            constexpr MPL::Value<pin8Val,pin8Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,pin8Val> pin8{}; 
        ///Set as input pin 9.
        enum class pin9Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin9ValC{
            constexpr MPL::Value<pin9Val,pin9Val::input> input{};
            constexpr MPL::Value<pin9Val,pin9Val::output> output{};
            constexpr MPL::Value<pin9Val,pin9Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pin9Val> pin9{}; 
        ///Set as input pin 10.
        enum class pin10Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin10ValC{
            constexpr MPL::Value<pin10Val,pin10Val::input> input{};
            constexpr MPL::Value<pin10Val,pin10Val::output> output{};
            constexpr MPL::Value<pin10Val,pin10Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pin10Val> pin10{}; 
        ///Set as input pin 11.
        enum class pin11Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin11ValC{
            constexpr MPL::Value<pin11Val,pin11Val::input> input{};
            constexpr MPL::Value<pin11Val,pin11Val::output> output{};
            constexpr MPL::Value<pin11Val,pin11Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,pin11Val> pin11{}; 
        ///Set as input pin 12.
        enum class pin12Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin12ValC{
            constexpr MPL::Value<pin12Val,pin12Val::input> input{};
            constexpr MPL::Value<pin12Val,pin12Val::output> output{};
            constexpr MPL::Value<pin12Val,pin12Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,pin12Val> pin12{}; 
        ///Set as input pin 13.
        enum class pin13Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin13ValC{
            constexpr MPL::Value<pin13Val,pin13Val::input> input{};
            constexpr MPL::Value<pin13Val,pin13Val::output> output{};
            constexpr MPL::Value<pin13Val,pin13Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,pin13Val> pin13{}; 
        ///Set as input pin 14.
        enum class pin14Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin14ValC{
            constexpr MPL::Value<pin14Val,pin14Val::input> input{};
            constexpr MPL::Value<pin14Val,pin14Val::output> output{};
            constexpr MPL::Value<pin14Val,pin14Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pin14Val> pin14{}; 
        ///Set as input pin 15.
        enum class pin15Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin15ValC{
            constexpr MPL::Value<pin15Val,pin15Val::input> input{};
            constexpr MPL::Value<pin15Val,pin15Val::output> output{};
            constexpr MPL::Value<pin15Val,pin15Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pin15Val> pin15{}; 
        ///Set as input pin 16.
        enum class pin16Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin16ValC{
            constexpr MPL::Value<pin16Val,pin16Val::input> input{};
            constexpr MPL::Value<pin16Val,pin16Val::output> output{};
            constexpr MPL::Value<pin16Val,pin16Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pin16Val> pin16{}; 
        ///Set as input pin 17.
        enum class pin17Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin17ValC{
            constexpr MPL::Value<pin17Val,pin17Val::input> input{};
            constexpr MPL::Value<pin17Val,pin17Val::output> output{};
            constexpr MPL::Value<pin17Val,pin17Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pin17Val> pin17{}; 
        ///Set as input pin 18.
        enum class pin18Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin18ValC{
            constexpr MPL::Value<pin18Val,pin18Val::input> input{};
            constexpr MPL::Value<pin18Val,pin18Val::output> output{};
            constexpr MPL::Value<pin18Val,pin18Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pin18Val> pin18{}; 
        ///Set as input pin 19.
        enum class pin19Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin19ValC{
            constexpr MPL::Value<pin19Val,pin19Val::input> input{};
            constexpr MPL::Value<pin19Val,pin19Val::output> output{};
            constexpr MPL::Value<pin19Val,pin19Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,pin19Val> pin19{}; 
        ///Set as input pin 20.
        enum class pin20Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin20ValC{
            constexpr MPL::Value<pin20Val,pin20Val::input> input{};
            constexpr MPL::Value<pin20Val,pin20Val::output> output{};
            constexpr MPL::Value<pin20Val,pin20Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,pin20Val> pin20{}; 
        ///Set as input pin 21.
        enum class pin21Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin21ValC{
            constexpr MPL::Value<pin21Val,pin21Val::input> input{};
            constexpr MPL::Value<pin21Val,pin21Val::output> output{};
            constexpr MPL::Value<pin21Val,pin21Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pin21Val> pin21{}; 
        ///Set as input pin 22.
        enum class pin22Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin22ValC{
            constexpr MPL::Value<pin22Val,pin22Val::input> input{};
            constexpr MPL::Value<pin22Val,pin22Val::output> output{};
            constexpr MPL::Value<pin22Val,pin22Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pin22Val> pin22{}; 
        ///Set as input pin 23.
        enum class pin23Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin23ValC{
            constexpr MPL::Value<pin23Val,pin23Val::input> input{};
            constexpr MPL::Value<pin23Val,pin23Val::output> output{};
            constexpr MPL::Value<pin23Val,pin23Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pin23Val> pin23{}; 
        ///Set as input pin 24.
        enum class pin24Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin24ValC{
            constexpr MPL::Value<pin24Val,pin24Val::input> input{};
            constexpr MPL::Value<pin24Val,pin24Val::output> output{};
            constexpr MPL::Value<pin24Val,pin24Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pin24Val> pin24{}; 
        ///Set as input pin 25.
        enum class pin25Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin25ValC{
            constexpr MPL::Value<pin25Val,pin25Val::input> input{};
            constexpr MPL::Value<pin25Val,pin25Val::output> output{};
            constexpr MPL::Value<pin25Val,pin25Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pin25Val> pin25{}; 
        ///Set as input pin 26.
        enum class pin26Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin26ValC{
            constexpr MPL::Value<pin26Val,pin26Val::input> input{};
            constexpr MPL::Value<pin26Val,pin26Val::output> output{};
            constexpr MPL::Value<pin26Val,pin26Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pin26Val> pin26{}; 
        ///Set as input pin 27.
        enum class pin27Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin27ValC{
            constexpr MPL::Value<pin27Val,pin27Val::input> input{};
            constexpr MPL::Value<pin27Val,pin27Val::output> output{};
            constexpr MPL::Value<pin27Val,pin27Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pin27Val> pin27{}; 
        ///Set as input pin 28.
        enum class pin28Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin28ValC{
            constexpr MPL::Value<pin28Val,pin28Val::input> input{};
            constexpr MPL::Value<pin28Val,pin28Val::output> output{};
            constexpr MPL::Value<pin28Val,pin28Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pin28Val> pin28{}; 
        ///Set as input pin 29.
        enum class pin29Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin29ValC{
            constexpr MPL::Value<pin29Val,pin29Val::input> input{};
            constexpr MPL::Value<pin29Val,pin29Val::output> output{};
            constexpr MPL::Value<pin29Val,pin29Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pin29Val> pin29{}; 
        ///Set as input pin 30.
        enum class pin30Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin30ValC{
            constexpr MPL::Value<pin30Val,pin30Val::input> input{};
            constexpr MPL::Value<pin30Val,pin30Val::output> output{};
            constexpr MPL::Value<pin30Val,pin30Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pin30Val> pin30{}; 
        ///Set as input pin 31.
        enum class pin31Val {
            input=0x00000000,     ///<Pin set as input.
            output=0x00000001,     ///<Pin set as output.
            clear=0x00000001,     ///<Set pin as input.
        };
        namespace pin31ValC{
            constexpr MPL::Value<pin31Val,pin31Val::input> input{};
            constexpr MPL::Value<pin31Val,pin31Val::output> output{};
            constexpr MPL::Value<pin31Val,pin31Val::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pin31Val> pin31{}; 
    }
    namespace NonepinCnf0{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000700,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf1{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000704,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf2{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000708,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf3{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000070c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf4{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000710,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf5{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000714,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf6{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000718,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf7{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000071c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf8{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000720,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf9{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000724,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf10{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000728,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf11{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000072c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf12{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000730,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf13{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000734,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf14{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000738,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf15{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000073c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf16{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000740,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf17{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000744,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf18{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000748,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf19{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000074c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf20{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000750,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf21{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000754,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf22{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000758,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf23{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000075c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf24{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000760,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf25{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000764,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf26{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000768,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf27{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000076c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf28{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000770,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf29{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000774,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf30{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x50000778,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
    namespace NonepinCnf31{    ///<Configuration of GPIO pins.
        using Addr = Register::Address<0x5000077c,0xfffcf8f0,0,unsigned>;
        ///Pin direction.
        enum class dirVal {
            input=0x00000000,     ///<Configure pin as an input pin.
            output=0x00000001,     ///<Configure pin as an output pin.
        };
        namespace dirValC{
            constexpr MPL::Value<dirVal,dirVal::input> input{};
            constexpr MPL::Value<dirVal,dirVal::output> output{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dirVal> dir{}; 
        ///Connect or disconnect input path.
        enum class inputVal {
            connect=0x00000000,     ///<Connect input pin.
            disconnect=0x00000001,     ///<Disconnect input pin.
        };
        namespace inputValC{
            constexpr MPL::Value<inputVal,inputVal::connect> connect{};
            constexpr MPL::Value<inputVal,inputVal::disconnect> disconnect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inputVal> input{}; 
        ///Pull-up or -down configuration.
        enum class pullVal {
            disabled=0x00000000,     ///<No pull.
            pulldown=0x00000001,     ///<Pulldown on pin.
            pullup=0x00000003,     ///<Pullup on pin.
        };
        namespace pullValC{
            constexpr MPL::Value<pullVal,pullVal::disabled> disabled{};
            constexpr MPL::Value<pullVal,pullVal::pulldown> pulldown{};
            constexpr MPL::Value<pullVal,pullVal::pullup> pullup{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pullVal> pull{}; 
        ///Drive configuration.
        enum class driveVal {
            s0s1=0x00000000,     ///<Standard '0', Standard '1'.
            h0s1=0x00000001,     ///<High '0', Standard '1'.
            s0h1=0x00000002,     ///<Standard '0', High '1'.
            h0h1=0x00000003,     ///<High '0', High '1'.
            d0s1=0x00000004,     ///<Disconnected '0', Standard '1'.
            d0h1=0x00000005,     ///<Disconnected '0', High '1'.
            s0d1=0x00000006,     ///<Standard '0', Disconnected '1'.
            h0d1=0x00000007,     ///<High '0', Disconnected '1'.
        };
        namespace driveValC{
            constexpr MPL::Value<driveVal,driveVal::s0s1> s0s1{};
            constexpr MPL::Value<driveVal,driveVal::h0s1> h0s1{};
            constexpr MPL::Value<driveVal,driveVal::s0h1> s0h1{};
            constexpr MPL::Value<driveVal,driveVal::h0h1> h0h1{};
            constexpr MPL::Value<driveVal,driveVal::d0s1> d0s1{};
            constexpr MPL::Value<driveVal,driveVal::d0h1> d0h1{};
            constexpr MPL::Value<driveVal,driveVal::s0d1> s0d1{};
            constexpr MPL::Value<driveVal,driveVal::h0d1> h0d1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,driveVal> drive{}; 
        ///Pin sensing mechanism.
        enum class senseVal {
            disabled=0x00000000,     ///<Disabled.
            high=0x00000002,     ///<Wakeup on high level.
            low=0x00000003,     ///<Wakeup on low level.
        };
        namespace senseValC{
            constexpr MPL::Value<senseVal,senseVal::disabled> disabled{};
            constexpr MPL::Value<senseVal,senseVal::high> high{};
            constexpr MPL::Value<senseVal,senseVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,senseVal> sense{}; 
    }
}
