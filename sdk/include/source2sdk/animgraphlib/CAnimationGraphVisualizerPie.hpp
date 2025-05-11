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
        // Size: 0x80
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGraphVisualizerPie : public source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase
        {
        public:
            VectorAligned m_vWsCenter; // 0x40            
            VectorAligned m_vWsStart; // 0x50            
            VectorAligned m_vWsEnd; // 0x60            
            Color m_Color; // 0x70            
            uint8_t _pad0074[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAnimationGraphVisualizerPie because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationGraphVisualizerPie) == 0x80);
    };
};
