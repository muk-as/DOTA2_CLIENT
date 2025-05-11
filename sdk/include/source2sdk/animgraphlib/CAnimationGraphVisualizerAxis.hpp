#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimationGraphVisualizerPrimitiveBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x70
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGraphVisualizerAxis : public source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase
        {
        public:
            CTransform m_xWsTransform; // 0x40            
            float m_flAxisSize; // 0x60            
            uint8_t _pad0064[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAnimationGraphVisualizerAxis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationGraphVisualizerAxis) == 0x70);
    };
};
