#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Stacking_Base.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_StickyNapalm : public source2sdk::client::CDOTA_Modifier_Stacking_Base
        {
        public:
            float movement_speed_pct; // 0x17f8            
            std::int32_t turn_rate_pct; // 0x17fc            
            std::int32_t damage; // 0x1800            
            std::int32_t application_damage; // 0x1804            
            std::int32_t building_damage_pct; // 0x1808            
            std::int32_t creep_damage_pct; // 0x180c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1810            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_StickyNapalm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Batrider_StickyNapalm) == 0x1818);
    };
};
