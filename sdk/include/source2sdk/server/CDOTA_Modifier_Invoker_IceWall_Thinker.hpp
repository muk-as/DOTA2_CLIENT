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
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x17f8            
            std::int32_t num_wall_elements; // 0x17fc            
            float wall_element_spacing; // 0x1800            
            float wall_element_radius; // 0x1804            
            float bonus_wall_radius; // 0x1808            
            float spell_amp; // 0x180c            
            float spell_lifesteal; // 0x1810            
            Vector m_vWallDir; // 0x1814            
            bool m_bGrantedGem; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0x1824            
            source2sdk::client::ParticleIndex_t m_nParticleIndex2; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x1830);
    };
};
