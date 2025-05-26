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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0xd0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct LookAtOpFixedSettings_t
        {
        public:
            source2sdk::modellib::CAnimAttachment m_attachment; // 0x0            
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x80            
            // m_bones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::LookAtBone_t> m_bones;
            char m_bones[0x18]; // 0x98            
            float m_flYawLimit; // 0xb0            
            float m_flPitchLimit; // 0xb4            
            float m_flHysteresisInnerAngle; // 0xb8            
            float m_flHysteresisOuterAngle; // 0xbc            
            bool m_bRotateYawForward; // 0xc0            
            bool m_bMaintainUpDirection; // 0xc1            
            bool m_bTargetIsPosition; // 0xc2            
            bool m_bUseHysteresis; // 0xc3            
            uint8_t _pad00c4[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_attachment) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_damping) == 0x80);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bones) == 0x98);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flYawLimit) == 0xb0);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flPitchLimit) == 0xb4);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flHysteresisInnerAngle) == 0xb8);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_flHysteresisOuterAngle) == 0xbc);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bRotateYawForward) == 0xc0);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bMaintainUpDirection) == 0xc1);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bTargetIsPosition) == 0xc2);
        static_assert(offsetof(source2sdk::animgraphlib::LookAtOpFixedSettings_t, m_bUseHysteresis) == 0xc3);
        
        static_assert(sizeof(source2sdk::animgraphlib::LookAtOpFixedSettings_t) == 0xd0);
    };
};
