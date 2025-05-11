#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimationGraphVisualizerPrimitiveType.hpp"
#include "source2sdk/modellib/AnimNodeID.hpp"

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
        // Size: 0x40
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGraphVisualizerPrimitiveBase
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8            
            source2sdk::modellib::AnimNodeID m_OwningAnimNodePaths[11]; // 0xc            
            std::int32_t m_nOwningAnimNodePathCount; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase, m_Type) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase, m_OwningAnimNodePaths) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase, m_nOwningAnimNodePathCount) == 0x38);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase) == 0x40);
    };
};
