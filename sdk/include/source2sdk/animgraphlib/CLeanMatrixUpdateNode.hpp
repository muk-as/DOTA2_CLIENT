#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLeanMatrixUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_frameCorners[3][3]; // 0x_            
            source2sdk::animgraphlib::CPoseHandle m_poses[9]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::AnimVectorSource m_blendSource; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_verticalAxis; // 0x_            
            Vector m_horizontalAxis; // 0x_            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            float m_flMaxValue; // 0x_            
            std::int32_t m_nSequenceMaxFrame; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLeanMatrixUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CLeanMatrixUpdateNode) == 0x_);
    };
};
