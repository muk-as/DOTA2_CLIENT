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
        // Enumerator count: 109
        // Alignment: 4
        // Size: 0x_
        enum class DOTASlotType_t : std::uint32_t
        {
            DOTA_LOADOUT_TYPE_INVALID = 0xffffffff,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_WEAPON = 0x0,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_OFFHAND_WEAPON = 0x1,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_WEAPON2 = 0x2,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_OFFHAND_WEAPON2 = 0x3,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HEAD = 0x4,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_SHOULDER = 0x5,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ARMS = 0x6,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ARMOR = 0x7,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BELT = 0x8,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_NECK = 0x9,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BACK = 0xa,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_GLOVES = 0xb,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_LEGS = 0xc,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TAIL = 0xd,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MISC = 0xe,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_COSTUME = 0xf,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HERO_BASE = 0x10,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BODY_HEAD = 0x11,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MOUNT = 0x12,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_SUMMON = 0x13,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_SHAPESHIFT = 0x14,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TAUNT = 0x15,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HERO_EFFIGY = 0x16,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_AMBIENT_EFFECTS = 0x17,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_ATTACK = 0x18,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY1 = 0x19,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY2 = 0x1a,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY3 = 0x1b,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY4 = 0x1c,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_ULTIMATE = 0x1d,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_1 = 0x1e,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_2 = 0x1f,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_3 = 0x20,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_4 = 0x21,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_5 = 0x22,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_6 = 0x23,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_7 = 0x24,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_8 = 0x25,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_EFFECTS_9 = 0x26,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_VOICE = 0x27,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_WEAPON_PERSONA_1 = 0x28,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_OFFHAND_WEAPON_PERSONA_1 = 0x29,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_WEAPON2_PERSONA_1 = 0x2a,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_OFFHAND_WEAPON2_PERSONA_1 = 0x2b,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HEAD_PERSONA_1 = 0x2c,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_SHOULDER_PERSONA_1 = 0x2d,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ARMS_PERSONA_1 = 0x2e,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ARMOR_PERSONA_1 = 0x2f,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BELT_PERSONA_1 = 0x30,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_NECK_PERSONA_1 = 0x31,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BACK_PERSONA_1 = 0x32,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_LEGS_PERSONA_1 = 0x33,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_GLOVES_PERSONA_1 = 0x34,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TAIL_PERSONA_1 = 0x35,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MISC_PERSONA_1 = 0x36,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BODY_HEAD_PERSONA_1 = 0x37,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MOUNT_PERSONA_1 = 0x38,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_SUMMON_PERSONA_1 = 0x39,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_SHAPESHIFT_PERSONA_1 = 0x3a,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TAUNT_PERSONA_1 = 0x3b,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HERO_EFFIGY_PERSONA_1 = 0x3c,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_AMBIENT_EFFECTS_PERSONA_1 = 0x3d,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_ATTACK_PERSONA_1 = 0x3e,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY1_PERSONA_1 = 0x3f,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY2_PERSONA_1 = 0x40,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY3_PERSONA_1 = 0x41,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY4_PERSONA_1 = 0x42,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ABILITY_ULTIMATE_PERSONA_1 = 0x43,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_VOICE_PERSONA_1 = 0x44,
            DOTA_LOADOUT_PERSONA_1_START = 0x28,
            DOTA_LOADOUT_PERSONA_1_END = 0x44,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_PERSONA_SELECTOR = 0x45,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_COURIER = 0x46,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ANNOUNCER = 0x47,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MEGA_KILLS = 0x48,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MUSIC = 0x49,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_WARD = 0x4a,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HUD_SKIN = 0x4b,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_LOADING_SCREEN = 0x4c,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_WEATHER = 0x4d,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HEROIC_STATUE = 0x4e,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MULTIKILL_BANNER = 0x4f,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_CURSOR_PACK = 0x50,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TELEPORT_EFFECT = 0x51,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_BLINK_EFFECT = 0x52,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_EMBLEM = 0x53,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TERRAIN = 0x54,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_RADIANT_CREEPS = 0x55,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_DIRE_CREEPS = 0x56,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_RADIANT_TOWER = 0x57,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_DIRE_TOWER = 0x58,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_VERSUS_SCREEN = 0x59,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_STREAK_EFFECT = 0x5a,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_KILL_EFFECT = 0x5b,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_DEATH_EFFECT = 0x5c,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_HEAD_EFFECT = 0x5d,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_MAP_EFFECT = 0x5e,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_COURIER_EFFECT = 0x5f,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_RADIANT_SIEGE_CREEPS = 0x60,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_DIRE_SIEGE_CREEPS = 0x61,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ROSHAN = 0x62,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_TORMENTOR = 0x63,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_ANCIENT = 0x64,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_PET_EFFIGY = 0x65,
            DOTA_PLAYER_LOADOUT_START = 0x46,
            DOTA_PLAYER_LOADOUT_END = 0x65,
            // MAlternateSemanticName
            DOTA_LOADOUT_TYPE_NONE = 0x66,
            DOTA_LOADOUT_TYPE_COUNT = 0x67,
        };
    };
};
