#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
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
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDirectionalBlendUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x4]; // 0x58
        animationsystem::HSequence m_hSequences[8]; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4]; // 0x7c
        animgraphlib::CAnimInputDamping m_damping; // 0x80        
        animgraphlib::AnimValueSource m_blendValueSource; // 0x90        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x94        
        [[maybe_unused]] std::uint8_t pad_0x96[0x2]; // 0x96
        float m_playbackSpeed; // 0x98        
        float m_duration; // 0x9c        
        bool m_bLoop; // 0xa0        
        bool m_bLockBlendOnReset; // 0xa1        
        [[maybe_unused]] std::uint8_t pad_0xa2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDirectionalBlendUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CDirectionalBlendUpdateNode) == 0xa8);
};
