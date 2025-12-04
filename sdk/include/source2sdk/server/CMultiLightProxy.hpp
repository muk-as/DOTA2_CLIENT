#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CLightEntity;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMultiLightProxy : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszLightNameFilter; // 0x_            
            CUtlSymbolLarge m_iszLightClassFilter; // 0x_            
            float m_flLightRadiusFilter; // 0x_            
            float m_flBrightnessDelta; // 0x_            
            bool m_bPerformScreenFade; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTargetBrightnessMultiplier; // 0x_            
            float m_flCurrentBrightnessMultiplier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecLights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CLightEntity>> m_vecLights;
            char m_vecLights[0x_]; // 0x_            
            
            // Datamap fields:
            // float InputFlickerLights; // 0x_
            // float InputDisableLights; // 0x_
            // float InputSetLightsBrightnessMultiplier; // 0x_
            // float InputSetBrightnessDelta; // 0x_
            // void CMultiLightProxyRestoreFlashlightThink; // 0x_
            // void CMultiLightProxyApproachBrightnessThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMultiLightProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMultiLightProxy) == 0x_);
    };
};
