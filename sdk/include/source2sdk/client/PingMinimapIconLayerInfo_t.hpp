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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PingMinimapIconLayerInfo_t
        {
        public:
            // metadata: MPropertyDescription "ID of icon to show on minimap. See scripts/minimap_icons.txt and mod_textures.txt"
            std::int32_t m_nIconID; // 0x_            
            float m_flSizeScale; // 0x_            
            float m_flIntensity; // 0x_            
            bool m_bAdditive; // 0x_            
            bool m_bForceBaseIconWhite; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::EPingMinimapAnimType m_eAnimType; // 0x_            
            source2sdk::client::EPingMinimapDrawCondition m_eDrawCondition; // 0x_            
            float m_flPulseStartSizeScale; // 0x_            
            float m_flPulseBonusIntensity; // 0x_            
            float m_flPulseDuration; // 0x_            
            std::int32_t m_nPulseCount; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_nIconID) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flSizeScale) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_bAdditive) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_bForceBaseIconWhite) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_eAnimType) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_eDrawCondition) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flPulseStartSizeScale) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flPulseBonusIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_flPulseDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::PingMinimapIconLayerInfo_t, m_nPulseCount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PingMinimapIconLayerInfo_t) == 0x_);
    };
};
