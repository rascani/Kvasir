#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DRAM Controller
    namespace DdrCr00{    ///<DDR Control Register 0
        using Addr = Register::Address<0x400ae000,0x00000000,0x00000000,unsigned>;
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DRAM Class
        enum class DdrclsVal {
            v0000=0x00000000,     ///<DDR
            v0001=0x00000001,     ///<LPDDR
            v0010=0x00000002,     ///<Reserved
            v0011=0x00000003,     ///<Reserved
            v0100=0x00000004,     ///<DDR2
            v0101=0x00000005,     ///<Reserved
            v0110=0x00000006,     ///<Reserved
            v1111=0x0000000f,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,DdrclsVal> ddrcls{}; 
        namespace DdrclsValC{
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ddrcls)::Type,DdrclsVal::v1111> v1111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> version{}; 
    }
    namespace DdrCr01{    ///<DDR Control Register 1
        using Addr = Register::Address<0x400ae004,0x00000000,0x00000000,unsigned>;
        ///Maxmum Row
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maxrow{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Maximum Column
        enum class MaxcolVal {
            v0000=0x00000000,     ///<0
            v0001=0x00000001,     ///<1
            v1011=0x0000000b,     ///<11
            v1100=0x0000000c,     ///<Reserved
            v1101=0x0000000d,     ///<Reserved
            v1110=0x0000000e,     ///<Reserved
            v1111=0x0000000f,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MaxcolVal> maxcol{}; 
        namespace MaxcolValC{
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(maxcol)::Type,MaxcolVal::v1111> v1111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Chip Select Maximum
        enum class CsmaxVal {
            v00=0x00000000,     ///<Zero
            v01=0x00000001,     ///<One
            v10=0x00000002,     ///<Two
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CsmaxVal> csmax{}; 
        namespace CsmaxValC{
            constexpr Register::FieldValue<decltype(csmax)::Type,CsmaxVal::v00> v00{};
            constexpr Register::FieldValue<decltype(csmax)::Type,CsmaxVal::v01> v01{};
            constexpr Register::FieldValue<decltype(csmax)::Type,CsmaxVal::v10> v10{};
            constexpr Register::FieldValue<decltype(csmax)::Type,CsmaxVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr02{    ///<DDR Control Register 2
        using Addr = Register::Address<0x400ae008,0x00000000,0x00000000,unsigned>;
        ///Time Initialization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tinit{}; 
        ///Initialization Auto-Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> initaref{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr03{    ///<DDR Control Register 3
        using Addr = Register::Address<0x400ae00c,0x00000000,0x00000000,unsigned>;
        ///Latency Linear
        enum class LatlinVal {
            v0000=0x00000000,     ///<Reserved
            v0001=0x00000001,     ///<Reserved
            v0010=0x00000002,     ///<1 cycle
            v0011=0x00000003,     ///<1.5 cycles
            v1111=0x0000000f,     ///<7.5 cycles
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,LatlinVal> latlin{}; 
        namespace LatlinValC{
            constexpr Register::FieldValue<decltype(latlin)::Type,LatlinVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(latlin)::Type,LatlinVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(latlin)::Type,LatlinVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(latlin)::Type,LatlinVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(latlin)::Type,LatlinVal::v1111> v1111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Latency Gate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> latgate{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Write Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wrlat{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time CAS-to-CAS Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tccd{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr04{    ///<DDR Control Register 4
        using Addr = Register::Address<0x400ae010,0x00000000,0x00000000,unsigned>;
        ///Time Burst Interrupt Interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbint{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> trrd{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time RAS Minimum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> trasmin{}; 
    }
    namespace DdrCr05{    ///<DDR Control Register 5
        using Addr = Register::Address<0x400ae014,0x00000000,0x00000000,unsigned>;
        ///Time Write-To-Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> twtr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time Read-To-Precharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> trtp{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tmrd{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr06{    ///<DDR Control Register 6
        using Addr = Register::Address<0x400ae018,0x00000000,0x00000000,unsigned>;
        ///Time Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tmod{}; 
        ///Time Row Access Maximum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> trasmax{}; 
        ///Interrupt Write Burst
        enum class IntwbrVal {
            v0=0x00000000,     ///<Read commands cannot interrupt write commands
            v1=0x00000001,     ///<Read commands can interrupt write commands
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IntwbrVal> intwbr{}; 
        namespace IntwbrValC{
            constexpr Register::FieldValue<decltype(intwbr)::Type,IntwbrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(intwbr)::Type,IntwbrVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr07{    ///<DDR Control Register 7
        using Addr = Register::Address<0x400ae01c,0x00000000,0x00000000,unsigned>;
        ///Clock Pulse Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> clkpw{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time Clock low Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> tckesr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Auto Precharge
        enum class ApVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ApVal> ap{}; 
        namespace ApValC{
            constexpr Register::FieldValue<decltype(ap)::Type,ApVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ap)::Type,ApVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Concurrent Auto-Precharge Enable
        enum class CcapenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,CcapenVal> ccapen{}; 
        namespace CcapenValC{
            constexpr Register::FieldValue<decltype(ccapen)::Type,CcapenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccapen)::Type,CcapenVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DdrCr08{    ///<DDR Control Register 8
        using Addr = Register::Address<0x400ae020,0x00000000,0x00000000,unsigned>;
        ///Time RAS lockout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time RAS-to-CAS Delay Interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> trasdi{}; 
        ///Time Write Recovery
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tdal{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr09{    ///<DDR Control Register 9
        using Addr = Register::Address<0x400ae024,0x00000000,0x00000000,unsigned>;
        ///Time DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tdll{}; 
        ///No Command
        enum class NocmdVal {
            v0=0x00000000,     ///<Issue only REF and PRE commands during DLL initialization of the DRAM devices. If PRE commands are issued before DLL initialization is complete, the command is executed immediately and the DLL initialization continues.
            v1=0x00000001,     ///<Do not issue any type of command during DLL initialization of the DRAM devices. If any other commands are issued, they are held until DLL initialization completes.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,NocmdVal> nocmd{}; 
        namespace NocmdValC{
            constexpr Register::FieldValue<decltype(nocmd)::Type,NocmdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nocmd)::Type,NocmdVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Burst Length
        enum class BstlenVal {
            v000=0x00000000,     ///<Reserved.
            v001=0x00000001,     ///<Two memory words - only applicable if the reduc parameter is set to 'b0 for operation in full datapath mode. Applicable for these memory systems: DDR1 (dram_class = 'b0000) LPDDR1 (dram_class = 'b0001).
            v010=0x00000002,     ///<Four memory words. Applicable for these memory systems: DDR1 (dram_class = 'b0000) LPDDR1 (dram_class = 'b0001) DDR2 (dram_class = 'b0100).
            v011=0x00000003,     ///<Eight memory words. Applicable for these memory systems: DDR1 (dram_class = 'b0000) LPDDR1 (dram_class = 'b0001).
            v100=0x00000004,     ///<Reserved
            v111=0x00000007,     ///<Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,BstlenVal> bstlen{}; 
        namespace BstlenValC{
            constexpr Register::FieldValue<decltype(bstlen)::Type,BstlenVal::v000> v000{};
            constexpr Register::FieldValue<decltype(bstlen)::Type,BstlenVal::v001> v001{};
            constexpr Register::FieldValue<decltype(bstlen)::Type,BstlenVal::v010> v010{};
            constexpr Register::FieldValue<decltype(bstlen)::Type,BstlenVal::v011> v011{};
            constexpr Register::FieldValue<decltype(bstlen)::Type,BstlenVal::v100> v100{};
            constexpr Register::FieldValue<decltype(bstlen)::Type,BstlenVal::v111> v111{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr10{    ///<DDR Control Register 10
        using Addr = Register::Address<0x400ae028,0x00000000,0x00000000,unsigned>;
        ///Time FAW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tfaw{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time Clock Enable to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> tcpd{}; 
        ///TRP All Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trpab{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr11{    ///<DDR Control Register 11
        using Addr = Register::Address<0x400ae02c,0x00000000,0x00000000,unsigned>;
        ///Registered DIMM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> regdimm{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Auto Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> aref{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Auto Refresh Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> arefmode{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trefen{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr12{    ///<DDR Control Register 12
        using Addr = Register::Address<0x400ae030,0x00000000,0x00000000,unsigned>;
        ///Time Refresh Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Time Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> tref{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr13{    ///<DDR Control Register 13
        using Addr = Register::Address<0x400ae034,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> trefint{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Power Down
        enum class PdVal {
            v0=0x00000000,     ///<Enable full power state
            v1=0x00000001,     ///<The memory controller completes processing of the current burst for the current transaction (if any), issues a precharge all command, and disables the clock enable signal to the DRAM devices. Any subsequent commands in the command queue are suspended until this bit is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PdVal> pd{}; 
        namespace PdValC{
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pd)::Type,PdVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr14{    ///<DDR Control Register 14
        using Addr = Register::Address<0x400ae038,0x00000000,0x00000000,unsigned>;
        ///Time Power Down Exit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpdex{}; 
        ///Time Exit Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txsr{}; 
    }
    namespace DdrCr15{    ///<DDR Control Register 15
        using Addr = Register::Address<0x400ae03c,0x00000000,0x00000000,unsigned>;
        ///TXSNR parameter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txsnr{}; 
        ///Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sref{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Power Up Refresh
        enum class PurefVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PurefVal> puref{}; 
        namespace PurefValC{
            constexpr Register::FieldValue<decltype(puref)::Type,PurefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(puref)::Type,PurefVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr16{    ///<DDR Control Register 16
        using Addr = Register::Address<0x400ae040,0x00000000,0x00000000,unsigned>;
        ///Quick Refresh
        enum class QkrefVal {
            v0=0x00000000,     ///<Continue memory initialization
            v1=0x00000001,     ///<Interrupt memory initialization and enter self-refresh mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,QkrefVal> qkref{}; 
        namespace QkrefValC{
            constexpr Register::FieldValue<decltype(qkref)::Type,QkrefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(qkref)::Type,QkrefVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clkdly{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Low Power Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> lpctrl{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr17{    ///<DDR Control Register 17
        using Addr = Register::Address<0x400ae044,0x00000000,0x00000000,unsigned>;
        ///Low Power Power Down Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lppdcnt{}; 
        ///Low Power Refresh Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lprfcnt{}; 
    }
    namespace DdrCr18{    ///<DDR Control Register 18
        using Addr = Register::Address<0x400ae048,0x00000000,0x00000000,unsigned>;
        ///Low Power External Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lpextcnt{}; 
        ///Low Power Auto
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> lpauto{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr19{    ///<DDR Control Register 19
        using Addr = Register::Address<0x400ae04c,0x00000000,0x00000000,unsigned>;
        ///Low Power Interval Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lpintcnt{}; 
        ///Low Power Refresh Hold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lprfhold{}; 
    }
    namespace DdrCr20{    ///<DDR Control Register 20
        using Addr = Register::Address<0x400ae050,0x00000000,0x00000000,unsigned>;
        ///Low Power Refresh enable
        enum class LpreVal {
            v00=0x00000000,     ///<Refreshes occur
            v01=0x00000001,     ///<Refreshes do not occur
            v10=0x00000002,     ///<Reserved
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LpreVal> lpre{}; 
        namespace LpreValC{
            constexpr Register::FieldValue<decltype(lpre)::Type,LpreVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lpre)::Type,LpreVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lpre)::Type,LpreVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lpre)::Type,LpreVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cksre{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock Self Refresh Exit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cksrx{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Write Mode Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrmd{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr21{    ///<DDR Control Register 21
        using Addr = Register::Address<0x400ae054,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mr0dat0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> mr1dat0{}; 
    }
    namespace DdrCr22{    ///<DDR Control Register 22
        using Addr = Register::Address<0x400ae058,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mr2data0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> mr3dat0{}; 
    }
    namespace DdrCr23{    ///<DDR Control Register 23
        using Addr = Register::Address<0x400ae05c,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr24{    ///<DDR Control Register 24
        using Addr = Register::Address<0x400ae060,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr25{    ///<DDR Control Register 25
        using Addr = Register::Address<0x400ae064,0x00000000,0x00000000,unsigned>;
        ///Eight Bank Mode
        enum class Bnk8Val {
            v0=0x00000000,     ///<4 banks
            v1=0x00000001,     ///<8 banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bnk8Val> bnk8{}; 
        namespace Bnk8ValC{
            constexpr Register::FieldValue<decltype(bnk8)::Type,Bnk8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bnk8)::Type,Bnk8Val::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Address Pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> addpins{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Column Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> colsiz{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Auto Precharge Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> aprebit{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr26{    ///<DDR Control Register 26
        using Addr = Register::Address<0x400ae068,0x00000000,0x00000000,unsigned>;
        ///Age Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> agecnt{}; 
        ///Command Age count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdage{}; 
        ///Address Collision enable
        enum class AddcolVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,AddcolVal> addcol{}; 
        namespace AddcolValC{
            constexpr Register::FieldValue<decltype(addcol)::Type,AddcolVal::v0> v0{};
            constexpr Register::FieldValue<decltype(addcol)::Type,AddcolVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Bank Split enable
        enum class BnksptVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,BnksptVal> bnkspt{}; 
        namespace BnksptValC{
            constexpr Register::FieldValue<decltype(bnkspt)::Type,BnksptVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bnkspt)::Type,BnksptVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr27{    ///<DDR Control Register 27
        using Addr = Register::Address<0x400ae06c,0x00000000,0x00000000,unsigned>;
        ///Placement Enable
        enum class PlenVal {
            v0=0x00000000,     ///<Disabled. The command queue is a straight FIFO.
            v1=0x00000001,     ///<Enabled. The command queue is filled according to the placement logic factors.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PlenVal> plen{}; 
        namespace PlenValC{
            constexpr Register::FieldValue<decltype(plen)::Type,PlenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(plen)::Type,PlenVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Priority Enable
        enum class PrienVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,PrienVal> prien{}; 
        namespace PrienValC{
            constexpr Register::FieldValue<decltype(prien)::Type,PrienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(prien)::Type,PrienVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Read Write same Enable
        enum class RwenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,RwenVal> rwen{}; 
        namespace RwenValC{
            constexpr Register::FieldValue<decltype(rwen)::Type,RwenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwen)::Type,RwenVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Swap Enable
        enum class SwpenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,SwpenVal> swpen{}; 
        namespace SwpenValC{
            constexpr Register::FieldValue<decltype(swpen)::Type,SwpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(swpen)::Type,SwpenVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr28{    ///<DDR Control Register 28
        using Addr = Register::Address<0x400ae070,0x00000000,0x00000000,unsigned>;
        ///Chip Select Map
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csmap{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///no description available
        enum class ReducVal {
            v0=0x00000000,     ///<16-bit - standard operation using full memory bus
            v1=0x00000001,     ///<8-bit - Memory datapath width is half of the maximum size. The upper half of the memory busses (DQ, DQS, and DM) are unused and relevant data only exists in the lower half of the busses.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ReducVal> reduc{}; 
        namespace ReducValC{
            constexpr Register::FieldValue<decltype(reduc)::Type,ReducVal::v0> v0{};
            constexpr Register::FieldValue<decltype(reduc)::Type,ReducVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Big Endian Enable
        enum class BigendVal {
            v0=0x00000000,     ///<Little endian
            v1=0x00000001,     ///<Big endian
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BigendVal> bigend{}; 
        namespace BigendValC{
            constexpr Register::FieldValue<decltype(bigend)::Type,BigendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bigend)::Type,BigendVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Command Latency Reduction Enable
        enum class CmdlatrVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,CmdlatrVal> cmdlatr{}; 
        namespace CmdlatrValC{
            constexpr Register::FieldValue<decltype(cmdlatr)::Type,CmdlatrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cmdlatr)::Type,CmdlatrVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr29{    ///<DDR Control Register 29
        using Addr = Register::Address<0x400ae074,0x00000000,0x00000000,unsigned>;
        ///Write Latency Reduction enable
        enum class WrlatrVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WrlatrVal> wrlatr{}; 
        namespace WrlatrValC{
            constexpr Register::FieldValue<decltype(wrlatr)::Type,WrlatrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wrlatr)::Type,WrlatrVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Fast Write
        enum class FstwrVal {
            v0=0x00000000,     ///<The memory controller issues a write command to the DRAM devices when it has received enough data for one DRAM burst. Write data can be sent in any cycle relative to the write command. This mode also allows for multi-word write command data to arrive in non-sequential cycles.
            v1=0x00000001,     ///<The memory controller issues a write command to the DRAM devices after the first word of the write data is received by the memory controller. The first word can be sent at any time relative to the write command. In this mode, multi-word write command data must be available to the memory controller in sequential cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,FstwrVal> fstwr{}; 
        namespace FstwrValC{
            constexpr Register::FieldValue<decltype(fstwr)::Type,FstwrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fstwr)::Type,FstwrVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Queue Fullness
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> qfull{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Resyncronize
        enum class ResyncVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Initiate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ResyncVal> resync{}; 
        namespace ResyncValC{
            constexpr Register::FieldValue<decltype(resync)::Type,ResyncVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resync)::Type,ResyncVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr30{    ///<DDR Control Register 30
        using Addr = Register::Address<0x400ae078,0x00000000,0x00000000,unsigned>;
        ///Resynchroize after Refresh
        enum class RsyncrfVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RsyncrfVal> rsyncrf{}; 
        namespace RsyncrfValC{
            constexpr Register::FieldValue<decltype(rsyncrf)::Type,RsyncrfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsyncrf)::Type,RsyncrfVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intstat{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Interupt Acknowlege
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intack{}; 
    }
    namespace DdrCr31{    ///<DDR Control Register 31
        using Addr = Register::Address<0x400ae07c,0x00000000,0x00000000,unsigned>;
        ///Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intmask{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr32{    ///<DDR Control Register 32
        using Addr = Register::Address<0x400ae080,0x00000000,0x00000000,unsigned>;
        ///Out Of Range Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oorad{}; 
    }
    namespace DdrCr33{    ///<DDR Control Register 33
        using Addr = Register::Address<0x400ae084,0x00000000,0x00000000,unsigned>;
        ///Out Of Range Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oorlen{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Out Of Range Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oortyp{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Out Of Range source ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oorid{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr34{    ///<DDR Control Register 34
        using Addr = Register::Address<0x400ae088,0x00000000,0x00000000,unsigned>;
        ///ODT Read map CS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> odtrdc{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///ODT Write map CS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odtwrcs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr35{    ///<DDR Control Register 35
        using Addr = Register::Address<0x400ae08c,0x00000000,0x00000000,unsigned>;
        ///Read To Write Same Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> r2wsmcs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Write To Read Same Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> w2rsmcs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr36{    ///<DDR Control Register 36
        using Addr = Register::Address<0x400ae090,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr37{    ///<DDR Control Register 37
        using Addr = Register::Address<0x400ae094,0x00000000,0x00000000,unsigned>;
        ///R2R Same chip select delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> r2rsame{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///R2W Same chip select delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> r2wsame{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///W2R Same chip select delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> w2rsame{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///W2W Same chip select delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> w2wsame{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr38{    ///<DDR Control Register 38
        using Addr = Register::Address<0x400ae098,0x00000000,0x00000000,unsigned>;
        ///OCD Pull Down adjustment Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pdncs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///OCD Pull Up adjustment Chip Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> pupcs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Write Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> pwrcnt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr39{    ///<DDR Control Register 39
        using Addr = Register::Address<0x400ae09c,0x00000000,0x00000000,unsigned>;
        ///Port 0 Read command Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> p0rdcnt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Read command Priority
        enum class Rp0Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Rp0Val> rp0{}; 
        namespace Rp0ValC{
            constexpr Register::FieldValue<decltype(rp0)::Type,Rp0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(rp0)::Type,Rp0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(rp0)::Type,Rp0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(rp0)::Type,Rp0Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Write command Priority
        enum class Wp0Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Wp0Val> wp0{}; 
        namespace Wp0ValC{
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wp0)::Type,Wp0Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr40{    ///<DDR Control Register 40
        using Addr = Register::Address<0x400ae0a0,0x00000000,0x00000000,unsigned>;
        ///Port 0 Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> p0typ{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 1 Write command Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,8),Register::ReadWriteAccess,unsigned> p1wrcnt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr41{    ///<DDR Control Register 41
        using Addr = Register::Address<0x400ae0a4,0x00000000,0x00000000,unsigned>;
        ///Port 1 Read command Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> p1rdcnt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Read command priority Port 1
        enum class Rp1Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Rp1Val> rp1{}; 
        namespace Rp1ValC{
            constexpr Register::FieldValue<decltype(rp1)::Type,Rp1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(rp1)::Type,Rp1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(rp1)::Type,Rp1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(rp1)::Type,Rp1Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Write command priority Port 1
        enum class Wp1Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Wp1Val> wp1{}; 
        namespace Wp1ValC{
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wp1)::Type,Wp1Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr42{    ///<DDR Control Register 42
        using Addr = Register::Address<0x400ae0a8,0x00000000,0x00000000,unsigned>;
        ///Port 1 Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> p1typ{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 2 Write command Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,8),Register::ReadWriteAccess,unsigned> p2wrcnt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr43{    ///<DDR Control Register 43
        using Addr = Register::Address<0x400ae0ac,0x00000000,0x00000000,unsigned>;
        ///Port 2 Read command Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> p2rdcnt{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Read command priority Port 2
        enum class Rp2Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Rp2Val> rp2{}; 
        namespace Rp2ValC{
            constexpr Register::FieldValue<decltype(rp2)::Type,Rp2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(rp2)::Type,Rp2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(rp2)::Type,Rp2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(rp2)::Type,Rp2Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Write command priority Port 2
        enum class Wp2Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Wp2Val> wp2{}; 
        namespace Wp2ValC{
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wp2)::Type,Wp2Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr44{    ///<DDR Control Register 44
        using Addr = Register::Address<0x400ae0b0,0x00000000,0x00000000,unsigned>;
        ///Port 2 Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> p2typ{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///WRR Latency
        enum class WrrlatVal {
            v0=0x00000000,     ///<Free-running
            v1=0x00000001,     ///<Limited
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WrrlatVal> wrrlat{}; 
        namespace WrrlatValC{
            constexpr Register::FieldValue<decltype(wrrlat)::Type,WrrlatVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wrrlat)::Type,WrrlatVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///WRR Shared arbitration
        enum class WrrshareVal {
            v0=0x00000000,     ///<Port 0 and port 1 are treated independently for arbitration
            v1=0x00000001,     ///<Port 0 and port 1 are grouped together for arbitration
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,WrrshareVal> wrrshare{}; 
        namespace WrrshareValC{
            constexpr Register::FieldValue<decltype(wrrshare)::Type,WrrshareVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wrrshare)::Type,WrrshareVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///WRR parameters Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrrerr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr45{    ///<DDR Control Register 45
        using Addr = Register::Address<0x400ae0b4,0x00000000,0x00000000,unsigned>;
        ///Port 0 Priority 0 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> p0pri0{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Priority 1 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> p0pri1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Priority 2 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> p0pri2{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Priority 3 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> p0pri3{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr46{    ///<DDR Control Register 46
        using Addr = Register::Address<0x400ae0b8,0x00000000,0x00000000,unsigned>;
        ///Port 0 Order
        enum class P0ordVal {
            v00=0x00000000,     ///<Highest listing in the scan order
            v01=0x00000001,     ///<------
            v10=0x00000002,     ///<------
            v11=0x00000003,     ///<Lowest listing in the scan order
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,P0ordVal> p0ord{}; 
        namespace P0ordValC{
            constexpr Register::FieldValue<decltype(p0ord)::Type,P0ordVal::v00> v00{};
            constexpr Register::FieldValue<decltype(p0ord)::Type,P0ordVal::v01> v01{};
            constexpr Register::FieldValue<decltype(p0ord)::Type,P0ordVal::v10> v10{};
            constexpr Register::FieldValue<decltype(p0ord)::Type,P0ordVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 0 Priority Relax
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,8),Register::ReadWriteAccess,unsigned> p0prirlx{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 1 Priority 0 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> p1pri0{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr47{    ///<DDR Control Register 47
        using Addr = Register::Address<0x400ae0bc,0x00000000,0x00000000,unsigned>;
        ///Port 1 Priority 1 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> p1pri1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 1 Priority 2 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> p1pri2{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 1 Priority 3 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> p1pri3{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 1 Order
        enum class P1ordVal {
            v00=0x00000000,     ///<Highest listing in the scan order
            v11=0x00000003,     ///<Lowest listing in the scan order
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,P1ordVal> p1ord{}; 
        namespace P1ordValC{
            constexpr Register::FieldValue<decltype(p1ord)::Type,P1ordVal::v00> v00{};
            constexpr Register::FieldValue<decltype(p1ord)::Type,P1ordVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr48{    ///<DDR Control Register 48
        using Addr = Register::Address<0x400ae0c0,0x00000000,0x00000000,unsigned>;
        ///Port 1 Priority Relax
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> p1prirlx{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 2 Priority 0 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> p2pri0{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 2 Priority 1 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> p2pri1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr49{    ///<DDR Control Register 49
        using Addr = Register::Address<0x400ae0c4,0x00000000,0x00000000,unsigned>;
        ///Port 2 Priority 2 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> p2pri2{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 2 Priority 3 commands
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> p2pri3{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Port 2 Order
        enum class P2ordVal {
            v00=0x00000000,     ///<Highest listing in the scan order
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest listing in the scan order
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,P2ordVal> p2ord{}; 
        namespace P2ordValC{
            constexpr Register::FieldValue<decltype(p2ord)::Type,P2ordVal::v00> v00{};
            constexpr Register::FieldValue<decltype(p2ord)::Type,P2ordVal::v01> v01{};
            constexpr Register::FieldValue<decltype(p2ord)::Type,P2ordVal::v10> v10{};
            constexpr Register::FieldValue<decltype(p2ord)::Type,P2ordVal::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr50{    ///<DDR Control Register 50
        using Addr = Register::Address<0x400ae0c8,0x00000000,0x00000000,unsigned>;
        ///Port 2 Priority Relax
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> p2prirlx{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Clock Status
        enum class ClkstatusVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ClkstatusVal> clkstatus{}; 
        namespace ClkstatusValC{
            constexpr Register::FieldValue<decltype(clkstatus)::Type,ClkstatusVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clkstatus)::Type,ClkstatusVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr51{    ///<DDR Control Register 51
        using Addr = Register::Address<0x400ae0cc,0x00000000,0x00000000,unsigned>;
        ///DLL Reset Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dllrstdly{}; 
        ///DLL Reset Adjust Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dllradly{}; 
        ///PHY Write Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> phywrlat{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr52{    ///<DDR Control Register 52
        using Addr = Register::Address<0x400ae0d0,0x00000000,0x00000000,unsigned>;
        ///PHY Write Latency Base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pywrltbs{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///PHY Read Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> phyrdlat{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Read Data Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rddataen{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Read Data Enable Base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rddtenbas{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr53{    ///<DDR Control Register 53
        using Addr = Register::Address<0x400ae0d4,0x00000000,0x00000000,unsigned>;
        ///DRAM Clock Disable for chip select
        enum class ClkdiscsVal {
            v0=0x00000000,     ///<Memory clock active
            v1=0x00000001,     ///<Memory clock disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ClkdiscsVal> clkdiscs{}; 
        namespace ClkdiscsValC{
            constexpr Register::FieldValue<decltype(clkdiscs)::Type,ClkdiscsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clkdiscs)::Type,ClkdiscsVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DFI CRTLUPD Minimum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crtlupdmn{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DFI CRTLUPD Minimum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> ctrlupdmx{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr54{    ///<DDR Control Register 54
        using Addr = Register::Address<0x400ae0d8,0x00000000,0x00000000,unsigned>;
        ///DFI PHYUPD Type 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> phyupdty0{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DFI PHYUPD Type 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> phyupdty1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr55{    ///<DDR Control Register 55
        using Addr = Register::Address<0x400ae0dc,0x00000000,0x00000000,unsigned>;
        ///DFI PHYUPD TYPE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> phyupdty2{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DFI PHYUPD TYPE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> phyupdty3{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr56{    ///<DDR Control Register 56
        using Addr = Register::Address<0x400ae0e0,0x00000000,0x00000000,unsigned>;
        ///TDFI PHYUPDRESP parameter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> phyupdresp{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Read Latency Adjust
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rdlatadj{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Write Latency Adjust
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> wrlatadj{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr57{    ///<DDR Control Register 57
        using Addr = Register::Address<0x400ae0e4,0x00000000,0x00000000,unsigned>;
        ///Command Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cmddly{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DFI Clock Disable Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clkdisdly{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DFI Clock Enable Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> clkendly{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///ODT Alternate Enable
        enum class OdtaltenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,OdtaltenVal> odtalten{}; 
        namespace OdtaltenValC{
            constexpr Register::FieldValue<decltype(odtalten)::Type,OdtaltenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(odtalten)::Type,OdtaltenVal::v1> v1{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrCr58{    ///<DDR Control Register 58
        using Addr = Register::Address<0x400ae0e8,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr59{    ///<DDR Control Register 59
        using Addr = Register::Address<0x400ae0ec,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr60{    ///<DDR Control Register 60
        using Addr = Register::Address<0x400ae0f0,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr61{    ///<DDR Control Register 61
        using Addr = Register::Address<0x400ae0f4,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr62{    ///<DDR Control Register 62
        using Addr = Register::Address<0x400ae0f8,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrCr63{    ///<DDR Control Register 63
        using Addr = Register::Address<0x400ae0fc,0x00000000,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notUsed{}; 
    }
    namespace DdrRcr{    ///<RCR Control Register
        using Addr = Register::Address<0x400ae180,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reset
        enum class RstVal {
            v0=0x00000000,     ///<No software reset
            v1=0x00000001,     ///<Force software reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace DdrPadCtrl{    ///<I/O Pad Control Register
        using Addr = Register::Address<0x400ae1ac,0x00000000,0x00000000,unsigned>;
        ///These SPARE_DLY_CTRL[3:0]bits set the delay chains in the spare logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> spareDlyCtrl{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Required to enable ODT and configure ODT resistor value in the pad.
        enum class Padodtcs0Val {
            v00=0x00000000,     ///<ODT Disabled
            v01=0x00000001,     ///<75 Ohms
            v10=0x00000002,     ///<150 Ohms
            v11=0x00000003,     ///<50 Ohms
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Padodtcs0Val> padOdtCs0{}; 
        namespace Padodtcs0ValC{
            constexpr Register::FieldValue<decltype(padOdtCs0)::Type,Padodtcs0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(padOdtCs0)::Type,Padodtcs0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(padOdtCs0)::Type,Padodtcs0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(padOdtCs0)::Type,Padodtcs0Val::v11> v11{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
