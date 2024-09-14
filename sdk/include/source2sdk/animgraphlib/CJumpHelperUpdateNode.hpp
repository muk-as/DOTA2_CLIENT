#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CSequenceUpdateNode.hpp"
#include "source2sdk/animgraphlib/JumpCorrectionMethod.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CJumpHelperUpdateNode : public animgraphlib::CSequenceUpdateNode
    {
    public:
        animgraphlib::CAnimParamHandle m_hTargetParam; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xaa[0x2]; // 0xaa
        Vector m_flOriginalJumpMovement; // 0xac        
        float m_flOriginalJumpDuration; // 0xb8        
        float m_flJumpStartCycle; // 0xbc        
        float m_flJumpEndCycle; // 0xc0        
        animgraphlib::JumpCorrectionMethod m_eCorrectionMethod; // 0xc4        
        bool m_bTranslationAxis[3]; // 0xc8        
        bool m_bScaleSpeed; // 0xcb        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CJumpHelperUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CJumpHelperUpdateNode) == 0xd0);
};
