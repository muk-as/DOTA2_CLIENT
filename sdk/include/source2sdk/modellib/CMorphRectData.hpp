#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CMorphBundleData.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
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
            std::int16_t m_nXLeftDst; // 0x0            
            std::int16_t m_nYTopDst; // 0x2            
            float m_flUWidthSrc; // 0x4            
            float m_flVHeightSrc; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_bundleDatas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CMorphBundleData> m_bundleDatas;
            char m_bundleDatas[0x18]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMorphRectData, m_nXLeftDst) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CMorphRectData, m_nYTopDst) == 0x2);
        static_assert(offsetof(source2sdk::modellib::CMorphRectData, m_flUWidthSrc) == 0x4);
        static_assert(offsetof(source2sdk::modellib::CMorphRectData, m_flVHeightSrc) == 0x8);
        static_assert(offsetof(source2sdk::modellib::CMorphRectData, m_bundleDatas) == 0x10);
        
        static_assert(sizeof(source2sdk::modellib::CMorphRectData) == 0x28);
    };
};
