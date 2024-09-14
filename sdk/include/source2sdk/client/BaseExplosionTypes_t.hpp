#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 17
    // Alignment: 4
    // Size: 0x4
    enum class BaseExplosionTypes_t : std::uint32_t
    {
        // MPropertyFriendlyName "Default"
        EXPLOSION_TYPE_DEFAULT = 0x0,
        // MPropertyFriendlyName "Grenade"
        EXPLOSION_TYPE_GRENADE = 0x1,
        // MPropertyFriendlyName "Molotov"
        EXPLOSION_TYPE_MOLOTOV = 0x2,
        // MPropertyFriendlyName "Fireworks"
        EXPLOSION_TYPE_FIREWORKS = 0x3,
        // MPropertyFriendlyName "Gascan"
        EXPLOSION_TYPE_GASCAN = 0x4,
        // MPropertyFriendlyName "Gas Cylinder"
        EXPLOSION_TYPE_GASCYLINDER = 0x5,
        // MPropertyFriendlyName "Explosive Barrel"
        EXPLOSION_TYPE_EXPLOSIVEBARREL = 0x6,
        // MPropertyFriendlyName "Electrical"
        EXPLOSION_TYPE_ELECTRICAL = 0x7,
        // MPropertyFriendlyName "EMP"
        EXPLOSION_TYPE_EMP = 0x8,
        // MPropertyFriendlyName "Shrapnel"
        EXPLOSION_TYPE_SHRAPNEL = 0x9,
        // MPropertyFriendlyName "Smoke Grenade"
        EXPLOSION_TYPE_SMOKEGRENADE = 0xa,
        // MPropertyFriendlyName "Flashbang"
        EXPLOSION_TYPE_FLASHBANG = 0xb,
        // MPropertyFriendlyName "Tripmine"
        EXPLOSION_TYPE_TRIPMINE = 0xc,
        // MPropertyFriendlyName "Ice"
        EXPLOSION_TYPE_ICE = 0xd,
        // MPropertyFriendlyName "None"
        EXPLOSION_TYPE_NONE = 0xe,
        // MPropertyFriendlyName "Custom"
        EXPLOSION_TYPE_CUSTOM = 0xf,
        // MPropertySuppressEnumerator
        EXPLOSION_TYPE_COUNT = 0x10,
    };
};
