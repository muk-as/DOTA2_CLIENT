#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitUnits;
            char m_hHitUnits[0x_]; // 0x_            
            float vision_width; // 0x_            
            float vision_interval; // 0x_            
            float vision_duration; // 0x_            
            std::int32_t vision_step; // 0x_            
            std::int32_t total_steps; // 0x_            
            std::int32_t m_nCompletedSteps; // 0x_            
            Vector m_vStart; // 0x_            
            Vector m_vEnd; // 0x_            
            Vector m_vNextVisionLocation; // 0x_            
            Vector m_vCastDirection; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster) == 0x_);
    };
};
