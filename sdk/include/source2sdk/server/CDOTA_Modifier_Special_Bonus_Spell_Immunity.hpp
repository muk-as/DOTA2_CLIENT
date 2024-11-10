#pragma once
#include "source2sdk/server/CDOTA_Modifier_MagicImmune.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Special_Bonus_Spell_Immunity : public server::CDOTA_Modifier_MagicImmune
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_Modifier_Special_Bonus_Spell_Immunity) == 0x1708);
};
