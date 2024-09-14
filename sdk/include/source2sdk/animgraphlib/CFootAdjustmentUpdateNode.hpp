#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    class CFootAdjustmentUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        // m_clips has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::HSequence> m_clips;
        char m_clips[0x18]; // 0x70        
        animgraphlib::CPoseHandle m_hBasePoseCacheHandle; // 0x88        
        animgraphlib::CAnimParamHandle m_facingTarget; // 0x8c        
        [[maybe_unused]] std::uint8_t pad_0x8e[0x2]; // 0x8e
        float m_flTurnTimeMin; // 0x90        
        float m_flTurnTimeMax; // 0x94        
        float m_flStepHeightMax; // 0x98        
        float m_flStepHeightMaxAngle; // 0x9c        
        bool m_bResetChild; // 0xa0        
        bool m_bAnimationDriven; // 0xa1        
        [[maybe_unused]] std::uint8_t pad_0xa2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootAdjustmentUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFootAdjustmentUpdateNode) == 0xa8);
};
