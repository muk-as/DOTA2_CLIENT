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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Clinkz_Burning_Army : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_rate; // 0x17f8            
            std::int32_t damage_percent; // 0x17fc            
            std::int32_t skeleton_health; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1804            
            std::int32_t skeleton_building_damage_reduction; // 0x1808            
            std::int32_t m_nDamageCounter; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Burning_Army because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Clinkz_Burning_Army) == 0x1810);
    };
};
