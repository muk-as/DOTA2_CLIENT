#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bane_Ichor_Of_Nyctasha : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_flLastCalculationTime; // 0x1708        
        float m_flTotalAttributes; // 0x170c        
        float m_flOriginalStrength; // 0x1710        
        float m_flOriginalAgility; // 0x1714        
        float m_flOriginalIntellect; // 0x1718        
        bool m_bIgnoreInCalc; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Ichor_Of_Nyctasha because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bane_Ichor_Of_Nyctasha) == 0x1720);
};
