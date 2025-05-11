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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t fissure_radius; // 0x17f8            
            float fissure_movement_speed; // 0x17fc            
            float stun_duration; // 0x1800            
            float fissure_damage; // 0x1804            
            float free_pathing_linger_duration; // 0x1808            
            float fissure_max_distance_moved; // 0x180c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1810            
            Vector m_vFissureStart; // 0x1814            
            Vector m_vFissureStep; // 0x1820            
            Vector m_vMoveDir; // 0x182c            
            std::int32_t m_nSegments; // 0x1838            
            float m_flDurationOriginal; // 0x183c            
            float m_flTotalDistanceMoved; // 0x1840            
            source2sdk::client::ParticleIndex_t m_nFissureEffectIndex; // 0x1844            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker) == 0x1848);
    };
};
