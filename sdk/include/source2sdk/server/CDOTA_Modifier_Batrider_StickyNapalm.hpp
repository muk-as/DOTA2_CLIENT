#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Stacking_Base.hpp"

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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_StickyNapalm : public source2sdk::server::CDOTA_Modifier_Stacking_Base
        {
        public:
            float movement_speed_pct; // 0x1818            
            std::int32_t turn_rate_pct; // 0x181c            
            std::int32_t damage; // 0x1820            
            std::int32_t application_damage; // 0x1824            
            std::int32_t building_damage_pct; // 0x1828            
            std::int32_t creep_damage_pct; // 0x182c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1830            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1834            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_StickyNapalm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Batrider_StickyNapalm) == 0x1838);
    };
};
