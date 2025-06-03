#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Shivas_Guard_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fCurRadius; // 0x1878            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x187c            
            // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_entitiesHit;
            char m_entitiesHit[0x18]; // 0x1880            
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1898            
            std::int32_t blast_speed; // 0x18b0            
            float blast_radius; // 0x18b4            
            std::int32_t blast_damage; // 0x18b8            
            std::int32_t illusion_multiplier_pct; // 0x18bc            
            float blast_debuff_duration; // 0x18c0            
            float resist_debuff_duration; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Shivas_Guard_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Shivas_Guard_Thinker) == 0x18c8);
    };
};
