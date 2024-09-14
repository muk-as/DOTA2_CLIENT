#pragma once
#include "source2sdk/particles/ParticlePreviewBodyGroup_t.hpp"
#include "source2sdk/particles/PetGroundType_t.hpp"
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
    // Size: 0x68
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ParticlePreviewState_t
    {
    public:
        CUtlString m_previewModel; // 0x0        
        uint32_t m_nModSpecificData; // 0x8        
        particles::PetGroundType_t m_groundType; // 0xc        
        CUtlString m_sequenceName; // 0x10        
        int32_t m_nFireParticleOnSequenceFrame; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        CUtlString m_hitboxSetName; // 0x20        
        CUtlString m_materialGroupName; // 0x28        
        // m_vecBodyGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::ParticlePreviewBodyGroup_t> m_vecBodyGroups;
        char m_vecBodyGroups[0x18]; // 0x30        
        float m_flPlaybackSpeed; // 0x48        
        float m_flParticleSimulationRate; // 0x4c        
        bool m_bShouldDrawHitboxes; // 0x50        
        bool m_bShouldDrawAttachments; // 0x51        
        bool m_bShouldDrawAttachmentNames; // 0x52        
        bool m_bShouldDrawControlPointAxes; // 0x53        
        bool m_bAnimationNonLooping; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3]; // 0x55
        Vector m_vecPreviewGravity; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticlePreviewState_t, m_previewModel) == 0x0);
    static_assert(offsetof(ParticlePreviewState_t, m_nModSpecificData) == 0x8);
    static_assert(offsetof(ParticlePreviewState_t, m_groundType) == 0xc);
    static_assert(offsetof(ParticlePreviewState_t, m_sequenceName) == 0x10);
    static_assert(offsetof(ParticlePreviewState_t, m_nFireParticleOnSequenceFrame) == 0x18);
    static_assert(offsetof(ParticlePreviewState_t, m_hitboxSetName) == 0x20);
    static_assert(offsetof(ParticlePreviewState_t, m_materialGroupName) == 0x28);
    static_assert(offsetof(ParticlePreviewState_t, m_vecBodyGroups) == 0x30);
    static_assert(offsetof(ParticlePreviewState_t, m_flPlaybackSpeed) == 0x48);
    static_assert(offsetof(ParticlePreviewState_t, m_flParticleSimulationRate) == 0x4c);
    static_assert(offsetof(ParticlePreviewState_t, m_bShouldDrawHitboxes) == 0x50);
    static_assert(offsetof(ParticlePreviewState_t, m_bShouldDrawAttachments) == 0x51);
    static_assert(offsetof(ParticlePreviewState_t, m_bShouldDrawAttachmentNames) == 0x52);
    static_assert(offsetof(ParticlePreviewState_t, m_bShouldDrawControlPointAxes) == 0x53);
    static_assert(offsetof(ParticlePreviewState_t, m_bAnimationNonLooping) == 0x54);
    static_assert(offsetof(ParticlePreviewState_t, m_vecPreviewGravity) == 0x58);
    
    static_assert(sizeof(ParticlePreviewState_t) == 0x68);
};
