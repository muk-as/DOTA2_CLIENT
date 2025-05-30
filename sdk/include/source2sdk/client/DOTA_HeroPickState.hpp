#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 63
        // Alignment: 4
        // Size: 0x4
        enum class DOTA_HeroPickState : std::uint32_t
        {
            DOTA_HEROPICK_STATE_NONE = 0x0,
            DOTA_HEROPICK_STATE_AP_SELECT = 0x1,
            DOTA_HEROPICK_STATE_SD_SELECT = 0x2,
            DOTA_HEROPICK_STATE_INTRO_SELECT_UNUSED = 0x3,
            DOTA_HEROPICK_STATE_RD_SELECT_UNUSED = 0x4,
            DOTA_HEROPICK_STATE_CM_INTRO = 0x5,
            DOTA_HEROPICK_STATE_CM_CAPTAINPICK = 0x6,
            DOTA_HEROPICK_STATE_CM_BAN1 = 0x7,
            DOTA_HEROPICK_STATE_CM_BAN2 = 0x8,
            DOTA_HEROPICK_STATE_CM_BAN3 = 0x9,
            DOTA_HEROPICK_STATE_CM_BAN4 = 0xa,
            DOTA_HEROPICK_STATE_CM_BAN5 = 0xb,
            DOTA_HEROPICK_STATE_CM_BAN6 = 0xc,
            DOTA_HEROPICK_STATE_CM_BAN7 = 0xd,
            DOTA_HEROPICK_STATE_CM_BAN8 = 0xe,
            DOTA_HEROPICK_STATE_CM_BAN9 = 0xf,
            DOTA_HEROPICK_STATE_CM_BAN10 = 0x10,
            DOTA_HEROPICK_STATE_CM_BAN11 = 0x11,
            DOTA_HEROPICK_STATE_CM_BAN12 = 0x12,
            DOTA_HEROPICK_STATE_CM_BAN13 = 0x13,
            DOTA_HEROPICK_STATE_CM_BAN14 = 0x14,
            DOTA_HEROPICK_STATE_CM_SELECT1 = 0x15,
            DOTA_HEROPICK_STATE_CM_SELECT2 = 0x16,
            DOTA_HEROPICK_STATE_CM_SELECT3 = 0x17,
            DOTA_HEROPICK_STATE_CM_SELECT4 = 0x18,
            DOTA_HEROPICK_STATE_CM_SELECT5 = 0x19,
            DOTA_HEROPICK_STATE_CM_SELECT6 = 0x1a,
            DOTA_HEROPICK_STATE_CM_SELECT7 = 0x1b,
            DOTA_HEROPICK_STATE_CM_SELECT8 = 0x1c,
            DOTA_HEROPICK_STATE_CM_SELECT9 = 0x1d,
            DOTA_HEROPICK_STATE_CM_SELECT10 = 0x1e,
            DOTA_HEROPICK_STATE_CM_PICK = 0x1f,
            DOTA_HEROPICK_STATE_AR_SELECT = 0x20,
            DOTA_HEROPICK_STATE_MO_SELECT = 0x21,
            DOTA_HEROPICK_STATE_FH_SELECT = 0x22,
            DOTA_HEROPICK_STATE_CD_INTRO = 0x23,
            DOTA_HEROPICK_STATE_CD_CAPTAINPICK = 0x24,
            DOTA_HEROPICK_STATE_CD_BAN1 = 0x25,
            DOTA_HEROPICK_STATE_CD_BAN2 = 0x26,
            DOTA_HEROPICK_STATE_CD_BAN3 = 0x27,
            DOTA_HEROPICK_STATE_CD_BAN4 = 0x28,
            DOTA_HEROPICK_STATE_CD_BAN5 = 0x29,
            DOTA_HEROPICK_STATE_CD_BAN6 = 0x2a,
            DOTA_HEROPICK_STATE_CD_SELECT1 = 0x2b,
            DOTA_HEROPICK_STATE_CD_SELECT2 = 0x2c,
            DOTA_HEROPICK_STATE_CD_SELECT3 = 0x2d,
            DOTA_HEROPICK_STATE_CD_SELECT4 = 0x2e,
            DOTA_HEROPICK_STATE_CD_SELECT5 = 0x2f,
            DOTA_HEROPICK_STATE_CD_SELECT6 = 0x30,
            DOTA_HEROPICK_STATE_CD_SELECT7 = 0x31,
            DOTA_HEROPICK_STATE_CD_SELECT8 = 0x32,
            DOTA_HEROPICK_STATE_CD_SELECT9 = 0x33,
            DOTA_HEROPICK_STATE_CD_SELECT10 = 0x34,
            DOTA_HEROPICK_STATE_CD_PICK = 0x35,
            DOTA_HEROPICK_STATE_BD_SELECT = 0x36,
            DOTA_HERO_PICK_STATE_ABILITY_DRAFT_SELECT = 0x37,
            DOTA_HERO_PICK_STATE_ARDM_SELECT = 0x38,
            DOTA_HEROPICK_STATE_ALL_DRAFT_SELECT = 0x39,
            DOTA_HERO_PICK_STATE_CUSTOMGAME_SELECT = 0x3a,
            DOTA_HEROPICK_STATE_SELECT_PENALTY = 0x3b,
            DOTA_HEROPICK_STATE_CUSTOM_PICK_RULES = 0x3c,
            DOTA_HEROPICK_STATE_SCENARIO_PICK = 0x3d,
            DOTA_HEROPICK_STATE_COUNT = 0x3e,
        };
    };
};
