#pragma once
#include "source2sdk/modellib/CMorphBundleData.hpp"
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
    class CMorphRectData
    {
    public:
        int16_t m_nXLeftDst; // 0x0        
        int16_t m_nYTopDst; // 0x2        
        float m_flUWidthSrc; // 0x4        
        float m_flVHeightSrc; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_bundleDatas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CMorphBundleData> m_bundleDatas;
        char m_bundleDatas[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMorphRectData, m_nXLeftDst) == 0x0);
    static_assert(offsetof(CMorphRectData, m_nYTopDst) == 0x2);
    static_assert(offsetof(CMorphRectData, m_flUWidthSrc) == 0x4);
    static_assert(offsetof(CMorphRectData, m_flVHeightSrc) == 0x8);
    static_assert(offsetof(CMorphRectData, m_bundleDatas) == 0x10);
    
    static_assert(sizeof(CMorphRectData) == 0x28);
};
