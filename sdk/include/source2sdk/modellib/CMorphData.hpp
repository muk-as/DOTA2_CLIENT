#pragma once
#include "source2sdk/modellib/CMorphRectData.hpp"
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
    class CMorphData
    {
    public:
        CUtlString m_name; // 0x0        
        // m_morphRectDatas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CMorphRectData> m_morphRectDatas;
        char m_morphRectDatas[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMorphData, m_name) == 0x0);
    static_assert(offsetof(CMorphData, m_morphRectDatas) == 0x8);
    
    static_assert(sizeof(CMorphData) == 0x20);
};
