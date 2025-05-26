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
        // Size: 0xc70
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PortraitWorldLight : public source2sdk::client::C_EnvDeferredLight
        {
        public:
            float m_flLatitude; // 0xc30            
            float m_flLongitude; // 0xc34            
            float m_flAdditionalRadius; // 0xc38            
            float m_flBoundsRadiusMultiplier; // 0xc3c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_PortraitWorldUnit> m_hTarget;
            char m_hTarget[0x4]; // 0xc40            
            bool m_bShowGizmos; // 0xc44            
            uint8_t _pad0c45[0x3]; // 0xc45
            CUtlStringToken m_hitboxSetName; // 0xc48            
            Vector m_vPreviousCenter; // 0xc4c            
            Vector m_vCenterVelocity; // 0xc58            
            float m_flPreviousBoundingSphereRadius; // 0xc64            
            float m_flBoundingSphereRadiusChangeSpeed; // 0xc68            
            bool m_bPreviousValuesInitialized; // 0xc6c            
            uint8_t _pad0c6d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldLight) == 0xc70);
    };
};
