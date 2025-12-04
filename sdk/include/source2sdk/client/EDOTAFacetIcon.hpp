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
        // Enumerator count: 91
        // Alignment: 1
        // Size: 0x_
        enum class EDOTAFacetIcon : std::uint8_t
        {
            // MAlternateSemanticName
            FACET_ICON_AGHANIMS_SCEPTER = 0x0,
            // MAlternateSemanticName
            FACET_ICON_AGILITY = 0x1,
            // MAlternateSemanticName
            FACET_ICON_AREA_OF_EFFECT = 0x2,
            // MAlternateSemanticName
            FACET_ICON_ARC_WARDEN = 0x3,
            // MAlternateSemanticName
            FACET_ICON_ARC_WARDEN_ALT = 0x4,
            // MAlternateSemanticName
            FACET_ICON_ARMOR = 0x5,
            // MAlternateSemanticName
            FACET_ICON_ARMOR_BROKEN = 0x6,
            // MAlternateSemanticName
            FACET_ICON_BARRIER = 0x7,
            // MAlternateSemanticName
            FACET_ICON_BROKEN_CHAIN = 0x8,
            // MAlternateSemanticName
            FACET_ICON_BRUSH = 0x9,
            // MAlternateSemanticName
            FACET_ICON_BUBBLES = 0xa,
            // MAlternateSemanticName
            FACET_ICON_CHEN = 0xb,
            // MAlternateSemanticName
            FACET_ICON_CHICKEN = 0xc,
            // MAlternateSemanticName
            FACET_ICON_CHRONO_CUBE = 0xd,
            // MAlternateSemanticName
            FACET_ICON_COOLDOWN = 0xe,
            // MAlternateSemanticName
            FACET_ICON_CREEP = 0xf,
            // MAlternateSemanticName
            FACET_ICON_CURVE_BALL = 0x10,
            // MAlternateSemanticName
            FACET_ICON_DAMAGE = 0x11,
            // MAlternateSemanticName
            FACET_ICON_DAWNBREAKER_HAMMER = 0x12,
            // MAlternateSemanticName
            FACET_ICON_DEATH_WARD = 0x13,
            // MAlternateSemanticName
            FACET_ICON_DEBUFF = 0x14,
            // MAlternateSemanticName
            FACET_ICON_DOUBLE_BOUNCE = 0x15,
            // MAlternateSemanticName
            FACET_ICON_DRAGON_FIRE = 0x16,
            // MAlternateSemanticName
            FACET_ICON_DRAGON_FROST = 0x17,
            // MAlternateSemanticName
            FACET_ICON_DRAGON_POISON = 0x18,
            // MAlternateSemanticName
            FACET_ICON_EMPOWER = 0x19,
            // MAlternateSemanticName
            FACET_ICON_EXECUTE = 0x1a,
            // MAlternateSemanticName
            FACET_ICON_FENCE = 0x1b,
            // MAlternateSemanticName
            FACET_ICON_FULL_HEART = 0x1c,
            // MAlternateSemanticName
            FACET_ICON_FIST = 0x1d,
            // MAlternateSemanticName
            FACET_ICON_FOCUS_FIRE = 0x1e,
            // MAlternateSemanticName
            FACET_ICON_GOLD = 0x1f,
            // MAlternateSemanticName
            FACET_ICON_HEALING = 0x20,
            // MAlternateSemanticName
            FACET_ICON_ILLUSION = 0x21,
            // MAlternateSemanticName
            FACET_ICON_INTELLIGENCE = 0x22,
            // MAlternateSemanticName
            FACET_ICON_INVOKER_QUAS = 0x23,
            // MAlternateSemanticName
            FACET_ICON_INVOKER_WEX = 0x24,
            // MAlternateSemanticName
            FACET_ICON_INVOKER_EXORT = 0x25,
            // MAlternateSemanticName
            FACET_ICON_INVOKER_ACTIVE = 0x26,
            // MAlternateSemanticName
            FACET_ICON_INVOKER_PASSIVE = 0x27,
            // MAlternateSemanticName
            FACET_ICON_ITEM = 0x28,
            // MAlternateSemanticName
            FACET_ICON_KEZ = 0x29,
            // MAlternateSemanticName
            FACET_ICON_KEZ_FLUTTER = 0x2a,
            // MAlternateSemanticName
            FACET_ICON_KEZ_SHADOWHAWK = 0x2b,
            // MAlternateSemanticName
            FACET_ICON_LIFESTEALER_RAGE = 0x2c,
            // MAlternateSemanticName
            FACET_ICON_MANA = 0x2d,
            // MAlternateSemanticName
            FACET_ICON_MOON = 0x2e,
            // MAlternateSemanticName
            FACET_ICON_MEAT = 0x2f,
            // MAlternateSemanticName
            FACET_ICON_MOVEMENT = 0x30,
            // MAlternateSemanticName
            FACET_ICON_MULTI_ARROW = 0x31,
            // MAlternateSemanticName
            FACET_ICON_NO_VISION = 0x32,
            // MAlternateSemanticName
            FACET_ICON_NUKE = 0x33,
            // MAlternateSemanticName
            FACET_ICON_OGRE = 0x34,
            // MAlternateSemanticName
            FACET_ICON_OVERSHADOW = 0x35,
            // MAlternateSemanticName
            FACET_ICON_PHANTOM_ASS_DAGGER = 0x36,
            // MAlternateSemanticName
            FACET_ICON_PHANTOM_LANCE = 0x37,
            // MAlternateSemanticName
            FACET_ICON_PIE = 0x38,
            // MAlternateSemanticName
            FACET_ICON_PUDGE_HOOK = 0x39,
            // MAlternateSemanticName
            FACET_ICON_RANGE = 0x3a,
            // MAlternateSemanticName
            FACET_ICON_RICOCHET = 0x3b,
            // MAlternateSemanticName
            FACET_ICON_RNG = 0x3c,
            // MAlternateSemanticName
            FACET_ICON_RUNE = 0x3d,
            // MAlternateSemanticName
            FACET_ICON_SIEGE = 0x3e,
            // MAlternateSemanticName
            FACET_ICON_SILENCER = 0x3f,
            // MAlternateSemanticName
            FACET_ICON_SKULL = 0x40,
            // MAlternateSemanticName
            FACET_ICON_SLOW = 0x41,
            // MAlternateSemanticName
            FACET_ICON_SNAKE = 0x42,
            // MAlternateSemanticName
            FACET_ICON_SNOT = 0x43,
            // MAlternateSemanticName
            FACET_ICON_SNOWFLAKE = 0x44,
            // MAlternateSemanticName
            FACET_ICON_SPECTRE = 0x45,
            // MAlternateSemanticName
            FACET_ICON_SPEED = 0x46,
            // MAlternateSemanticName
            FACET_ICON_SPINNING = 0x47,
            // MAlternateSemanticName
            FACET_ICON_SPIRIT = 0x48,
            // MAlternateSemanticName
            FACET_ICON_STRENGTH = 0x49,
            // MAlternateSemanticName
            FACET_ICON_SUMMONS = 0x4a,
            // MAlternateSemanticName
            FACET_ICON_SUN = 0x4b,
            // MAlternateSemanticName
            FACET_ICON_TELEPORT = 0x4c,
            // MAlternateSemanticName
            FACET_ICON_TREE = 0x4d,
            // MAlternateSemanticName
            FACET_ICON_TOWER = 0x4e,
            // MAlternateSemanticName
            FACET_ICON_TWIN_HEARTS = 0x4f,
            // MAlternateSemanticName
            FACET_ICON_UNIQUE = 0x50,
            // MAlternateSemanticName
            FACET_ICON_VISION = 0x51,
            // MAlternateSemanticName
            FACET_ICON_VORTEX_IN = 0x52,
            // MAlternateSemanticName
            FACET_ICON_VORTEX_OUT = 0x53,
            // MAlternateSemanticName
            FACET_ICON_WEB = 0x54,
            // MAlternateSemanticName
            FACET_ICON_WHOOPEE_CUSHION = 0x55,
            // MAlternateSemanticName
            FACET_ICON_WOLF = 0x56,
            // MAlternateSemanticName
            FACET_ICON_XP = 0x57,
            // MAlternateSemanticName
            FACET_ICON_NONE = 0x58,
            FACET_ICON_COUNT = 0x59,
            FACET_ICON_INVALID = 0x5a,
        };
    };
};
