#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 22
    // Alignment: 4
    // Size: 0x4
    enum class DamageTypes_t : std::uint32_t
    {
        DMG_GENERIC = 0x0,
        DMG_CRUSH = 0x1,
        DMG_BULLET = 0x2,
        DMG_SLASH = 0x4,
        DMG_BURN = 0x8,
        DMG_VEHICLE = 0x10,
        DMG_FALL = 0x20,
        DMG_BLAST = 0x40,
        DMG_CLUB = 0x80,
        DMG_SHOCK = 0x100,
        DMG_SONIC = 0x200,
        DMG_ENERGYBEAM = 0x400,
        DMG_DROWN = 0x4000,
        DMG_POISON = 0x8000,
        DMG_RADIATION = 0x10000,
        DMG_DROWNRECOVER = 0x20000,
        DMG_ACID = 0x40000,
        DMG_PHYSGUN = 0x100000,
        DMG_DISSOLVE = 0x200000,
        DMG_BLAST_SURFACE = 0x400000,
        DMG_BUCKSHOT = 0x1000000,
        // MPropertySuppressEnumerator
        // MEnumeratorIsNotAFlag
        DMG_LASTGENERICFLAG = 0x1000000,
    };
};