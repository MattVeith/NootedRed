// Copyright © 2022-2024 ChefKiss. Licensed under the Thou Shalt Not Profit License version 1.5.
// See LICENSE for details.

#pragma once
#include <Headers/kern_util.hpp>

using t_GenericConstructor = void (*)(void *that);

constexpr UInt32 AMDGPU_FAMILY_RAVEN = 0x8E;

constexpr UInt32 AMDGPU_MAX_USEC_TIMEOUT = 100000;

//-------- IP Bases --------//

constexpr UInt32 NBIO_BASE_2 = 0xD20;
constexpr UInt32 GC_BASE_0 = 0x2000;
constexpr UInt32 MP_BASE = 0x16000;
constexpr UInt32 MP1_Public = 0x3B00000;
constexpr UInt32 SMUIO_BASE = 0x16800;

//-------- Generic Registers --------//

constexpr UInt32 mmPCIE_INDEX2 = 0xE;
constexpr UInt32 mmPCIE_DATA2 = 0xF;

//-------- NBIO Registers --------//

constexpr UInt32 mmRCC_DEV0_EPF0_STRAP0 = 0xF;
constexpr UInt8 RCC_DEV0_EPF0_STRAP0_ATI_REV_ID_SHIFT = 0x18;
constexpr UInt32 RCC_DEV0_EPF0_STRAP0_ATI_REV_ID_MASK = 0xF000000;

//-------- SMU Registers --------//

constexpr UInt32 mmMP0_SMN_C2PMSG_33 = 0x61;
constexpr UInt32 mmMP0_SMN_C2PMSG_58 = 0x7A;
constexpr UInt32 mmMP0_SMN_C2PMSG_59 = 0x7B;
constexpr UInt32 mmMP0_SMN_C2PMSG_64 = 0x80;
constexpr UInt32 mmMP0_SMN_C2PMSG_91 = 0x9B;
constexpr UInt32 mmMP1_SMN_C2PMSG_66 = 0x282;
constexpr UInt32 mmMP1_SMN_C2PMSG_82 = 0x292;
constexpr UInt32 mmMP1_SMN_C2PMSG_90 = 0x29A;
constexpr UInt32 mmMP1_SMN_FPS_CNT = 0x2C4;
constexpr UInt32 smnMP1_FIRMWARE_FLAGS = 0x3010024;
constexpr UInt32 smnMP1_FIRMWARE_FLAGS_INTERRUPTS_ENABLED = 0x1;

//-------- SMU Messages --------//

constexpr UInt32 PPSMC_MSG_PowerUpGfx = 0x6;
constexpr UInt32 PPSMC_MSG_PowerUpSdma = 0xE;
constexpr UInt32 PPSMC_MSG_DeviceDriverReset = 0x1E;
constexpr UInt32 PPSMC_MSG_SoftReset = 0x2E;
constexpr UInt32 PPSMC_MSG_PowerGateMmHub = 0x35;
constexpr UInt32 PPSMC_MSG_ForceGfxContentSave = 0x39;
constexpr UInt32 PPSMC_MSG_PowerGateAtHub = 0x3D;

//-------- GC Registers --------//

constexpr UInt32 mmMC_VM_FB_OFFSET = 0x96b;
constexpr UInt32 mmDB_DEBUG2 = 0x60D;
constexpr UInt32 mmDB_DEBUG2_BASE_IDX = 0;
constexpr UInt32 mmDB_DEBUG3 = 0x60E;
constexpr UInt32 mmDB_DEBUG3_BASE_IDX = 0;
constexpr UInt32 mmGB_GPU_ID = 0x640;
constexpr UInt32 mmGB_GPU_ID_BASE_IDX = 0;
constexpr UInt32 mmPA_SC_BINNER_EVENT_CNTL_3 = 0x2CF;
constexpr UInt32 mmPA_SC_BINNER_EVENT_CNTL_3_BASE_IDX = 0;
constexpr UInt32 mmPA_CL_GB_HORZ_CLIP_ADJ = 0x2FC;
constexpr UInt32 mmPA_CL_GB_HORZ_CLIP_ADJ_BASE_IDX = 1;
constexpr UInt32 mmPA_SC_LINE_STIPPLE_STATE = 0x2281;
constexpr UInt32 mmPA_SC_LINE_STIPPLE_STATE_BASE_IDX = 1;
constexpr UInt32 mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3 = 0x30D;
constexpr UInt32 mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3_BASE_IDX = 1;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_CU_0 = 0x11DC;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_CU_0_BASE_IDX = 0;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_CU_1 = 0x11DD;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_CU_1_BASE_IDX = 0;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_EN_CU_0 = 0x11E6;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_EN_CU_0_BASE_IDX = 0;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_EN_CU_1 = 0x11E7;
constexpr UInt32 mmSPI_RESOURCE_RESERVE_EN_CU_1_BASE_IDX = 0;
constexpr UInt32 mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3 = 0x301;
constexpr UInt32 mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3_BASE_IDX = 1;
constexpr UInt32 mmTA_CNTL_AUX = 0x542;
constexpr UInt32 mmTA_CNTL_AUX_BASE_IDX = 0;
constexpr UInt32 mmVGT_GS_MAX_WAVE_ID = 0x269;
constexpr UInt32 mmVGT_GS_MAX_WAVE_ID_BASE_IDX = 0;
constexpr UInt32 mmCB_HW_CONTROL = 0x680;
constexpr UInt32 mmCB_HW_CONTROL_BASE_IDX = 0;
constexpr UInt32 mmCB_HW_CONTROL_3 = 0x683;
constexpr UInt32 mmCB_HW_CONTROL_3_BASE_IDX = 0;
constexpr UInt32 mmCPC_UTCL1_CNTL = 0x103D;
constexpr UInt32 mmCPC_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 mmCPF_UTCL1_CNTL = 0x103E;
constexpr UInt32 mmCPF_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 mmCPG_UTCL1_CNTL = 0x103C;
constexpr UInt32 mmCPG_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 mmGB_ADDR_CONFIG = 0x63E;
constexpr UInt32 mmGB_ADDR_CONFIG_BASE_IDX = 0;
constexpr UInt32 mmGB_ADDR_CONFIG_READ = 0x642;
constexpr UInt32 mmGB_ADDR_CONFIG_READ_BASE_IDX = 0;
constexpr UInt32 mmIA_UTCL1_CNTL = 0x246;
constexpr UInt32 mmIA_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 mmPA_CL_GB_HORZ_DISC_ADJ = 0x2FD;
constexpr UInt32 mmPA_CL_GB_HORZ_DISC_ADJ_BASE_IDX = 1;
constexpr UInt32 mmPA_SC_MODE_CNTL_1 = 0x293;
constexpr UInt32 mmPA_SC_MODE_CNTL_1_BASE_IDX = 1;
constexpr UInt32 mmRLC_GPM_UTCL1_CNTL_0 = 0x4CB2;
constexpr UInt32 mmRLC_GPM_UTCL1_CNTL_0_BASE_IDX = 1;
constexpr UInt32 mmRLC_GPM_UTCL1_CNTL_1 = 0x4CB3;
constexpr UInt32 mmRLC_GPM_UTCL1_CNTL_1_BASE_IDX = 1;
constexpr UInt32 mmRLC_GPM_UTCL1_CNTL_2 = 0x4CB4;
constexpr UInt32 mmRLC_GPM_UTCL1_CNTL_2_BASE_IDX = 1;
constexpr UInt32 mmRLC_PREWALKER_UTCL1_CNTL = 0x4CCD;
constexpr UInt32 mmRLC_PREWALKER_UTCL1_CNTL_BASE_IDX = 1;
constexpr UInt32 mmRLC_SPM_UTCL1_CNTL = 0x4CB5;
constexpr UInt32 mmRLC_SPM_UTCL1_CNTL_BASE_IDX = 1;
constexpr UInt32 mmRMI_UTCL1_CNTL2 = 0x78C;
constexpr UInt32 mmRMI_UTCL1_CNTL2_BASE_IDX = 0;
constexpr UInt32 mmTCP_CHAN_STEER_HI = 0xB04;
constexpr UInt32 mmTCP_CHAN_STEER_HI_BASE_IDX = 0;
constexpr UInt32 mmTCP_CHAN_STEER_LO = 0xB03;
constexpr UInt32 mmTCP_CHAN_STEER_LO_BASE_IDX = 0;
constexpr UInt32 mmTD_CNTL = 0x525;
constexpr UInt32 mmTD_CNTL_BASE_IDX = 0;
constexpr UInt32 mmVGT_CACHE_INVALIDATION = 0x231;
constexpr UInt32 mmVGT_CACHE_INVALIDATION_BASE_IDX = 0;
constexpr UInt32 mmWD_UTCL1_CNTL = 0x243;
constexpr UInt32 mmWD_UTCL1_CNTL_BASE_IDX = 0;
constexpr UInt32 mmCB_DCC_CONFIG = 0x688;
constexpr UInt32 mmCB_DCC_CONFIG_BASE_IDX = 0;
constexpr UInt32 mmCB_HW_CONTROL_2 = 0x682;
constexpr UInt32 mmCB_HW_CONTROL_2_BASE_IDX = 0;
constexpr UInt32 mmGCEA_SDP_BACKDOOR_DATACREDITS0 = 0x711;
constexpr UInt32 mmGCEA_SDP_BACKDOOR_DATACREDITS0_BASE_IDX = 0;

//-------- SDMA0 Registers --------//

constexpr UInt32 mmSDMA0_CHICKEN_BITS = 0x1D;
constexpr UInt32 mmSDMA0_CHICKEN_BITS_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_CLK_CTRL = 0x1B;
constexpr UInt32 mmSDMA0_CLK_CTRL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_GFX_IB_CNTL = 0x8A;
constexpr UInt32 mmSDMA0_GFX_IB_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_GFX_RB_WPTR_POLL_CNTL = 0x87;
constexpr UInt32 mmSDMA0_GFX_RB_WPTR_POLL_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_POWER_CNTL = 0x1A;
constexpr UInt32 mmSDMA0_POWER_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_RLC0_IB_CNTL = 0x14A;
constexpr UInt32 mmSDMA0_RLC0_IB_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_RLC0_RB_WPTR_POLL_CNTL = 0x147;
constexpr UInt32 mmSDMA0_RLC0_RB_WPTR_POLL_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_RLC1_IB_CNTL = 0x1AA;
constexpr UInt32 mmSDMA0_RLC1_IB_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_RLC1_RB_WPTR_POLL_CNTL = 0x1A7;
constexpr UInt32 mmSDMA0_RLC1_RB_WPTR_POLL_CNTL_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_UTCL1_PAGE = 0x48;
constexpr UInt32 mmSDMA0_UTCL1_PAGE_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_GB_ADDR_CONFIG = 0x1E;
constexpr UInt32 mmSDMA0_GB_ADDR_CONFIG_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_GB_ADDR_CONFIG_READ = 0x1F;
constexpr UInt32 mmSDMA0_GB_ADDR_CONFIG_READ_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_GFX_MINOR_PTR_UPDATE = 0xB5;
constexpr UInt32 mmSDMA0_GFX_MINOR_PTR_UPDATE_BASE_IDX = 0;
constexpr UInt32 mmSDMA0_UTCL1_WATERMK = 0x3D;
constexpr UInt32 mmSDMA0_UTCL1_WATERMK_BASE_IDX = 0;

//-------- DCN1 Registers --------//

constexpr UInt32 mmHUBP0_DCSURF_SURFACE_CONFIG = 0x559;
constexpr UInt32 mmHUBP0_DCSURF_ADDR_CONFIG = 0x55A;
constexpr UInt32 mmHUBP0_DCSURF_TILING_CONFIG = 0x55B;
constexpr UInt32 mmHUBP0_DCSURF_PRI_VIEWPORT_START = 0x55C;
constexpr UInt32 mmHUBP0_DCSURF_PRI_VIEWPORT_DIMENSION = 0x55D;
constexpr UInt32 mmHUBP1_DCSURF_SURFACE_CONFIG = 0x61D;
constexpr UInt32 mmHUBP1_DCSURF_ADDR_CONFIG = 0x61E;
constexpr UInt32 mmHUBP1_DCSURF_TILING_CONFIG = 0x61F;
constexpr UInt32 mmHUBP1_DCSURF_PRI_VIEWPORT_START = 0x620;
constexpr UInt32 mmHUBP1_DCSURF_PRI_VIEWPORT_DIMENSION = 0x621;
constexpr UInt32 mmHUBP2_DCSURF_SURFACE_CONFIG = 0x6E1;
constexpr UInt32 mmHUBP2_DCSURF_ADDR_CONFIG = 0x6E2;
constexpr UInt32 mmHUBP2_DCSURF_TILING_CONFIG = 0x6E3;
constexpr UInt32 mmHUBP2_DCSURF_PRI_VIEWPORT_START = 0x6E4;
constexpr UInt32 mmHUBP2_DCSURF_PRI_VIEWPORT_DIMENSION = 0x6E5;
constexpr UInt32 mmHUBP3_DCSURF_SURFACE_CONFIG = 0x7A5;
constexpr UInt32 mmHUBP3_DCSURF_ADDR_CONFIG = 0x7A6;
constexpr UInt32 mmHUBP3_DCSURF_TILING_CONFIG = 0x7A7;
constexpr UInt32 mmHUBP3_DCSURF_PRI_VIEWPORT_START = 0x7A8;
constexpr UInt32 mmHUBP3_DCSURF_PRI_VIEWPORT_DIMENSION = 0x7A9;

constexpr UInt32 mmHUBPREQ0_DCSURF_SURFACE_PITCH = 0x57B;
constexpr UInt32 mmHUBPREQ0_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x57D;
constexpr UInt32 mmHUBPREQ0_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x57E;
constexpr UInt32 mmHUBPREQ0_DCSURF_FLIP_CONTROL = 0x58E;
constexpr UInt32 mmHUBPREQ0_DCSURF_SURFACE_EARLIEST_INUSE = 0x597;
constexpr UInt32 mmHUBPREQ0_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x598;
constexpr UInt32 mmHUBPREQ1_DCSURF_SURFACE_PITCH = 0x63F;
constexpr UInt32 mmHUBPREQ1_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x641;
constexpr UInt32 mmHUBPREQ1_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x642;
constexpr UInt32 mmHUBPREQ1_DCSURF_FLIP_CONTROL = 0x652;
constexpr UInt32 mmHUBPREQ1_DCSURF_SURFACE_EARLIEST_INUSE = 0x65B;
constexpr UInt32 mmHUBPREQ1_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x65C;
constexpr UInt32 mmHUBPREQ2_DCSURF_SURFACE_PITCH = 0x703;
constexpr UInt32 mmHUBPREQ2_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x705;
constexpr UInt32 mmHUBPREQ2_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x706;
constexpr UInt32 mmHUBPREQ2_DCSURF_FLIP_CONTROL = 0x716;
constexpr UInt32 mmHUBPREQ2_DCSURF_SURFACE_EARLIEST_INUSE = 0x71F;
constexpr UInt32 mmHUBPREQ2_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x720;
constexpr UInt32 mmHUBPREQ3_DCSURF_SURFACE_PITCH = 0x7C7;
constexpr UInt32 mmHUBPREQ3_DCSURF_PRIMARY_SURFACE_ADDRESS = 0x7C9;
constexpr UInt32 mmHUBPREQ3_DCSURF_PRIMARY_SURFACE_ADDRESS_HIGH = 0x7CA;
constexpr UInt32 mmHUBPREQ3_DCSURF_FLIP_CONTROL = 0x7DA;
constexpr UInt32 mmHUBPREQ3_DCSURF_SURFACE_EARLIEST_INUSE = 0x7E3;
constexpr UInt32 mmHUBPREQ3_DCSURF_SURFACE_EARLIEST_INUSE_HIGH = 0x7E4;

constexpr UInt32 mmHUBPRET0_HUBPRET_CONTROL = 0x5E0;
constexpr UInt32 mmHUBPRET1_HUBPRET_CONTROL = 0x6A4;
constexpr UInt32 mmHUBPRET2_HUBPRET_CONTROL = 0x768;
constexpr UInt32 mmHUBPRET3_HUBPRET_CONTROL = 0x82C;

constexpr UInt32 mmOTG0_OTG_CONTROL = 0x1B41;
constexpr UInt32 mmOTG0_OTG_INTERLACE_CONTROL = 0x1B44;
constexpr UInt32 mmOTG1_OTG_CONTROL = 0x1BC1;
constexpr UInt32 mmOTG1_OTG_INTERLACE_CONTROL = 0x1BC4;
constexpr UInt32 mmOTG2_OTG_CONTROL = 0x1C41;
constexpr UInt32 mmOTG2_OTG_INTERLACE_CONTROL = 0x1C44;
constexpr UInt32 mmOTG3_OTG_CONTROL = 0x1CC1;
constexpr UInt32 mmOTG3_OTG_INTERLACE_CONTROL = 0x1CC4;
constexpr UInt32 mmOTG4_OTG_CONTROL = 0x1D41;
constexpr UInt32 mmOTG4_OTG_INTERLACE_CONTROL = 0x1D44;
constexpr UInt32 mmOTG5_OTG_CONTROL = 0x1DC1;
constexpr UInt32 mmOTG5_OTG_INTERLACE_CONTROL = 0x1DC4;

//-------- DCN2 Registers --------//

constexpr UInt32 mmIH_CLK_CTRL = 0x117B;
constexpr UInt32 mmIH_IH_BUFFER_MEM_CLK_SOFT_OVERRIDE_SHIFT = 0x1A;
constexpr UInt32 mmIH_DBUS_MUX_CLK_SOFT_OVERRIDE_SHIFT = 0x1B;
constexpr UInt32 mmIH_CHICKEN = 0x122C;
constexpr UInt32 mmIH_MC_SPACE_GPA_ENABLE = 0x10;

//-------- SMUIO Registers --------//

constexpr UInt32 mmROM_INDEX = 0x28;
constexpr UInt32 mmROM_DATA = 0x29;

//-------- AMD Catalyst Data Types --------//

struct CAILAsicCapsEntry {
    UInt32 familyId, deviceId;
    UInt32 revision, extRevision;
    UInt32 pciRevision;
    UInt32 _reserved;
    const UInt32 *caps;
    const UInt32 *skeleton;
} PACKED;

struct CAILAsicCapsInitEntry {
    UInt64 familyId, deviceId;
    UInt64 revision, extRevision;
    UInt64 pciRevision;
    const UInt32 *caps;
    const void *goldenCaps;
} PACKED;

enum CAILResult : UInt32 {
    kCAILResultSuccess = 0,
    kCAILResultInvalidArgument,
    kCAILResultFailed,
    kCAILResultUninitialised,
    kCAILResultUnsupported,
};

struct CAILDeviceTypeEntry {
    UInt32 deviceId, deviceType;
} PACKED;

struct CAILIPGoldenRegister {
    const UInt32 regOffset;
    const UInt32 segment;
    const UInt32 andMask;
    const UInt32 orMask;
} PACKED;

#define GOLDEN_REGISTER(reg, and, or) \
    { .regOffset = reg, .segment = reg##_BASE_IDX, .andMask = and, .orMask = or }
#define GOLDEN_REGISTER_TERMINATOR \
    { .regOffset = 0xFFFFFFFF, .segment = 0xFFFFFFFF, .andMask = 0xFFFFFFFF, .orMask = 0xFFFFFFFF }

enum CAILIPType : UInt32 {
    kCAILIPTypeUnknown = 0,
    kCAILIPTypeGC = 11,
    kCAILIPTypeSDMA0 = 35,
    kCAILIPTypeSDMA1,
};

struct CAILASICGoldenRegisters {
    const CAILIPType ipType;
    const UInt32 instance;    // Not sure about that one.
    const CAILIPGoldenRegister *entries;
} PACKED;

#define GOLDEN_REGISTERS(type, inst, ents) \
    { .ipType = kCAILIPType##type, .instance = inst, .entries = ents }

#define GOLDEN_REGISTERS_TERMINATOR \
    { .ipType = kCAILIPTypeUnknown, .instance = 0, .entries = nullptr }

struct CAILASICGoldenSettings {
    // Golden settings for GPUs emulated using the Cadence Palladium Emulation platform. We don't care.
    const CAILASICGoldenRegisters *palladiumGoldenSettings;
    const CAILASICGoldenRegisters *goldenSettings;
} PACKED;

struct DeviceCapabilityEntry {
    UInt64 familyId, extRevision;
    UInt64 deviceId, revision, enumRevision;
    const void *swipInfo, *swipInfoMinimal;
    const UInt32 *devAttrFlags;
    CAILASICGoldenSettings *asicGoldenSettings;
    void *doorbellRange;
} PACKED;

enum AMDPSPCommand : UInt32 {
    kPSPCommandLoadTA = 1,
    kPSPCommandLoadASD = 4,
    kPSPCommandLoadIPFW = 6,
};

enum AMDSMUFWResponse : UInt32 {
    kSMUFWResponseNoResponse = 0,
    kSMUFWResponseSuccess = 1,
    kSMUFWResponseRejectedBusy = 0xFC,
    kSMUFWResponseRejectedPrereq = 0xFD,
    kSMUFWResponseUnknownCommand = 0xFE,
    kSMUFWResponseFailed = 0xFF,
};

inline CAILResult processSMUFWResponse(const UInt32 value) {
    switch (value) {
        case kSMUFWResponseNoResponse:
            return kCAILResultUninitialised;
        case kSMUFWResponseSuccess:
            return kCAILResultSuccess;
        case kSMUFWResponseRejectedBusy:
            DBGLOG("AMDCommon", "SMU FW command rejected; SMU is busy");
            return kCAILResultFailed;
        case kSMUFWResponseRejectedPrereq:
            DBGLOG("AMDCommon", "SMU FW command rejected; prequisite was not satisfied");
            return kCAILResultFailed;
        case kSMUFWResponseUnknownCommand:
            DBGLOG("AMDCommon", "Unknown SMU FW command");
            return kCAILResultUnsupported;
        case kSMUFWResponseFailed:
            DBGLOG("AMDCommon", "SMU FW command failed");
            return kCAILResultFailed;
        default:
            SYSLOG("AMDCommon", "Unknown SMU FW response %d", value);
            return kCAILResultFailed;
    }
}

enum AMDUCodeID : UInt32 {
    kUCodeCE = 2,
    kUCodePFP,
    kUCodeME,
    kUCodeMEC1JT,
    kUCodeMEC2JT,
    kUCodeMEC1,
    kUCodeMEC2,
    kUCodeRLC = 11,
    kUCodeSDMA0,
    kUCodeDMCUERAM = 19,
    kUCodeDMCUISR,
    kUCodeRLCV = 21,
    kUCodeRLCSRListGPM = 23,
    kUCodeRLCSRListSRM,
    kUCodeRLCSRListCntl,
    kUCodeDMCUB = 35,
};

enum VideoMemoryType : UInt32 {
    kVideoMemoryTypeUnknown,
    kVideoMemoryTypeDDR2,
    kVideoMemoryTypeDDR3 = 3,
    kVideoMemoryTypeDDR4,
};

struct CosReadConfigurationSettingInput {
    const char *settingName;
    UInt32 settingType;
    UInt32 outLen;
    void *outPtr;
};

struct CosReadConfigurationSettingOutput {
    UInt32 settingLen;
};

//-------- AMD Catalyst Constants --------//

constexpr UInt64 DEVICE_CAP_ENTRY_REV_DONT_CARE = 0xDEADCAFE;

constexpr UInt32 PP_RESULT_OK = 1;

static const UInt32 ddiCapsRaven[16] = {0x800005, 0x500011FE, 0x80000, 0x11001000, 0x200, 0x68000001, 0x20000000,
    0x4002, 0x22420001, 0x9E20E10, 0x2000120, 0x0, 0x0, 0x0, 0x0, 0x0};
static const UInt32 ddiCapsRenoir[16] = {0x800005, 0x500011FE, 0x80000, 0x11001000, 0x200, 0x68000001, 0x20000000,
    0x4002, 0x22420001, 0x9E20E18, 0x2000120, 0x0, 0x0, 0x0, 0x0, 0x0};

static const UInt32 ravenDevAttrFlags = 0x49;

constexpr UInt32 ATOMBIOS_IMAGE_SIZE = 0x10000;

//-------- Display Core Constants --------//

constexpr UInt32 DC_SIGNAL_TYPE_LVDS = 0x8;
constexpr UInt32 DC_SIGNAL_TYPE_EDP = 0x80;

constexpr UInt8 DC_DPCD_EXT_CAPS_OLED = 0x10;

//---- Golden Settings ----//

static const CAILIPGoldenRegister gcGoldenSettingsRaven[] = {
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmDB_DEBUG3, 0x80000000, 0x80000000),
    GOLDEN_REGISTER(mmGB_GPU_ID, 0xF, 0x0),
    GOLDEN_REGISTER(mmPA_SC_BINNER_EVENT_CNTL_3, 0x3, 0x82400024),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_CLIP_ADJ, 0x3FFFFFFF, 0x1),
    GOLDEN_REGISTER(mmPA_SC_LINE_STIPPLE_STATE, 0xFF0F, 0x0),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3, 0x3019, 0x1000),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_0, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_1, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_0, 0x1FFFFFF, 0xFFFF87),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_1, 0x1FFFFFF, 0xFFFF8F),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3, 0x7FFFFFF, 0x20A2000),
    GOLDEN_REGISTER(mmTA_CNTL_AUX, 0xFFFFFEEF, 0x10B0000),
    GOLDEN_REGISTER(mmVGT_GS_MAX_WAVE_ID, 0xFFF, 0xFF),
    GOLDEN_REGISTER(mmCB_HW_CONTROL, 0xFFFDF3CF, 0x12107),
    GOLDEN_REGISTER(mmCB_HW_CONTROL_3, 0x30000000, 0x10000000),
    GOLDEN_REGISTER(mmCPC_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmCPF_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmCPG_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG_READ, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmIA_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_DISC_ADJ, 0xFFFFFFFF, 0x4048000),
    GOLDEN_REGISTER(mmPA_SC_MODE_CNTL_1, 0x6000000, 0x6000000),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_0, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_1, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_2, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_PREWALKER_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_SPM_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRMI_UTCL1_CNTL2, 0x30000, 0x20000),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_HI, 0xFFFFFFFF, 0x0),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_LO, 0xFFFFFFFF, 0x3210),
    GOLDEN_REGISTER(mmTD_CNTL, 0x1BD9F33, 0x800),
    GOLDEN_REGISTER(mmVGT_CACHE_INVALIDATION, 0x3FFF3AF3, 0x19200000),
    GOLDEN_REGISTER(mmWD_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILIPGoldenRegister gcGoldenSettingsRaven2[] = {
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmDB_DEBUG3, 0x80000000, 0x80000000),
    GOLDEN_REGISTER(mmGB_GPU_ID, 0xF, 0x0),
    GOLDEN_REGISTER(mmPA_SC_BINNER_EVENT_CNTL_3, 0x3, 0x82400024),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_CLIP_ADJ, 0x3FFFFFFF, 0x1),
    GOLDEN_REGISTER(mmPA_SC_LINE_STIPPLE_STATE, 0xFF0F, 0x0),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3, 0x3019, 0x1000),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_0, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_1, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_0, 0x1FFFFFF, 0xFFFF87),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_1, 0x1FFFFFF, 0xFFFF8F),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3, 0x7FFFFFF, 0x20A2000),
    GOLDEN_REGISTER(mmTA_CNTL_AUX, 0xFFFFFEEF, 0x10B0000),
    GOLDEN_REGISTER(mmVGT_GS_MAX_WAVE_ID, 0xFFF, 0xFF),
    GOLDEN_REGISTER(mmCB_DCC_CONFIG, 0xFF7FFFFF, 0x4000000),
    GOLDEN_REGISTER(mmCB_HW_CONTROL, 0xFFFDF3CF, 0x14104),
    GOLDEN_REGISTER(mmCB_HW_CONTROL_2, 0xFF7FFFFF, 0xA000000),
    GOLDEN_REGISTER(mmCPC_UTCL1_CNTL, 0x7F0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmCPF_UTCL1_CNTL, 0xFF8FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmCPG_UTCL1_CNTL, 0x7F8FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG, 0xFFFF77FF, 0x26013041),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG_READ, 0xFFFF77FF, 0x26013041),
    GOLDEN_REGISTER(mmIA_UTCL1_CNTL, 0x3F8FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_DISC_ADJ, 0xFFFFFFFF, 0x4040000),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_0, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_1, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_2, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_PREWALKER_UTCL1_CNTL, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_SPM_UTCL1_CNTL, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_HI, 0xFFFFFFFF, 0x0),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_LO, 0xFFFFFFFF, 0x10),
    GOLDEN_REGISTER(mmTD_CNTL, 0x1BD9F33, 0x1000000),
    GOLDEN_REGISTER(mmWD_UTCL1_CNTL, 0x3F8FFFFF, 0x8000080),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILIPGoldenRegister gcGoldenSettingsRenoir[] = {
    GOLDEN_REGISTER(mmCB_HW_CONTROL, 0xFFFDF3CF, 0x14104),
    GOLDEN_REGISTER(mmCB_HW_CONTROL_2, 0xFF7FFFFF, 0xA000000),
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG_READ, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_CLIP_ADJ, 0x3FFFFFFF, 0x1),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_DISC_ADJ, 0xFFFFFFFF, 0x4040000),
    GOLDEN_REGISTER(mmPA_SC_LINE_STIPPLE_STATE, 0xFF0F, 0x0),
    GOLDEN_REGISTER(mmTA_CNTL_AUX, 0xFFFFFEEF, 0x10B0000),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_HI, 0xFFFFFFFF, 0x0),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_LO, 0xFFFFFFFF, 0x3120),
    GOLDEN_REGISTER(mmGCEA_SDP_BACKDOOR_DATACREDITS0, 0xFFFFFFFF, 0xCCCC),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILIPGoldenRegister sdmaGoldenSettingsRaven[] = {
    GOLDEN_REGISTER(mmSDMA0_CHICKEN_BITS, 0xFE931F07, 0x2831D07),
    GOLDEN_REGISTER(mmSDMA0_CLK_CTRL, 0xFFFFFFFF, 0x3F000100),
    GOLDEN_REGISTER(mmSDMA0_GFX_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_GFX_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_POWER_CNTL, 0xFC3FFFFF, 0x40000051),
    GOLDEN_REGISTER(mmSDMA0_RLC0_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC0_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_RLC1_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC1_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_PAGE, 0x3FF, 0x3C0),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG_READ, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GFX_MINOR_PTR_UPDATE, 0x1, 0x1),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILIPGoldenRegister sdmaGoldenSettingsRaven2[] = {
    GOLDEN_REGISTER(mmSDMA0_CHICKEN_BITS, 0xFE931F07, 0x2831D07),
    GOLDEN_REGISTER(mmSDMA0_CLK_CTRL, 0xFFFFFFFF, 0x3F000100),
    GOLDEN_REGISTER(mmSDMA0_GFX_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_GFX_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_POWER_CNTL, 0xFC3FFFFF, 0x40000051),
    GOLDEN_REGISTER(mmSDMA0_RLC0_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC0_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_RLC1_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC1_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_PAGE, 0x3FF, 0x3C0),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG, 0x18773F, 0x3001),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG_READ, 0x18773F, 0x3001),
    GOLDEN_REGISTER(mmSDMA0_GFX_MINOR_PTR_UPDATE, 0x1, 0x1),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILIPGoldenRegister sdmaGoldenSettingsRenoir[] = {
    GOLDEN_REGISTER(mmSDMA0_CHICKEN_BITS, 0xFE931F07, 0x2831F07),
    GOLDEN_REGISTER(mmSDMA0_CLK_CTRL, 0xFFFFFFFF, 0x3F000100),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG_READ, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GFX_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_POWER_CNTL, 0x3FFF07, 0x40000051),
    GOLDEN_REGISTER(mmSDMA0_RLC0_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_RLC1_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_PAGE, 0x3FF, 0x3C0),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_WATERMK, 0xFC000000, 0x3FBE1FE),
    GOLDEN_REGISTER(mmSDMA0_GFX_MINOR_PTR_UPDATE, 0x1, 0x1),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILASICGoldenRegisters goldenSettingsRaven[] = {
    GOLDEN_REGISTERS(GC, 0, gcGoldenSettingsRaven),
    GOLDEN_REGISTERS(SDMA0, 0, sdmaGoldenSettingsRaven),
    GOLDEN_REGISTERS_TERMINATOR,
};

static const CAILASICGoldenRegisters goldenSettingsRaven2[] = {
    GOLDEN_REGISTERS(GC, 0, gcGoldenSettingsRaven2),
    GOLDEN_REGISTERS(SDMA0, 0, sdmaGoldenSettingsRaven2),
    GOLDEN_REGISTERS_TERMINATOR,
};

static const CAILASICGoldenRegisters goldenSettingsRenoir[] = {
    GOLDEN_REGISTERS(GC, 0, gcGoldenSettingsRenoir),
    GOLDEN_REGISTERS(SDMA0, 0, sdmaGoldenSettingsRenoir),
    GOLDEN_REGISTERS_TERMINATOR,
};

//-------- Linux Firmware Structures --------//

struct CommonFirmwareHeader {
    UInt32 size;
    UInt32 headerSize;
    UInt16 headerMajor;
    UInt16 headerMinor;
    UInt16 ipMajor;
    UInt16 ipMinor;
    UInt32 ucodeVer;
    UInt32 ucodeSize;
    UInt32 ucodeOff;
    UInt32 crc32;
} PACKED;

struct GPUInfoFirmware {
    UInt32 gcNumSe;
    UInt32 gcNumCuPerSh;
    UInt32 gcNumShPerSe;
    UInt32 gcNumRbPerSe;
    UInt32 gcNumTccs;
    UInt32 gcNumGprs;
    UInt32 gcNumMaxGsThds;
    UInt32 gcGsTableDepth;
    UInt32 gcGsPrimBuffDepth;
    UInt32 gcParameterCacheDepth;
    UInt32 gcDoubleOffchipLdsBuffer;
    UInt32 gcWaveSize;
    UInt32 gcMaxWavesPerSimd;
    UInt32 gcMaxScratchSlotsPerCu;
    UInt32 gcLdsSize;
} PACKED;

//-------- AddrLib Data Types --------//

struct Gfx9ChipSettings {
    UInt32 isArcticIsland : 1;
    UInt32 isVega10 : 1;
    UInt32 isRaven : 1;
    UInt32 isVega12 : 1;
    UInt32 isVega20 : 1;
    UInt32 reserved0 : 27;
    UInt32 isDce12 : 1;
    UInt32 isDcn1 : 1;
    UInt32 reserved1 : 30;
    UInt32 metaBaseAlignFix : 1;
    UInt32 depthPipeXorDisable : 1;
    UInt32 htileAlignFix : 1;
    UInt32 applyAliasFix : 1;
    UInt32 htileCacheRbConflict : 1;
    UInt32 reserved2 : 27;
};

//-------- AddrLib Constants --------//

constexpr UInt32 ADDR_CHIP_FAMILY_AI = 8;

constexpr UInt32 Dcn1NonBpp64SwModeMask = 0x2220221;
constexpr UInt32 Dcn1Bpp64SwModeMask = 0x6660661;
constexpr UInt32 Dcn2NonBpp64SwModeMask = 0x2020201;
constexpr UInt32 Dcn2Bpp64SwModeMask = 0x6060601;

constexpr UInt32 Dcn1NonBpp64SwModeMask1015 = 0x22222221;
constexpr UInt32 Dcn1Bpp64SwModeMask1015 = 0x66666661;
constexpr UInt32 Dcn2NonBpp64SwModeMask1015 = 0x22022201;
constexpr UInt32 Dcn2Bpp64SwModeMask1015 = 0x66066601;
