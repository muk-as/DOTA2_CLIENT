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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TwoBoneIKSettings_t
        {
        public:
            source2sdk::animgraphlib::IkEndEffectorType m_endEffectorType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::CAnimAttachment m_endEffectorAttachment; // 0x_            
            source2sdk::animgraphlib::IkTargetType m_targetType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::CAnimAttachment m_targetAttachment; // 0x_            
            std::int32_t m_targetBoneIndex; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hPositionParam; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hRotationParam; // 0x_            
            bool m_bAlwaysUseFallbackHinge; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            VectorAligned m_vLsFallbackHingeAxis; // 0x_            
            std::int32_t m_nFixedBoneIndex; // 0x_            
            std::int32_t m_nMiddleBoneIndex; // 0x_            
            std::int32_t m_nEndBoneIndex; // 0x_            
            bool m_bMatchTargetOrientation; // 0x_            
            bool m_bConstrainTwist; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxTwist; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_endEffectorType) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_endEffectorAttachment) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_targetType) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_targetAttachment) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_targetBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_hPositionParam) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_hRotationParam) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_bAlwaysUseFallbackHinge) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_vLsFallbackHingeAxis) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_nFixedBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_nMiddleBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_nEndBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_bMatchTargetOrientation) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_bConstrainTwist) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::TwoBoneIKSettings_t, m_flMaxTwist) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::TwoBoneIKSettings_t) == 0x_);
    };
};
