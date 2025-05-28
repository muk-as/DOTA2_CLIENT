#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x18f8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Razor_PlasmaField_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLastRadius; // 0x1888            
            float m_fCurRadius; // 0x188c            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1890            
            bool m_bContracting; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1898            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b0            
            uint8_t _pad18b4[0x4]; // 0x18b4
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x18b8            
            std::int32_t speed; // 0x18d0            
            float radius; // 0x18d4            
            float damage_min; // 0x18d8            
            float damage_max; // 0x18dc            
            std::int32_t slow_min; // 0x18e0            
            std::int32_t slow_max; // 0x18e4            
            float slow_duration; // 0x18e8            
            bool m_bHasCreatedFx; // 0x18ec            
            uint8_t _pad18ed[0x3]; // 0x18ed
            float total_ability_time; // 0x18f0            
            uint8_t _pad18f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Razor_PlasmaField_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Razor_PlasmaField_Thinker) == 0x18f8);
    };
};
