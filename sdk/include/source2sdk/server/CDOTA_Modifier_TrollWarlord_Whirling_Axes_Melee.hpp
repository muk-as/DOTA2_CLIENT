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
        // Size: 0x1868
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x17f8            
            float hit_radius; // 0x17fc            
            float axe_movement_speed; // 0x1800            
            float whirl_duration; // 0x1804            
            float max_range; // 0x1808            
            float blind_duration; // 0x180c            
            float m_flRotation; // 0x1810            
            float m_flAxeRadius; // 0x1814            
            source2sdk::entity2::GameTime_t m_flWhirlDieTime; // 0x1818            
            float m_bPiercesMagicImmunity; // 0x181c            
            std::int32_t m_nSwapIndex; // 0x1820            
            bool m_bReturning; // 0x1824            
            uint8_t _pad1825[0x3]; // 0x1825
            source2sdk::client::ParticleIndex_t m_nAxeFXIndex[2]; // 0x1828            
            std::int32_t m_nHeroesHitForRelic; // 0x1830            
            uint8_t _pad1834[0x4]; // 0x1834
            // hitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hitEntities;
            char hitEntities[0x18]; // 0x1838            
            // m_hAxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAxes;
            char m_hAxes[0x18]; // 0x1850            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee) == 0x1868);
    };
};
