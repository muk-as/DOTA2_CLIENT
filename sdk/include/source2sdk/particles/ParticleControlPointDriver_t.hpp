#pragma once
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ParticleControlPointDriver_t
    {
    public:
        int32_t m_iControlPoint; // 0x0        
        animationsystem::ParticleAttachment_t m_iAttachType; // 0x4        
        CUtlString m_attachmentName; // 0x8        
        Vector m_vecOffset; // 0x10        
        QAngle m_angOffset; // 0x1c        
        CUtlString m_entityName; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticleControlPointDriver_t, m_iControlPoint) == 0x0);
    static_assert(offsetof(ParticleControlPointDriver_t, m_iAttachType) == 0x4);
    static_assert(offsetof(ParticleControlPointDriver_t, m_attachmentName) == 0x8);
    static_assert(offsetof(ParticleControlPointDriver_t, m_vecOffset) == 0x10);
    static_assert(offsetof(ParticleControlPointDriver_t, m_angOffset) == 0x1c);
    static_assert(offsetof(ParticleControlPointDriver_t, m_entityName) == 0x28);
    
    static_assert(sizeof(ParticleControlPointDriver_t) == 0x30);
};
