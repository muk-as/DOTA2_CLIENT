#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Abaddon_Withering_Mist_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal_reduction_pct; // 0x17f8            
            std::int32_t hp_threshold_pct; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1800            
            bool bUnderThreshold; // 0x1804            
            uint8_t _pad1805[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_Withering_Mist_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Abaddon_Withering_Mist_Debuff) == 0x1808);
    };
};
