#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/IkEndEffectorType.hpp"
#include "source2sdk/animgraphlib/IkTargetType.hpp"
#include "source2sdk/modellib/CAnimAttachment.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x160
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct TwoBoneIKSettings_t
    {
    public:
        animgraphlib::IkEndEffectorType m_endEffectorType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc]; // 0x4
        modellib::CAnimAttachment m_endEffectorAttachment; // 0x10        
        animgraphlib::IkTargetType m_targetType; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x94[0xc]; // 0x94
        modellib::CAnimAttachment m_targetAttachment; // 0xa0        
        int32_t m_targetBoneIndex; // 0x120        
        animgraphlib::CAnimParamHandle m_hPositionParam; // 0x124        
        animgraphlib::CAnimParamHandle m_hRotationParam; // 0x126        
        bool m_bAlwaysUseFallbackHinge; // 0x128        
        [[maybe_unused]] std::uint8_t pad_0x129[0x7]; // 0x129
        VectorAligned m_vLsFallbackHingeAxis; // 0x130        
        int32_t m_nFixedBoneIndex; // 0x140        
        int32_t m_nMiddleBoneIndex; // 0x144        
        int32_t m_nEndBoneIndex; // 0x148        
        bool m_bMatchTargetOrientation; // 0x14c        
        bool m_bConstrainTwist; // 0x14d        
        [[maybe_unused]] std::uint8_t pad_0x14e[0x2]; // 0x14e
        float m_flMaxTwist; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x154[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TwoBoneIKSettings_t, m_endEffectorType) == 0x0);
    static_assert(offsetof(TwoBoneIKSettings_t, m_endEffectorAttachment) == 0x10);
    static_assert(offsetof(TwoBoneIKSettings_t, m_targetType) == 0x90);
    static_assert(offsetof(TwoBoneIKSettings_t, m_targetAttachment) == 0xa0);
    static_assert(offsetof(TwoBoneIKSettings_t, m_targetBoneIndex) == 0x120);
    static_assert(offsetof(TwoBoneIKSettings_t, m_hPositionParam) == 0x124);
    static_assert(offsetof(TwoBoneIKSettings_t, m_hRotationParam) == 0x126);
    static_assert(offsetof(TwoBoneIKSettings_t, m_bAlwaysUseFallbackHinge) == 0x128);
    static_assert(offsetof(TwoBoneIKSettings_t, m_vLsFallbackHingeAxis) == 0x130);
    static_assert(offsetof(TwoBoneIKSettings_t, m_nFixedBoneIndex) == 0x140);
    static_assert(offsetof(TwoBoneIKSettings_t, m_nMiddleBoneIndex) == 0x144);
    static_assert(offsetof(TwoBoneIKSettings_t, m_nEndBoneIndex) == 0x148);
    static_assert(offsetof(TwoBoneIKSettings_t, m_bMatchTargetOrientation) == 0x14c);
    static_assert(offsetof(TwoBoneIKSettings_t, m_bConstrainTwist) == 0x14d);
    static_assert(offsetof(TwoBoneIKSettings_t, m_flMaxTwist) == 0x150);
    
    static_assert(sizeof(TwoBoneIKSettings_t) == 0x160);
};
