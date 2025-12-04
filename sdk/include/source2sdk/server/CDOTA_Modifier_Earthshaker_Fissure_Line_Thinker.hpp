#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t fissure_radius; // 0x_            
            float fissure_movement_speed; // 0x_            
            float stun_duration; // 0x_            
            float fissure_damage; // 0x_            
            float free_pathing_linger_duration; // 0x_            
            float fissure_max_distance_moved; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x_            
            Vector m_vFissureStart; // 0x_            
            Vector m_vFissureStep; // 0x_            
            Vector m_vMoveDir; // 0x_            
            std::int32_t m_nSegments; // 0x_            
            float m_flDurationOriginal; // 0x_            
            float m_flTotalDistanceMoved; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFissureEffectIndex; // 0x_            
            // thinkerEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_BaseNPC*> thinkerEntities;
            char thinkerEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker) == 0x_);
    };
};
