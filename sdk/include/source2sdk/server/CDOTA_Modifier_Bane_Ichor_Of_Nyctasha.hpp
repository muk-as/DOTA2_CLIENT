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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Bane_Ichor_Of_Nyctasha : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastCalculationTime; // 0x17f8            
            float m_flTotalAttributes; // 0x17fc            
            float m_flOriginalStrength; // 0x1800            
            float m_flOriginalAgility; // 0x1804            
            float m_flOriginalIntellect; // 0x1808            
            bool m_bIgnoreInCalc; // 0x180c            
            bool m_bCalculateStatBonus; // 0x180d            
            uint8_t _pad180e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Ichor_Of_Nyctasha because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bane_Ichor_Of_Nyctasha) == 0x1810);
    };
};
