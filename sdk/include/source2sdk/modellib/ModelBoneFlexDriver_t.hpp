#pragma once
#include "source2sdk/modellib/ModelBoneFlexDriverControl_t.hpp"
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
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModelBoneFlexDriver_t
    {
    public:
        CUtlString m_boneName; // 0x0        
        uint32_t m_boneNameToken; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_controls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::ModelBoneFlexDriverControl_t> m_controls;
        char m_controls[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModelBoneFlexDriver_t, m_boneName) == 0x0);
    static_assert(offsetof(ModelBoneFlexDriver_t, m_boneNameToken) == 0x8);
    static_assert(offsetof(ModelBoneFlexDriver_t, m_controls) == 0x10);
    
    static_assert(sizeof(ModelBoneFlexDriver_t) == 0x28);
};
