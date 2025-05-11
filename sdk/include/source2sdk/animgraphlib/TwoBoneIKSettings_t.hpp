#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/IkEndEffectorType.hpp"
#include "source2sdk/animgraphlib/IkTargetType.hpp"
#include "source2sdk/modellib/CAnimAttachment.hpp"

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
            source2sdk::animgraphlib::IkEndEffectorType m_endEffectorType; // 0x0            
            uint8_t _pad0004[0xc]; // 0x4
            source2sdk::modellib::CAnimAttachment m_endEffectorAttachment; // 0x10            
            source2sdk::animgraphlib::IkTargetType m_targetType; // 0x90            
            uint8_t _pad0094[0xc]; // 0x94
            source2sdk::modellib::CAnimAttachment m_targetAttachment; // 0xa0            
            std::int32_t m_targetBoneIndex; // 0x120            
            source2sdk::animgraphlib::CAnimParamHandle m_hPositionParam; // 0x124            
            source2sdk::animgraphlib::CAnimParamHandle m_hRotationParam; // 0x126            
            bool m_bAlwaysUseFallbackHinge; // 0x128            
            uint8_t _pad0129[0x7]; // 0x129
            VectorAligned m_vLsFallbackHingeAxis; // 0x130            
            std::int32_t m_nFixedBoneIndex; // 0x140            
            std::int32_t m_nMiddleBoneIndex; // 0x144            
            std::int32_t m_nEndBoneIndex; // 0x148            
            bool m_bMatchTargetOrientation; // 0x14c            
            bool m_bConstrainTwist; // 0x14d            
            uint8_t _pad014e[0x2]; // 0x14e
            float m_flMaxTwist; // 0x150            
            uint8_t _pad0154[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_endEffectorType) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_endEffectorAttachment) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_targetType) == 0x90);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_targetAttachment) == 0xa0);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_targetBoneIndex) == 0x120);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_hPositionParam) == 0x124);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_hRotationParam) == 0x126);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_bAlwaysUseFallbackHinge) == 0x128);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_vLsFallbackHingeAxis) == 0x130);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_nFixedBoneIndex) == 0x140);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_nMiddleBoneIndex) == 0x144);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_nEndBoneIndex) == 0x148);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_bMatchTargetOrientation) == 0x14c);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_bConstrainTwist) == 0x14d);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_flMaxTwist) == 0x150);
        
        static_assert(sizeof(source2sdk::animgraphlib::TwoBoneIKSettings_t) == 0x160);
    };
};
