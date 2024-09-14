#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 15
    // Alignment: 8
    // Size: 0x8
    enum class TakeDamageFlags_t : std::uint64_t
    {
        DFLAG_NONE = 0x0,
        DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
        DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
        DFLAG_SUPPRESS_EFFECTS = 0x4,
        DFLAG_PREVENT_DEATH = 0x8,
        DFLAG_FORCE_DEATH = 0x10,
        DFLAG_ALWAYS_GIB = 0x20,
        DFLAG_NEVER_GIB = 0x40,
        DFLAG_REMOVE_NO_RAGDOLL = 0x80,
        DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
        DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
        DFLAG_RADIUS_DMG = 0x400,
        DFLAG_FORCEREDUCEARMOR_DMG = 0x800,
        DFLAG_SUPPRESS_INTERRUPT_FLINCH = 0x1000,
        // MPropertySuppressEnumerator
        // MEnumeratorIsNotAFlag
        DMG_LASTDFLAG = 0x1000,
    };
};
