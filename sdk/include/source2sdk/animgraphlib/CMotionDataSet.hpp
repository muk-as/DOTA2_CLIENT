#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CMotionGraphGroup.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
            // CUtlVector<source2sdk::animgraphlib::CMotionGraphGroup> m_groups;
            char m_groups[0x18]; // 0x0            
            std::int32_t m_nDimensionCount; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionDataSet, m_groups) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionDataSet, m_nDimensionCount) == 0x18);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionDataSet) == 0x20);
    };
};
