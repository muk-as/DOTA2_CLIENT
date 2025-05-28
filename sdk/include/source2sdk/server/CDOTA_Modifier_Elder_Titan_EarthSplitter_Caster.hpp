#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18f0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x18]; // 0x1888            
            float vision_width; // 0x18a0            
            float vision_interval; // 0x18a4            
            float vision_duration; // 0x18a8            
            std::int32_t vision_step; // 0x18ac            
            std::int32_t total_steps; // 0x18b0            
            std::int32_t m_nCompletedSteps; // 0x18b4            
            Vector m_vStart; // 0x18b8            
            Vector m_vEnd; // 0x18c4            
            Vector m_vNextVisionLocation; // 0x18d0            
            Vector m_vCastDirection; // 0x18dc            
            std::int32_t m_nHumHeroesHit; // 0x18e8            
            bool m_bHitInvisibleHero; // 0x18ec            
            uint8_t _pad18ed[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster) == 0x18f0);
    };
};
