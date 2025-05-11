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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CJumpHelperUpdateNode : public source2sdk::animgraphlib::CSequenceUpdateNode
        {
        public:
            source2sdk::animgraphlib::CAnimParamHandle m_hTargetParam; // 0xb0            
            uint8_t _pad00b2[0x2]; // 0xb2
            Vector m_flOriginalJumpMovement; // 0xb4            
            float m_flOriginalJumpDuration; // 0xc0            
            float m_flJumpStartCycle; // 0xc4            
            float m_flJumpEndCycle; // 0xc8            
            source2sdk::animgraphlib::JumpCorrectionMethod m_eCorrectionMethod; // 0xcc            
            bool m_bTranslationAxis[3]; // 0xd0            
            bool m_bScaleSpeed; // 0xd3            
            uint8_t _pad00d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CJumpHelperUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CJumpHelperUpdateNode) == 0xd8);
    };
};
