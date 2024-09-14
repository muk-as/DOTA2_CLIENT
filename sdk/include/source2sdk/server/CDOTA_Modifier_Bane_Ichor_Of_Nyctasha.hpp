#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bane_Ichor_Of_Nyctasha : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_flLastCalculationTime; // 0x16e8        
        float m_flTotalAttributes; // 0x16ec        
        float m_flOriginalStrength; // 0x16f0        
        float m_flOriginalAgility; // 0x16f4        
        float m_flOriginalIntellect; // 0x16f8        
        bool m_bIgnoreInCalc; // 0x16fc        
        bool m_bCalculateStatBonus; // 0x16fd        
        [[maybe_unused]] std::uint8_t pad_0x16fe[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Ichor_Of_Nyctasha because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bane_Ichor_Of_Nyctasha) == 0x1700);
};
