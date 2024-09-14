#pragma once
#include "source2sdk/animgraphlib/CMotionGraphGroup.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMotionDataSet
    {
    public:
        // m_groups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CMotionGraphGroup> m_groups;
        char m_groups[0x18]; // 0x0        
        int32_t m_nDimensionCount; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMotionDataSet, m_groups) == 0x0);
    static_assert(offsetof(CMotionDataSet, m_nDimensionCount) == 0x18);
    
    static_assert(sizeof(CMotionDataSet) == 0x20);
};
