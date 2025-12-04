#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/LookAtBone_t.hpp"
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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct LookAtOpFixedSettings_t
        {
        public:
            source2sdk::modellib::CAnimAttachment m_attachment; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            // m_bones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::LookAtBone_t> m_bones;
            char m_bones[0x_]; // 0x_            
            float m_flYawLimit; // 0x_            
            float m_flPitchLimit; // 0x_            
            float m_flHysteresisInnerAngle; // 0x_            
            float m_flHysteresisOuterAngle; // 0x_            
            bool m_bRotateYawForward; // 0x_            
            bool m_bMaintainUpDirection; // 0x_            
            bool m_bTargetIsPosition; // 0x_            
            bool m_bUseHysteresis; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_attachment) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_damping) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bones) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flYawLimit) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flPitchLimit) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flHysteresisInnerAngle) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flHysteresisOuterAngle) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bRotateYawForward) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bMaintainUpDirection) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bTargetIsPosition) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bUseHysteresis) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::LookAtOpFixedSettings_t) == 0x_);
    };
};
