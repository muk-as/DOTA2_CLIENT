#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"

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
        class CDirectionalBlendUpdateNode : public source2sdk::animgraphlib::CLeafUpdateNode
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animationsystem::HSequence m_hSequences[8]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::AnimValueSource m_blendValueSource; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_playbackSpeed; // 0x_            
            float m_duration; // 0x_            
            bool m_bLoop; // 0x_            
            bool m_bLockBlendOnReset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDirectionalBlendUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CDirectionalBlendUpdateNode) == 0x_);
    };
};
