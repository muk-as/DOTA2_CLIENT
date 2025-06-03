#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_Buff;
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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float crack_width; // 0x1878            
            std::int32_t damage_pct; // 0x187c            
            float slow_duration; // 0x1880            
            float slow_duration_scepter; // 0x1884            
            source2sdk::client::CDOTA_Buff* m_pParentModifier; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker) == 0x1890);
    };
};
