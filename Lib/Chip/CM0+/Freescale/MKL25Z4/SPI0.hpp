#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Peripheral Interface
    namespace Spi0C1{    ///<SPI control register 1
        using Addr = Register::Address<0x40076000,0xffffff00,0,unsigned char>;
        ///LSB first (shifter direction)
        enum class lsbfeVal {
            v0=0x00000000,     ///<SPI serial data transfers start with most significant bit
            v1=0x00000001,     ///<SPI serial data transfers start with least significant bit
        };
        namespace lsbfeValC{
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v0> v0{};
            constexpr MPL::Value<lsbfeVal,lsbfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lsbfeVal> lsbfe{}; 
        ///Slave select output enable
        enum class ssoeVal {
            v0=0x00000000,     ///<When MODFEN is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When MODFEN is 1: In master mode, SS pin function is SS input for mode fault. In slave mode, SS pin function is slave select input.
            v1=0x00000001,     ///<When MODFEN is 0: In master mode, SS pin function is general-purpose I/O (not SPI). In slave mode, SS pin function is slave select input. When MODFEN is 1: In master mode, SS pin function is automatic SS output. In slave mode: SS pin function is slave select input.
        };
        namespace ssoeValC{
            constexpr MPL::Value<ssoeVal,ssoeVal::v0> v0{};
            constexpr MPL::Value<ssoeVal,ssoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ssoeVal> ssoe{}; 
        ///Clock phase
        enum class cphaVal {
            v0=0x00000000,     ///<First edge on SPSCK occurs at the middle of the first cycle of a data transfer
            v1=0x00000001,     ///<First edge on SPSCK occurs at the start of the first cycle of a data transfer
        };
        namespace cphaValC{
            constexpr MPL::Value<cphaVal,cphaVal::v0> v0{};
            constexpr MPL::Value<cphaVal,cphaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cphaVal> cpha{}; 
        ///Clock polarity
        enum class cpolVal {
            v0=0x00000000,     ///<Active-high SPI clock (idles low)
            v1=0x00000001,     ///<Active-low SPI clock (idles high)
        };
        namespace cpolValC{
            constexpr MPL::Value<cpolVal,cpolVal::v0> v0{};
            constexpr MPL::Value<cpolVal,cpolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cpolVal> cpol{}; 
        ///Master/slave mode select
        enum class mstrVal {
            v0=0x00000000,     ///<SPI module configured as a slave SPI device
            v1=0x00000001,     ///<SPI module configured as a master SPI device
        };
        namespace mstrValC{
            constexpr MPL::Value<mstrVal,mstrVal::v0> v0{};
            constexpr MPL::Value<mstrVal,mstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mstrVal> mstr{}; 
        ///SPI transmit interrupt enable
        enum class sptieVal {
            v0=0x00000000,     ///<Interrupts from SPTEF inhibited (use polling)
            v1=0x00000001,     ///<When SPTEF is 1, hardware interrupt requested
        };
        namespace sptieValC{
            constexpr MPL::Value<sptieVal,sptieVal::v0> v0{};
            constexpr MPL::Value<sptieVal,sptieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sptieVal> sptie{}; 
        ///SPI system enable
        enum class speVal {
            v0=0x00000000,     ///<SPI system inactive
            v1=0x00000001,     ///<SPI system enabled
        };
        namespace speValC{
            constexpr MPL::Value<speVal,speVal::v0> v0{};
            constexpr MPL::Value<speVal,speVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,speVal> spe{}; 
        ///SPI interrupt enable: for SPRF and MODF
        enum class spieVal {
            v0=0x00000000,     ///<Interrupts from SPRF and MODF are inhibited-use polling
            v1=0x00000001,     ///<Request a hardware interrupt when SPRF or MODF is 1
        };
        namespace spieValC{
            constexpr MPL::Value<spieVal,spieVal::v0> v0{};
            constexpr MPL::Value<spieVal,spieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spieVal> spie{}; 
    }
    namespace Spi0C2{    ///<SPI control register 2
        using Addr = Register::Address<0x40076001,0xffffff40,0,unsigned char>;
        ///SPI pin control 0
        enum class spc0Val {
            v0=0x00000000,     ///<SPI uses separate pins for data input and data output (pin mode is normal). In master mode of operation: MISO is master in and MOSI is master out. In slave mode of operation: MISO is slave out and MOSI is slave in.
            v1=0x00000001,     ///<SPI configured for single-wire bidirectional operation (pin mode is bidirectional). In master mode of operation: MISO is not used by SPI; MOSI is master in when BIDIROE is 0 or master I/O when BIDIROE is 1. In slave mode of operation: MISO is slave in when BIDIROE is 0 or slave I/O when BIDIROE is 1; MOSI is not used by SPI.
        };
        namespace spc0ValC{
            constexpr MPL::Value<spc0Val,spc0Val::v0> v0{};
            constexpr MPL::Value<spc0Val,spc0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,spc0Val> spc0{}; 
        ///SPI stop in wait mode
        enum class spiswaiVal {
            v0=0x00000000,     ///<SPI clocks continue to operate in wait mode
            v1=0x00000001,     ///<SPI clocks stop when the MCU enters wait mode
        };
        namespace spiswaiValC{
            constexpr MPL::Value<spiswaiVal,spiswaiVal::v0> v0{};
            constexpr MPL::Value<spiswaiVal,spiswaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,spiswaiVal> spiswai{}; 
        ///Receive DMA enable
        enum class rxdmaeVal {
            v0=0x00000000,     ///<DMA request for receive is disabled and interrupt from SPRF is allowed
            v1=0x00000001,     ///<DMA request for receive is enabled and interrupt from SPRF is disabled
        };
        namespace rxdmaeValC{
            constexpr MPL::Value<rxdmaeVal,rxdmaeVal::v0> v0{};
            constexpr MPL::Value<rxdmaeVal,rxdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxdmaeVal> rxdmae{}; 
        ///Bidirectional mode output enable
        enum class bidiroeVal {
            v0=0x00000000,     ///<Output driver disabled so SPI data I/O pin acts as an input
            v1=0x00000001,     ///<SPI I/O pin enabled as an output
        };
        namespace bidiroeValC{
            constexpr MPL::Value<bidiroeVal,bidiroeVal::v0> v0{};
            constexpr MPL::Value<bidiroeVal,bidiroeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bidiroeVal> bidiroe{}; 
        ///Master mode-fault function enable
        enum class modfenVal {
            v0=0x00000000,     ///<Mode fault function disabled, master SS pin reverts to general-purpose I/O not controlled by SPI
            v1=0x00000001,     ///<Mode fault function enabled, master SS pin acts as the mode fault input or the slave select output
        };
        namespace modfenValC{
            constexpr MPL::Value<modfenVal,modfenVal::v0> v0{};
            constexpr MPL::Value<modfenVal,modfenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,modfenVal> modfen{}; 
        ///Transmit DMA enable
        enum class txdmaeVal {
            v0=0x00000000,     ///<DMA request for transmit is disabled and interrupt from SPTEF is allowed
            v1=0x00000001,     ///<DMA request for transmit is enabled and interrupt from SPTEF is disabled
        };
        namespace txdmaeValC{
            constexpr MPL::Value<txdmaeVal,txdmaeVal::v0> v0{};
            constexpr MPL::Value<txdmaeVal,txdmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,txdmaeVal> txdmae{}; 
        ///SPI match interrupt enable
        enum class spmieVal {
            v0=0x00000000,     ///<Interrupts from SPMF inhibited (use polling)
            v1=0x00000001,     ///<When SPMF is 1, requests a hardware interrupt
        };
        namespace spmieValC{
            constexpr MPL::Value<spmieVal,spmieVal::v0> v0{};
            constexpr MPL::Value<spmieVal,spmieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,spmieVal> spmie{}; 
    }
    namespace Spi0Br{    ///<SPI baud rate register
        using Addr = Register::Address<0x40076002,0xffffff80,0,unsigned char>;
        ///SPI baud rate divisor
        enum class sprVal {
            v0000=0x00000000,     ///<Baud rate divisor is 2
            v0001=0x00000001,     ///<Baud rate divisor is 4
            v0010=0x00000002,     ///<Baud rate divisor is 8
            v0011=0x00000003,     ///<Baud rate divisor is 16
            v0100=0x00000004,     ///<Baud rate divisor is 32
            v0101=0x00000005,     ///<Baud rate divisor is 64
            v0110=0x00000006,     ///<Baud rate divisor is 128
            v0111=0x00000007,     ///<Baud rate divisor is 256
            v1000=0x00000008,     ///<Baud rate divisor is 512
        };
        namespace sprValC{
            constexpr MPL::Value<sprVal,sprVal::v0000> v0000{};
            constexpr MPL::Value<sprVal,sprVal::v0001> v0001{};
            constexpr MPL::Value<sprVal,sprVal::v0010> v0010{};
            constexpr MPL::Value<sprVal,sprVal::v0011> v0011{};
            constexpr MPL::Value<sprVal,sprVal::v0100> v0100{};
            constexpr MPL::Value<sprVal,sprVal::v0101> v0101{};
            constexpr MPL::Value<sprVal,sprVal::v0110> v0110{};
            constexpr MPL::Value<sprVal,sprVal::v0111> v0111{};
            constexpr MPL::Value<sprVal,sprVal::v1000> v1000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sprVal> spr{}; 
        ///SPI baud rate prescale divisor
        enum class spprVal {
            v000=0x00000000,     ///<Baud rate prescaler divisor is 1
            v001=0x00000001,     ///<Baud rate prescaler divisor is 2
            v010=0x00000002,     ///<Baud rate prescaler divisor is 3
            v011=0x00000003,     ///<Baud rate prescaler divisor is 4
            v100=0x00000004,     ///<Baud rate prescaler divisor is 5
            v101=0x00000005,     ///<Baud rate prescaler divisor is 6
            v110=0x00000006,     ///<Baud rate prescaler divisor is 7
            v111=0x00000007,     ///<Baud rate prescaler divisor is 8
        };
        namespace spprValC{
            constexpr MPL::Value<spprVal,spprVal::v000> v000{};
            constexpr MPL::Value<spprVal,spprVal::v001> v001{};
            constexpr MPL::Value<spprVal,spprVal::v010> v010{};
            constexpr MPL::Value<spprVal,spprVal::v011> v011{};
            constexpr MPL::Value<spprVal,spprVal::v100> v100{};
            constexpr MPL::Value<spprVal,spprVal::v101> v101{};
            constexpr MPL::Value<spprVal,spprVal::v110> v110{};
            constexpr MPL::Value<spprVal,spprVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,spprVal> sppr{}; 
    }
    namespace Spi0S{    ///<SPI status register
        using Addr = Register::Address<0x40076003,0xffffff0f,0,unsigned char>;
        ///Master mode fault flag
        enum class modfVal {
            v0=0x00000000,     ///<No mode fault error
            v1=0x00000001,     ///<Mode fault error detected
        };
        namespace modfValC{
            constexpr MPL::Value<modfVal,modfVal::v0> v0{};
            constexpr MPL::Value<modfVal,modfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,modfVal> modf{}; 
        ///SPI transmit buffer empty flag
        enum class sptefVal {
            v0=0x00000000,     ///<SPI transmit buffer not empty
            v1=0x00000001,     ///<SPI transmit buffer empty
        };
        namespace sptefValC{
            constexpr MPL::Value<sptefVal,sptefVal::v0> v0{};
            constexpr MPL::Value<sptefVal,sptefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sptefVal> sptef{}; 
        ///SPI match flag
        enum class spmfVal {
            v0=0x00000000,     ///<Value in the receive data buffer does not match the value in the M register
            v1=0x00000001,     ///<Value in the receive data buffer matches the value in the M register
        };
        namespace spmfValC{
            constexpr MPL::Value<spmfVal,spmfVal::v0> v0{};
            constexpr MPL::Value<spmfVal,spmfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,spmfVal> spmf{}; 
        ///SPI read buffer full flag
        enum class sprfVal {
            v0=0x00000000,     ///<No data available in the receive data buffer
            v1=0x00000001,     ///<Data available in the receive data buffer
        };
        namespace sprfValC{
            constexpr MPL::Value<sprfVal,sprfVal::v0> v0{};
            constexpr MPL::Value<sprfVal,sprfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sprfVal> sprf{}; 
    }
    namespace Spi0D{    ///<SPI data register
        using Addr = Register::Address<0x40076005,0xffffff00,0,unsigned char>;
        ///Data (low byte)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
    namespace Spi0M{    ///<SPI match register
        using Addr = Register::Address<0x40076007,0xffffff00,0,unsigned char>;
        ///Hardware compare value (low byte)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bits{}; 
    }
}
