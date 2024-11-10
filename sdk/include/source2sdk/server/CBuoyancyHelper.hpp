#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CBuoyancyHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        CUtlStringToken m_nFluidType; // 0x18        
        float m_flFluidDensity; // 0x1c        
        // m_vecFractionOfWheelSubmergedForWheelFriction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelFriction;
        char m_vecFractionOfWheelSubmergedForWheelFriction[0x18]; // 0x20        
        // m_vecWheelFrictionScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecWheelFrictionScales;
        char m_vecWheelFrictionScales[0x18]; // 0x38        
        // m_vecFractionOfWheelSubmergedForWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelDrag;
        char m_vecFractionOfWheelSubmergedForWheelDrag[0x18]; // 0x50        
        // m_vecWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecWheelDrag;
        char m_vecWheelDrag[0x18]; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x80[0x80];
        
        // Datamap fields:
        // void m_pController; // 0x8
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBuoyancyHelper, m_nFluidType) == 0x18);
    static_assert(offsetof(CBuoyancyHelper, m_flFluidDensity) == 0x1c);
    static_assert(offsetof(CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelFriction) == 0x20);
    static_assert(offsetof(CBuoyancyHelper, m_vecWheelFrictionScales) == 0x38);
    static_assert(offsetof(CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelDrag) == 0x50);
    static_assert(offsetof(CBuoyancyHelper, m_vecWheelDrag) == 0x68);
    
    static_assert(sizeof(CBuoyancyHelper) == 0x100);
};
