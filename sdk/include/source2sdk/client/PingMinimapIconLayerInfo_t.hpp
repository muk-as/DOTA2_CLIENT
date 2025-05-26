#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EPingMinimapAnimType.hpp"
#include "source2sdk/client/EPingMinimapDrawCondition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PingMinimapIconLayerInfo_t
        {
        public:
            // metadata: MPropertyDescription "ID of icon to show on minimap. See scripts/minimap_icons.txt and mod_textures.txt"
            std::int32_t m_nIconID; // 0x0            
            float m_flSizeScale; // 0x4            
            float m_flIntensity; // 0x8            
            bool m_bAdditive; // 0xc            
            bool m_bForceBaseIconWhite; // 0xd            
            uint8_t _pad000e[0x2]; // 0xe
            source2sdk::client::EPingMinimapAnimType m_eAnimType; // 0x10            
            source2sdk::client::EPingMinimapDrawCondition m_eDrawCondition; // 0x14            
            float m_flPulseStartSizeScale; // 0x18            
            float m_flPulseBonusIntensity; // 0x1c            
            float m_flPulseDuration; // 0x20            
            std::int32_t m_nPulseCount; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_nIconID) == 0x0);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flSizeScale) == 0x4);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flIntensity) == 0x8);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_bAdditive) == 0xc);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_bForceBaseIconWhite) == 0xd);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_eAnimType) == 0x10);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_eDrawCondition) == 0x14);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flPulseStartSizeScale) == 0x18);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flPulseBonusIntensity) == 0x1c);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flPulseDuration) == 0x20);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_nPulseCount) == 0x24);
        
        static_assert(sizeof(source2sdk::client::PingMinimapIconLayerInfo_t) == 0x28);
    };
};
