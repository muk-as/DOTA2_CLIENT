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
        class CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fCurRadius; // 0x1878            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x187c            
            // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_entitiesHit;
            char m_entitiesHit[0x18]; // 0x1880            
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1898            
            float projectile_speed; // 0x18b0            
            float radius; // 0x18b4            
            float duration; // 0x18b8            
            float pct_health_damage_initial; // 0x18bc            
            float max_damage_initial; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker) == 0x18c8);
    };
};
