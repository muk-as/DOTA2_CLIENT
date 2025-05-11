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
        // Size: 0x60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGraphVisualizerText : public source2sdk::animgraphlib::CAnimationGraphVisualizerPrimitiveBase
        {
        public:
            VectorAligned m_vWsPosition; // 0x40            
            Color m_Color; // 0x50            
            uint8_t _pad0054[0x4]; // 0x54
            CUtlString m_Text; // 0x58            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAnimationGraphVisualizerText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationGraphVisualizerText) == 0x60);
    };
};
