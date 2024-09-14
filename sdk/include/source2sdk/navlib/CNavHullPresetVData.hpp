#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MVDataRoot
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNavHullPresetVData
    {
    public:
        // metadata: MPropertyFriendlyName "Nav Hulls"
        // metadata: MPropertyDescription "List of nav hulls belonging to this preset."
        // metadata: MPropertyAttributeEditor "VDataChoice( scripts/nav_hulls.vdata )"
        // m_vecNavHulls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecNavHulls;
        char m_vecNavHulls[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNavHullPresetVData, m_vecNavHulls) == 0x0);
    
    static_assert(sizeof(CNavHullPresetVData) == 0x18);
};
