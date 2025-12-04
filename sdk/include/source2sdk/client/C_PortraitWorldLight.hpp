#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EnvDeferredLight.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_PortraitWorldUnit;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PortraitWorldLight : public source2sdk::client::C_EnvDeferredLight
        {
        public:
            float m_flLatitude; // 0x_            
            float m_flLongitude; // 0x_            
            float m_flAdditionalRadius; // 0x_            
            float m_flBoundsRadiusMultiplier; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PortraitWorldUnit> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            bool m_bShowGizmos; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlStringToken m_hitboxSetName; // 0x_            
            Vector m_vPreviousCenter; // 0x_            
            Vector m_vCenterVelocity; // 0x_            
            float m_flPreviousBoundingSphereRadius; // 0x_            
            float m_flBoundingSphereRadiusChangeSpeed; // 0x_            
            bool m_bPreviousValuesInitialized; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldLight) == 0x_);
    };
};
