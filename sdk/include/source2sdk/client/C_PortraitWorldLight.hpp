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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xad0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PortraitWorldLight : public source2sdk::client::C_EnvDeferredLight
        {
        public:
            float m_flLatitude; // 0xa90            
            float m_flLongitude; // 0xa94            
            float m_flAdditionalRadius; // 0xa98            
            float m_flBoundsRadiusMultiplier; // 0xa9c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PortraitWorldUnit> m_hTarget;
            char m_hTarget[0x4]; // 0xaa0            
            bool m_bShowGizmos; // 0xaa4            
            uint8_t _pad0aa5[0x3]; // 0xaa5
            CUtlStringToken m_hitboxSetName; // 0xaa8            
            Vector m_vPreviousCenter; // 0xaac            
            Vector m_vCenterVelocity; // 0xab8            
            float m_flPreviousBoundingSphereRadius; // 0xac4            
            float m_flBoundingSphereRadiusChangeSpeed; // 0xac8            
            bool m_bPreviousValuesInitialized; // 0xacc            
            uint8_t _pad0acd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldLight) == 0xad0);
    };
};
