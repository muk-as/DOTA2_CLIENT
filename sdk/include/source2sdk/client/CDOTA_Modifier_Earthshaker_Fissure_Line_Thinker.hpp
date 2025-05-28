#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t fissure_radius; // 0x1888            
            float fissure_movement_speed; // 0x188c            
            float stun_duration; // 0x1890            
            float fissure_damage; // 0x1894            
            float free_pathing_linger_duration; // 0x1898            
            float fissure_max_distance_moved; // 0x189c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x18a0            
            Vector m_vFissureStart; // 0x18a4            
            Vector m_vFissureStep; // 0x18b0            
            Vector m_vMoveDir; // 0x18bc            
            std::int32_t m_nSegments; // 0x18c8            
            float m_flDurationOriginal; // 0x18cc            
            float m_flTotalDistanceMoved; // 0x18d0            
            source2sdk::client::ParticleIndex_t m_nFissureEffectIndex; // 0x18d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker) == 0x18d8);
    };
};
