#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/RnSoftbodyCapsule_t.hpp"
#include "source2sdk/physicslib/RnSoftbodyParticle_t.hpp"
#include "source2sdk/physicslib/RnSoftbodySpring_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PhysSoftbodyDesc_t
        {
        public:
            // m_ParticleBoneHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_ParticleBoneHash;
            char m_ParticleBoneHash[0x_]; // 0x_            
            // m_Particles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnSoftbodyParticle_t> m_Particles;
            char m_Particles[0x_]; // 0x_            
            // m_Springs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnSoftbodySpring_t> m_Springs;
            char m_Springs[0x_]; // 0x_            
            // m_Capsules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::RnSoftbodyCapsule_t> m_Capsules;
            char m_Capsules[0x_]; // 0x_            
            // m_InitPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_InitPose;
            char m_InitPose[0x_]; // 0x_            
            // m_ParticleBoneName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_ParticleBoneName;
            char m_ParticleBoneName[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::PhysSoftbodyDesc_t, m_ParticleBoneHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PhysSoftbodyDesc_t, m_Particles) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PhysSoftbodyDesc_t, m_Springs) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PhysSoftbodyDesc_t, m_Capsules) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PhysSoftbodyDesc_t, m_InitPose) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PhysSoftbodyDesc_t, m_ParticleBoneName) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::PhysSoftbodyDesc_t) == 0x_);
    };
};
