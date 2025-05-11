#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_drag_speed; // 0x17f8            
            float scepter_pull_rotate_speed; // 0x17fc            
            float aura_origin_x; // 0x1800            
            float aura_origin_y; // 0x1804            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1808            
            Vector m_vCenter; // 0x180c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1818            
            uint8_t _pad181c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter) == 0x1820);
    };
};
