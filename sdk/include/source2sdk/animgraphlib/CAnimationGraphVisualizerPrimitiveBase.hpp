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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGraphVisualizerPrimitiveBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveType m_Type; // 0x_            
            source2sdk::modellib::AnimNodeID m_OwningAnimNodePaths[11]; // 0x_            
            std::int32_t m_nOwningAnimNodePathCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase, m_Type) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase, m_OwningAnimNodePaths) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase, m_nOwningAnimNodePathCount) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase) == 0x_);
    };
};
