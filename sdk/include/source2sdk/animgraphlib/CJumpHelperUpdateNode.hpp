#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CSequenceUpdateNode.hpp"
#include "source2sdk/animgraphlib/JumpCorrectionMethod.hpp"

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
        class CJumpHelperUpdateNode : public source2sdk::animgraphlib::CSequenceUpdateNode
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetParam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_flOriginalJumpMovement; // 0x_            
            float m_flOriginalJumpDuration; // 0x_            
            float m_flJumpStartCycle; // 0x_            
            float m_flJumpEndCycle; // 0x_            
            source2sdk::animgraphlib::JumpCorrectionMethod m_eCorrectionMethod; // 0x_            
            bool m_bTranslationAxis[3]; // 0x_            
            bool m_bScaleSpeed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CJumpHelperUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CJumpHelperUpdateNode) == 0x_);
    };
};
