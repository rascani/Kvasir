#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-Integrated Circuit
    namespace I2c1A1{    ///<I2C Address Register 1
        using Addr = Register::Address<0x40067000,0xffffff01,0,unsigned char>;
        ///Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace I2c1F{    ///<I2C Frequency Divider register
        using Addr = Register::Address<0x40067001,0xffffff00,0,unsigned char>;
        ///ClockRate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> icr{}; 
        ///no description available
        enum class multVal {
            v00=0x00000000,     ///<mul = 1
            v01=0x00000001,     ///<mul = 2
            v10=0x00000002,     ///<mul = 4
        };
        namespace multValC{
            constexpr MPL::Value<multVal,multVal::v00> v00{};
            constexpr MPL::Value<multVal,multVal::v01> v01{};
            constexpr MPL::Value<multVal,multVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,multVal> mult{}; 
    }
    namespace I2c1C1{    ///<I2C Control Register 1
        using Addr = Register::Address<0x40067002,0xffffff01,0,unsigned char>;
        ///Wakeup Enable
        enum class wuenVal {
            v0=0x00000000,     ///<Normal operation. No interrupt generated when address matching in low power mode.
            v1=0x00000001,     ///<Enables the wakeup function in low power mode.
        };
        namespace wuenValC{
            constexpr MPL::Value<wuenVal,wuenVal::v0> v0{};
            constexpr MPL::Value<wuenVal,wuenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wuenVal> wuen{}; 
        ///Repeat START
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsta{}; 
        ///Transmit Acknowledge Enable
        enum class txakVal {
            v0=0x00000000,     ///<An acknowledge signal is sent to the bus on the following receiving byte
            v1=0x00000001,     ///<No acknowledge signal is sent to the bus on the following receiving data byte.
        };
        namespace txakValC{
            constexpr MPL::Value<txakVal,txakVal::v0> v0{};
            constexpr MPL::Value<txakVal,txakVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txakVal> txak{}; 
        ///Transmit Mode Select
        enum class txVal {
            v0=0x00000000,     ///<Receive
            v1=0x00000001,     ///<Transmit
        };
        namespace txValC{
            constexpr MPL::Value<txVal,txVal::v0> v0{};
            constexpr MPL::Value<txVal,txVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txVal> tx{}; 
        ///Master Mode Select
        enum class mstVal {
            v0=0x00000000,     ///<Slave mode
            v1=0x00000001,     ///<Master mode
        };
        namespace mstValC{
            constexpr MPL::Value<mstVal,mstVal::v0> v0{};
            constexpr MPL::Value<mstVal,mstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mstVal> mst{}; 
        ///I2C Interrupt Enable
        enum class iicieVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace iicieValC{
            constexpr MPL::Value<iicieVal,iicieVal::v0> v0{};
            constexpr MPL::Value<iicieVal,iicieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iicieVal> iicie{}; 
        ///I2C Enable
        enum class iicenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace iicenValC{
            constexpr MPL::Value<iicenVal,iicenVal::v0> v0{};
            constexpr MPL::Value<iicenVal,iicenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,iicenVal> iicen{}; 
    }
    namespace I2c1S{    ///<I2C Status register
        using Addr = Register::Address<0x40067003,0xffffff00,0,unsigned char>;
        ///Receive Acknowledge
        enum class rxakVal {
            v0=0x00000000,     ///<Acknowledge signal was received after the completion of one byte of data transmission on the bus
            v1=0x00000001,     ///<No acknowledge signal detected
        };
        namespace rxakValC{
            constexpr MPL::Value<rxakVal,rxakVal::v0> v0{};
            constexpr MPL::Value<rxakVal,rxakVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxakVal> rxak{}; 
        ///Interrupt Flag
        enum class iicifVal {
            v0=0x00000000,     ///<No interrupt pending
            v1=0x00000001,     ///<Interrupt pending
        };
        namespace iicifValC{
            constexpr MPL::Value<iicifVal,iicifVal::v0> v0{};
            constexpr MPL::Value<iicifVal,iicifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,iicifVal> iicif{}; 
        ///Slave Read/Write
        enum class srwVal {
            v0=0x00000000,     ///<Slave receive, master writing to slave
            v1=0x00000001,     ///<Slave transmit, master reading from slave
        };
        namespace srwValC{
            constexpr MPL::Value<srwVal,srwVal::v0> v0{};
            constexpr MPL::Value<srwVal,srwVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,srwVal> srw{}; 
        ///Range Address Match
        enum class ramVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        namespace ramValC{
            constexpr MPL::Value<ramVal,ramVal::v0> v0{};
            constexpr MPL::Value<ramVal,ramVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ramVal> ram{}; 
        ///Arbitration Lost
        enum class arblVal {
            v0=0x00000000,     ///<Standard bus operation.
            v1=0x00000001,     ///<Loss of arbitration.
        };
        namespace arblValC{
            constexpr MPL::Value<arblVal,arblVal::v0> v0{};
            constexpr MPL::Value<arblVal,arblVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,arblVal> arbl{}; 
        ///Bus Busy
        enum class busyVal {
            v0=0x00000000,     ///<Bus is idle
            v1=0x00000001,     ///<Bus is busy
        };
        namespace busyValC{
            constexpr MPL::Value<busyVal,busyVal::v0> v0{};
            constexpr MPL::Value<busyVal,busyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,busyVal> busy{}; 
        ///Addressed As A Slave
        enum class iaasVal {
            v0=0x00000000,     ///<Not addressed
            v1=0x00000001,     ///<Addressed as a slave
        };
        namespace iaasValC{
            constexpr MPL::Value<iaasVal,iaasVal::v0> v0{};
            constexpr MPL::Value<iaasVal,iaasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,iaasVal> iaas{}; 
        ///Transfer Complete Flag
        enum class tcfVal {
            v0=0x00000000,     ///<Transfer in progress
            v1=0x00000001,     ///<Transfer complete
        };
        namespace tcfValC{
            constexpr MPL::Value<tcfVal,tcfVal::v0> v0{};
            constexpr MPL::Value<tcfVal,tcfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tcfVal> tcf{}; 
    }
    namespace I2c1D{    ///<I2C Data I/O register
        using Addr = Register::Address<0x40067004,0xffffff00,0,unsigned char>;
        ///Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace I2c1C2{    ///<I2C Control Register 2
        using Addr = Register::Address<0x40067005,0xffffff00,0,unsigned char>;
        ///Slave Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ad{}; 
        ///Range Address Matching Enable
        enum class rmenVal {
            v0=0x00000000,     ///<Range mode disabled. No address match occurs for an address within the range of values of the A1 and RA registers.
            v1=0x00000001,     ///<Range mode enabled. Address matching occurs when a slave receives an address within the range of values of the A1 and RA registers.
        };
        namespace rmenValC{
            constexpr MPL::Value<rmenVal,rmenVal::v0> v0{};
            constexpr MPL::Value<rmenVal,rmenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,rmenVal> rmen{}; 
        ///Slave Baud Rate Control
        enum class sbrcVal {
            v0=0x00000000,     ///<The slave baud rate follows the master baud rate and clock stretching may occur
            v1=0x00000001,     ///<Slave baud rate is independent of the master baud rate
        };
        namespace sbrcValC{
            constexpr MPL::Value<sbrcVal,sbrcVal::v0> v0{};
            constexpr MPL::Value<sbrcVal,sbrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sbrcVal> sbrc{}; 
        ///High Drive Select
        enum class hdrsVal {
            v0=0x00000000,     ///<Normal drive mode
            v1=0x00000001,     ///<High drive mode
        };
        namespace hdrsValC{
            constexpr MPL::Value<hdrsVal,hdrsVal::v0> v0{};
            constexpr MPL::Value<hdrsVal,hdrsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hdrsVal> hdrs{}; 
        ///Address Extension
        enum class adextVal {
            v0=0x00000000,     ///<7-bit address scheme
            v1=0x00000001,     ///<10-bit address scheme
        };
        namespace adextValC{
            constexpr MPL::Value<adextVal,adextVal::v0> v0{};
            constexpr MPL::Value<adextVal,adextVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adextVal> adext{}; 
        ///General Call Address Enable
        enum class gcaenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace gcaenValC{
            constexpr MPL::Value<gcaenVal,gcaenVal::v0> v0{};
            constexpr MPL::Value<gcaenVal,gcaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,gcaenVal> gcaen{}; 
    }
    namespace I2c1Flt{    ///<I2C Programmable Input Glitch Filter register
        using Addr = Register::Address<0x40067006,0xffffff00,0,unsigned char>;
        ///I2C Programmable Filter Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> flt{}; 
        ///I2C Bus Start Detect Flag
        enum class startfVal {
            v0=0x00000000,     ///<No start happens on I2C bus
            v1=0x00000001,     ///<Start detected on I2C bus
        };
        namespace startfValC{
            constexpr MPL::Value<startfVal,startfVal::v0> v0{};
            constexpr MPL::Value<startfVal,startfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,startfVal> startf{}; 
        ///I2C Bus Stop or Start Interrupt Enable
        enum class ssieVal {
            v0=0x00000000,     ///<Stop or start detection interrupt is disabled
            v1=0x00000001,     ///<Stop or start detection interrupt is enabled
        };
        namespace ssieValC{
            constexpr MPL::Value<ssieVal,ssieVal::v0> v0{};
            constexpr MPL::Value<ssieVal,ssieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ssieVal> ssie{}; 
        ///I2C Bus Stop Detect Flag
        enum class stopfVal {
            v0=0x00000000,     ///<No stop happens on I2C bus
            v1=0x00000001,     ///<Stop detected on I2C bus
        };
        namespace stopfValC{
            constexpr MPL::Value<stopfVal,stopfVal::v0> v0{};
            constexpr MPL::Value<stopfVal,stopfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,stopfVal> stopf{}; 
        ///Stop Hold Enable
        enum class shenVal {
            v0=0x00000000,     ///<Stop holdoff is disabled. The MCU's entry to stop mode is not gated.
            v1=0x00000001,     ///<Stop holdoff is enabled.
        };
        namespace shenValC{
            constexpr MPL::Value<shenVal,shenVal::v0> v0{};
            constexpr MPL::Value<shenVal,shenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,shenVal> shen{}; 
    }
    namespace I2c1Ra{    ///<I2C Range Address register
        using Addr = Register::Address<0x40067007,0xffffff01,0,unsigned char>;
        ///Range Slave Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> rad{}; 
    }
}
