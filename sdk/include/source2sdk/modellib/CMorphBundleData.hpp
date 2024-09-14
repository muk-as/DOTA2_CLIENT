#pragma once
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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMorphBundleData
    {
    public:
        float m_flULeftSrc; // 0x0        
        float m_flVTopSrc; // 0x4        
        // m_offsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_offsets;
        char m_offsets[0x18]; // 0x8        
        // m_ranges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ranges;
        char m_ranges[0x18]; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMorphBundleData, m_flULeftSrc) == 0x0);
    static_assert(offsetof(CMorphBundleData, m_flVTopSrc) == 0x4);
    static_assert(offsetof(CMorphBundleData, m_offsets) == 0x8);
    static_assert(offsetof(CMorphBundleData, m_ranges) == 0x20);
    
    static_assert(sizeof(CMorphBundleData) == 0x38);
};
