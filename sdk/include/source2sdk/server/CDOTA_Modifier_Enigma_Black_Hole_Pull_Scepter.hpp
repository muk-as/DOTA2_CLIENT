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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_drag_speed; // 0x_            
            float scepter_pull_rotate_speed; // 0x_            
            float aura_origin_x; // 0x_            
            float aura_origin_y; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            Vector m_vCenter; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_Black_Hole_Pull_Scepter) == 0x_);
    };
};
