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
        struct CBaseEntity;
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
        class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x_            
            float hit_radius; // 0x_            
            float axe_movement_speed; // 0x_            
            float whirl_duration; // 0x_            
            float max_range; // 0x_            
            float blind_duration; // 0x_            
            float m_flRotation; // 0x_            
            float m_flAxeRadius; // 0x_            
            source2sdk::entity2::GameTime_t m_flWhirlDieTime; // 0x_            
            float m_bPiercesMagicImmunity; // 0x_            
            std::int32_t m_nSwapIndex; // 0x_            
            bool m_bReturning; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x_            
            std::int32_t m_nHeroesHitForRelic; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // hitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hitEntities;
            char hitEntities[0x_]; // 0x_            
            // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAxes;
            char m_hAxes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee) == 0x_);
    };
};
