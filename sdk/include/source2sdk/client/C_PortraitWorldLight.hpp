#pragma once
#include "source2sdk/client/C_EnvDeferredLight.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_PortraitWorldUnit;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xb20
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_PortraitWorldLight : public client::C_EnvDeferredLight
    {
    public:
        float m_flLatitude; // 0xae0        
        float m_flLongitude; // 0xae4        
        float m_flAdditionalRadius; // 0xae8        
        float m_flBoundsRadiusMultiplier; // 0xaec        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_PortraitWorldUnit> m_hTarget;
        char m_hTarget[0x4]; // 0xaf0        
        bool m_bShowGizmos; // 0xaf4        
        [[maybe_unused]] std::uint8_t pad_0xaf5[0x3]; // 0xaf5
        CUtlStringToken m_hitboxSetName; // 0xaf8        
        Vector m_vPreviousCenter; // 0xafc        
        Vector m_vCenterVelocity; // 0xb08        
        float m_flPreviousBoundingSphereRadius; // 0xb14        
        float m_flBoundingSphereRadiusChangeSpeed; // 0xb18        
        bool m_bPreviousValuesInitialized; // 0xb1c        
        [[maybe_unused]] std::uint8_t pad_0xb1d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldLight because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldLight) == 0xb20);
};
