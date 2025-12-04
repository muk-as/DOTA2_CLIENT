#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticlePreviewBodyGroup_t.hpp"
#include "source2sdk/particles/PetGroundType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticlePreviewState_t
        {
        public:
            CUtlString m_previewModel; // 0x_            
            std::uint32_t m_nModSpecificData; // 0x_            
            source2sdk::particles::PetGroundType_t m_groundType; // 0x_            
            CUtlString m_sequenceName; // 0x_            
            std::int32_t m_nFireParticleOnSequenceFrame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_hitboxSetName; // 0x_            
            CUtlString m_materialGroupName; // 0x_            
            // m_vecBodyGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ParticlePreviewBodyGroup_t> m_vecBodyGroups;
            char m_vecBodyGroups[0x_]; // 0x_            
            float m_flPlaybackSpeed; // 0x_            
            float m_flParticleSimulationRate; // 0x_            
            bool m_bShouldDrawHitboxes; // 0x_            
            bool m_bShouldDrawAttachments; // 0x_            
            bool m_bShouldDrawAttachmentNames; // 0x_            
            bool m_bShouldDrawControlPointAxes; // 0x_            
            bool m_bAnimationNonLooping; // 0x_            
            bool m_bSequenceNameIsAnimClipPath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vecPreviewGravity; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_previewModel) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_nModSpecificData) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_groundType) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_sequenceName) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_nFireParticleOnSequenceFrame) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_hitboxSetName) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_materialGroupName) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_vecBodyGroups) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_flPlaybackSpeed) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_flParticleSimulationRate) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_bShouldDrawHitboxes) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_bShouldDrawAttachments) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_bShouldDrawAttachmentNames) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_bShouldDrawControlPointAxes) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_bAnimationNonLooping) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_bSequenceNameIsAnimClipPath) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticlePreviewState_t, m_vecPreviewGravity) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::ParticlePreviewState_t) == 0x_);
    };
};
