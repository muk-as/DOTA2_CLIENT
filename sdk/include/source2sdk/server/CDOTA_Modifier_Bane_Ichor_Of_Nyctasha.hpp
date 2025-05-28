#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bane_Ichor_Of_Nyctasha : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastCalculationTime; // 0x1888            
            float m_flTotalAttributes; // 0x188c            
            float m_flOriginalStrength; // 0x1890            
            float m_flOriginalAgility; // 0x1894            
            float m_flOriginalIntellect; // 0x1898            
            bool m_bIgnoreInCalc; // 0x189c            
            bool m_bCalculateStatBonus; // 0x189d            
            uint8_t _pad189e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Ichor_Of_Nyctasha because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bane_Ichor_Of_Nyctasha) == 0x18a0);
    };
};
