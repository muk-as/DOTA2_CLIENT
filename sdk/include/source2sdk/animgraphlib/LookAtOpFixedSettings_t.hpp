#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/LookAtBone_t.hpp"
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
    // Size: 0xc0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct LookAtOpFixedSettings_t
    {
    public:
        modellib::CAnimAttachment m_attachment; // 0x0        
        animgraphlib::CAnimInputDamping m_damping; // 0x80        
        // m_bones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::LookAtBone_t> m_bones;
        char m_bones[0x18]; // 0x90        
        float m_flYawLimit; // 0xa8        
        float m_flPitchLimit; // 0xac        
        float m_flHysteresisInnerAngle; // 0xb0        
        float m_flHysteresisOuterAngle; // 0xb4        
        bool m_bRotateYawForward; // 0xb8        
        bool m_bMaintainUpDirection; // 0xb9        
        bool m_bTargetIsPosition; // 0xba        
        bool m_bUseHysteresis; // 0xbb        
        [[maybe_unused]] std::uint8_t pad_0xbc[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(LookAtOpFixedSettings_t, m_attachment) == 0x0);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_damping) == 0x80);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_bones) == 0x90);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_flYawLimit) == 0xa8);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_flPitchLimit) == 0xac);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_flHysteresisInnerAngle) == 0xb0);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_flHysteresisOuterAngle) == 0xb4);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_bRotateYawForward) == 0xb8);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_bMaintainUpDirection) == 0xb9);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_bTargetIsPosition) == 0xba);
    static_assert(offsetof(LookAtOpFixedSettings_t, m_bUseHysteresis) == 0xbb);
    
    static_assert(sizeof(LookAtOpFixedSettings_t) == 0xc0);
};
