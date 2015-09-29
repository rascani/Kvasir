#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//32-bit counter/timers CT32B0/1
    namespace Noneir{    ///<Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending.
        using Addr = Register::Address<0x40014000,0xffffff00,0,unsigned>;
        ///Interrupt flag for match channel 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mr0int{}; 
        ///Interrupt flag for match channel 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mr1int{}; 
        ///Interrupt flag for match channel 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mr2int{}; 
        ///Interrupt flag for match channel 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mr3int{}; 
        ///Interrupt flag for capture channel 0 event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cr0int{}; 
        ///Interrupt flag for capture channel 1 event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cr1int{}; 
        ///Interrupt flag for capture channel 2 event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cr2int{}; 
        ///Interrupt flag for capture channel 3 event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cr3int{}; 
    }
    namespace Nonetcr{    ///<Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR.
        using Addr = Register::Address<0x40014004,0xfffffffc,0,unsigned>;
        ///Counter enable.
        enum class cenVal {
            theCountersAreDis=0x00000000,     ///<The counters are disabled.
            theTimerCounterAn=0x00000001,     ///<The Timer Counter and Prescale Counter are enabled for counting.
        };
        namespace cenValC{
            constexpr MPL::Value<cenVal,cenVal::theCountersAreDis> theCountersAreDis{};
            constexpr MPL::Value<cenVal,cenVal::theTimerCounterAn> theTimerCounterAn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cenVal> cen{}; 
        ///Counter reset.
        enum class crstVal {
            doNothing=0x00000000,     ///<Do nothing.
            theTimerCounterAn=0x00000001,     ///<The Timer Counter and the Prescale Counter are synchronously reset on the next positive edge of PCLK. The counters remain reset until TCR[1] is returned to zero.
        };
        namespace crstValC{
            constexpr MPL::Value<crstVal,crstVal::doNothing> doNothing{};
            constexpr MPL::Value<crstVal,crstVal::theTimerCounterAn> theTimerCounterAn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,crstVal> crst{}; 
    }
    namespace Nonetc{    ///<Timer Counter. The 32-bit TC is incremented every PR+1 cycles of PCLK. The TC is controlled through the TCR.
        using Addr = Register::Address<0x40014008,0x00000000,0,unsigned>;
        ///Timer counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Nonepr{    ///<Prescale Register. When the Prescale Counter (below) is equal to this value, the next clock increments the TC and clears the PC.
        using Addr = Register::Address<0x4001400c,0x00000000,0,unsigned>;
        ///Prescaler value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pcval{}; 
    }
    namespace Nonepc{    ///<Prescale Counter. The 32-bit PC is a counter which is incremented to the value stored in PR. When the value in PR is reached, the TC is incremented and the PC is cleared. The PC is observable and controllable through the bus interface.
        using Addr = Register::Address<0x40014010,0x00000000,0,unsigned>;
        ///Prescale counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Nonemcr{    ///<Match Control Register. The MCR is used to control if an interrupt is generated and if the TC is reset when a Match occurs.
        using Addr = Register::Address<0x40014014,0xfffff000,0,unsigned>;
        ///Interrupt on MR0: an interrupt is generated when MR0 matches the value in the TC.
        enum class mr0iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr0iValC{
            constexpr MPL::Value<mr0iVal,mr0iVal::enabled> enabled{};
            constexpr MPL::Value<mr0iVal,mr0iVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mr0iVal> mr0i{}; 
        ///Reset on MR0: the TC will be reset if MR0 matches it.
        enum class mr0rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr0rValC{
            constexpr MPL::Value<mr0rVal,mr0rVal::enabled> enabled{};
            constexpr MPL::Value<mr0rVal,mr0rVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mr0rVal> mr0r{}; 
        ///Stop on MR0: the TC and PC will be stopped and TCR[0] will be set to 0 if MR0 matches the TC.
        enum class mr0sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr0sValC{
            constexpr MPL::Value<mr0sVal,mr0sVal::enabled> enabled{};
            constexpr MPL::Value<mr0sVal,mr0sVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mr0sVal> mr0s{}; 
        ///Interrupt on MR1: an interrupt is generated when MR1 matches the value in the TC.
        enum class mr1iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr1iValC{
            constexpr MPL::Value<mr1iVal,mr1iVal::enabled> enabled{};
            constexpr MPL::Value<mr1iVal,mr1iVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mr1iVal> mr1i{}; 
        ///Reset on MR1: the TC will be reset if MR1 matches it.
        enum class mr1rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr1rValC{
            constexpr MPL::Value<mr1rVal,mr1rVal::enabled> enabled{};
            constexpr MPL::Value<mr1rVal,mr1rVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mr1rVal> mr1r{}; 
        ///Stop on MR1: the TC and PC will be stopped and TCR[0] will be set to 0 if MR1 matches the TC.
        enum class mr1sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr1sValC{
            constexpr MPL::Value<mr1sVal,mr1sVal::enabled> enabled{};
            constexpr MPL::Value<mr1sVal,mr1sVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mr1sVal> mr1s{}; 
        ///Interrupt on MR2: an interrupt is generated when MR2 matches the value in the TC.
        enum class mr2iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr2iValC{
            constexpr MPL::Value<mr2iVal,mr2iVal::enabled> enabled{};
            constexpr MPL::Value<mr2iVal,mr2iVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,mr2iVal> mr2i{}; 
        ///Reset on MR2: the TC will be reset if MR2 matches it.
        enum class mr2rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr2rValC{
            constexpr MPL::Value<mr2rVal,mr2rVal::enabled> enabled{};
            constexpr MPL::Value<mr2rVal,mr2rVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,mr2rVal> mr2r{}; 
        ///Stop on MR2: the TC and PC will be stopped and TCR[0] will be set to 0 if MR2 matches the TC.
        enum class mr2sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr2sValC{
            constexpr MPL::Value<mr2sVal,mr2sVal::enabled> enabled{};
            constexpr MPL::Value<mr2sVal,mr2sVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,mr2sVal> mr2s{}; 
        ///Interrupt on MR3: an interrupt is generated when MR3 matches the value in the TC.
        enum class mr3iVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr3iValC{
            constexpr MPL::Value<mr3iVal,mr3iVal::enabled> enabled{};
            constexpr MPL::Value<mr3iVal,mr3iVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,mr3iVal> mr3i{}; 
        ///Reset on MR3: the TC will be reset if MR3 matches it.
        enum class mr3rVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr3rValC{
            constexpr MPL::Value<mr3rVal,mr3rVal::enabled> enabled{};
            constexpr MPL::Value<mr3rVal,mr3rVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,mr3rVal> mr3r{}; 
        ///Stop on MR3: the TC and PC will be stopped and TCR[0] will be set to 0 if MR3 matches the TC.
        enum class mr3sVal {
            enabled=0x00000001,     ///<Enabled
            disabled=0x00000000,     ///<Disabled
        };
        namespace mr3sValC{
            constexpr MPL::Value<mr3sVal,mr3sVal::enabled> enabled{};
            constexpr MPL::Value<mr3sVal,mr3sVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,mr3sVal> mr3s{}; 
    }
    namespace Nonemr0{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40014018,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr1{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x4001401c,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr2{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40014020,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Nonemr3{    ///<Match Register. MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC.
        using Addr = Register::Address<0x40014024,0x00000000,0,unsigned>;
        ///Timer counter match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> match{}; 
    }
    namespace Noneccr{    ///<Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place.
        using Addr = Register::Address<0x40014028,0xffffffc0,0,unsigned>;
        ///Capture on CT32Bn_CAP0 rising edge: a sequence of 0 then 1 on CT32Bn_CAP0 will cause CR0 to be loaded with the contents of TC.
        enum class cap0reVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        namespace cap0reValC{
            constexpr MPL::Value<cap0reVal,cap0reVal::enabled> enabled{};
            constexpr MPL::Value<cap0reVal,cap0reVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cap0reVal> cap0re{}; 
        ///Capture on CT32Bn_CAP0 falling edge: a sequence of 1 then 0 on CT32Bn_CAP0 will cause CR0 to be loaded with the contents of TC.
        enum class cap0feVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        namespace cap0feValC{
            constexpr MPL::Value<cap0feVal,cap0feVal::enabled> enabled{};
            constexpr MPL::Value<cap0feVal,cap0feVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cap0feVal> cap0fe{}; 
        ///Interrupt on CT32Bn_CAP0 event: a CR0 load due to a CT32Bn_CAP0 event will generate an interrupt.
        enum class cap0iVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        namespace cap0iValC{
            constexpr MPL::Value<cap0iVal,cap0iVal::enabled> enabled{};
            constexpr MPL::Value<cap0iVal,cap0iVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cap0iVal> cap0i{}; 
        ///Capture on CT32Bn_CAP1 rising edge: a sequence of 0 then 1 on CT32Bn_CAP1 will cause CR1 to be loaded with the contents of TC.
        enum class cap1reVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        namespace cap1reValC{
            constexpr MPL::Value<cap1reVal,cap1reVal::enabled> enabled{};
            constexpr MPL::Value<cap1reVal,cap1reVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cap1reVal> cap1re{}; 
        ///Capture on CT32Bn_CAP1 falling edge: a sequence of 1 then 0 on CT32Bn_CAP1 will cause CR1 to be loaded with the contents of TC.
        enum class cap1feVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        namespace cap1feValC{
            constexpr MPL::Value<cap1feVal,cap1feVal::enabled> enabled{};
            constexpr MPL::Value<cap1feVal,cap1feVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cap1feVal> cap1fe{}; 
        ///Interrupt on CT32Bn_CAP1 event: a CR1 load due to a CT32Bn_CAP1 event will generate an interrupt.
        enum class cap1iVal {
            enabled=0x00000001,     ///<Enabled.
            disabled=0x00000000,     ///<Disabled.
        };
        namespace cap1iValC{
            constexpr MPL::Value<cap1iVal,cap1iVal::enabled> enabled{};
            constexpr MPL::Value<cap1iVal,cap1iVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cap1iVal> cap1i{}; 
    }
    namespace Nonecr0{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x4001402c,0x00000000,0,unsigned>;
        ///Timer counter capture value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Nonecr1{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x40014030,0x00000000,0,unsigned>;
        ///Timer counter capture value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Nonecr2{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x40014034,0x00000000,0,unsigned>;
        ///Timer counter capture value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Nonecr3{    ///<Capture Register. CR is loaded with the value of TC when there is an event on the CT32B_CAP0 input.
        using Addr = Register::Address<0x40014038,0x00000000,0,unsigned>;
        ///Timer counter capture value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Noneemr{    ///<External Match Register. The EMR controls the match function and the external match pins CT32Bn_MAT[3:0].
        using Addr = Register::Address<0x4001403c,0xfffff000,0,unsigned>;
        ///External Match 0. This bit reflects the state of output CT32Bn_MAT0, whether or not this output is connected to its pin. When a match occurs between the TC and MR0, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[5:4] control the functionality of this output. This bit is driven to the CT32B0_MAT0/CT32B1_MAT0 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em0{}; 
        ///External Match 1. This bit reflects the state of output CT32Bn_MAT1, whether or not this output is connected to its pin. When a match occurs between the TC and MR1, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[7:6] control the functionality of this output. This bit is driven to the CT32B0_MAT1/CT32B1_MAT1 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> em1{}; 
        ///External Match 2. This bit reflects the state of output CT32Bn_MAT2, whether or not this output is connected to its pin. When a match occurs between the TC and MR2, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[9:8] control the functionality of this output. This bit is driven to the CT32B0_MAT2/CT32B1_MAT2 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> em2{}; 
        ///External Match 3. This bit reflects the state of output CT32Bn_MAT3, whether or not this output is connected to its pin. When a match occurs between the TC and MR3, this bit can either toggle, go LOW, go HIGH, or do nothing. Bits EMR[11:10] control the functionality of this output. This bit is driven to the CT32B3_MAT0/CT32B1_MAT3 pins if the match function is selected in the IOCON registers (0 = LOW, 1 = HIGH).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> em3{}; 
        ///External Match Control 0. Determines the functionality of External Match 0.
        enum class emc0Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT0 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT0 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc0ValC{
            constexpr MPL::Value<emc0Val,emc0Val::doNothing> doNothing{};
            constexpr MPL::Value<emc0Val,emc0Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc0Val,emc0Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc0Val,emc0Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,emc0Val> emc0{}; 
        ///External Match Control 1. Determines the functionality of External Match 1.
        enum class emc1Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT1 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT1 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc1ValC{
            constexpr MPL::Value<emc1Val,emc1Val::doNothing> doNothing{};
            constexpr MPL::Value<emc1Val,emc1Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc1Val,emc1Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc1Val,emc1Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,emc1Val> emc1{}; 
        ///External Match Control 2. Determines the functionality of External Match 2.
        enum class emc2Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT2 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT2 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc2ValC{
            constexpr MPL::Value<emc2Val,emc2Val::doNothing> doNothing{};
            constexpr MPL::Value<emc2Val,emc2Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc2Val,emc2Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc2Val,emc2Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,emc2Val> emc2{}; 
        ///External Match Control 3. Determines the functionality of External Match 3.
        enum class emc3Val {
            doNothing=0x00000000,     ///<Do Nothing.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding External Match bit/output to 0 (CT32Bi_MAT3 pin is LOW if pinned out).
            setTheCorrespondin=0x00000002,     ///<Set the corresponding External Match bit/output to 1 (CT32Bi_MAT3 pin is HIGH if pinned out).
            toggleTheCorrespon=0x00000003,     ///<Toggle the corresponding External Match bit/output.
        };
        namespace emc3ValC{
            constexpr MPL::Value<emc3Val,emc3Val::doNothing> doNothing{};
            constexpr MPL::Value<emc3Val,emc3Val::clearTheCorrespond> clearTheCorrespond{};
            constexpr MPL::Value<emc3Val,emc3Val::setTheCorrespondin> setTheCorrespondin{};
            constexpr MPL::Value<emc3Val,emc3Val::toggleTheCorrespon> toggleTheCorrespon{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,emc3Val> emc3{}; 
    }
    namespace Nonectcr{    ///<Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting.
        using Addr = Register::Address<0x40014070,0xffffff00,0,unsigned>;
        ///Counter/Timer Mode. This field selects which rising PCLK edges can increment Timer's Prescale Counter (PC), or clear PC and increment Timer Counter (TC). If Counter mode is selected in the CTCR, bits 2:0 in the Capture Control Register (CCR) must be programmed as 000.
        enum class ctmVal {
            timerModeEveryRi=0x00000000,     ///<Timer Mode: every rising PCLK edge
            rising=0x00000001,     ///<Counter Mode: TC is incremented on rising edges on the CAP input selected by bits 3:2.
            falling=0x00000002,     ///<Counter Mode: TC is incremented on falling edges on the CAP input selected by bits 3:2.
            bothedges=0x00000003,     ///<Counter Mode: TC is incremented on both edges on the CAP input selected by bits 3:2.
        };
        namespace ctmValC{
            constexpr MPL::Value<ctmVal,ctmVal::timerModeEveryRi> timerModeEveryRi{};
            constexpr MPL::Value<ctmVal,ctmVal::rising> rising{};
            constexpr MPL::Value<ctmVal,ctmVal::falling> falling{};
            constexpr MPL::Value<ctmVal,ctmVal::bothedges> bothedges{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ctmVal> ctm{}; 
        ///Count Input Select. In counter mode (when bits 1:0 in this register are not 00), these bits select which CAP pin or comparator output is sampled for clocking.  If Counter mode is selected in the CTCR, the 3 bits for that input in the Capture Control Register (CCR) must be programmed as 000. Values 0x2 to 0x3 are reserved.
        enum class cisVal {
            ct32bnCap0=0x00000000,     ///<CT32Bn_CAP0
            ct32bnCap1=0x00000001,     ///<CT32Bn_CAP1
        };
        namespace cisValC{
            constexpr MPL::Value<cisVal,cisVal::ct32bnCap0> ct32bnCap0{};
            constexpr MPL::Value<cisVal,cisVal::ct32bnCap1> ct32bnCap1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,cisVal> cis{}; 
        ///Setting this bit to 1 enables clearing of the timer and the prescaler when the capture-edge event specified in bits 7:5 occurs.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> encc{}; 
        ///When bit 4 is a 1, these bits select which capture input edge will cause the timer and prescaler to be cleared. These bits have no effect when bit 4 is low. Values 0x3 to 0x7 are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> selcc{}; 
    }
    namespace Nonepwmc{    ///<PWM Control Register. The PWMCON enables PWM mode for the external match pins CT32Bn_MAT[3:0].
        using Addr = Register::Address<0x40014074,0xfffffff0,0,unsigned>;
        ///PWM mode enable for channel0.
        enum class pwmen0Val {
            em0=0x00000000,     ///<CT32Bi_MAT0 is controlled by EM0.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT32Bi_MAT0.
        };
        namespace pwmen0ValC{
            constexpr MPL::Value<pwmen0Val,pwmen0Val::em0> em0{};
            constexpr MPL::Value<pwmen0Val,pwmen0Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pwmen0Val> pwmen0{}; 
        ///PWM mode enable for channel1.
        enum class pwmen1Val {
            em1=0x00000000,     ///<CT32Bi_MAT01 is controlled by EM1.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT32Bi_MAT1.
        };
        namespace pwmen1ValC{
            constexpr MPL::Value<pwmen1Val,pwmen1Val::em1> em1{};
            constexpr MPL::Value<pwmen1Val,pwmen1Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pwmen1Val> pwmen1{}; 
        ///PWM mode enable for channel2.
        enum class pwmen2Val {
            em2=0x00000000,     ///<CT32Bi_MAT2 is controlled by EM2.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT32Bi_MAT2.
        };
        namespace pwmen2ValC{
            constexpr MPL::Value<pwmen2Val,pwmen2Val::em2> em2{};
            constexpr MPL::Value<pwmen2Val,pwmen2Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pwmen2Val> pwmen2{}; 
        ///PWM mode enable for channel3.  Note: It is recommended to use match channel 3 to set the PWM cycle.
        enum class pwmen3Val {
            em3=0x00000000,     ///<CT32Bi_MAT3 is controlled by EM3.
            pwmModeIsEnabled=0x00000001,     ///<PWM mode is enabled for CT132Bi_MAT3.
        };
        namespace pwmen3ValC{
            constexpr MPL::Value<pwmen3Val,pwmen3Val::em3> em3{};
            constexpr MPL::Value<pwmen3Val,pwmen3Val::pwmModeIsEnabled> pwmModeIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pwmen3Val> pwmen3{}; 
    }
}
