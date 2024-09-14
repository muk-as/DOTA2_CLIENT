#pragma once
#include "source2sdk/modellib/ModelBoneFlexComponent_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModelBoneFlexDriverControl_t
    {
    public:
        modellib::ModelBoneFlexComponent_t m_nBoneComponent; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_flexController; // 0x8        
        uint32_t m_flexControllerToken; // 0x10        
        float m_flMin; // 0x14        
        float m_flMax; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModelBoneFlexDriverControl_t, m_nBoneComponent) == 0x0);
    static_assert(offsetof(ModelBoneFlexDriverControl_t, m_flexController) == 0x8);
    static_assert(offsetof(ModelBoneFlexDriverControl_t, m_flexControllerToken) == 0x10);
    static_assert(offsetof(ModelBoneFlexDriverControl_t, m_flMin) == 0x14);
    static_assert(offsetof(ModelBoneFlexDriverControl_t, m_flMax) == 0x18);
    
    static_assert(sizeof(ModelBoneFlexDriverControl_t) == 0x20);
};
