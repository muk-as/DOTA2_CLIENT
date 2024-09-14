#pragma once
#include "source2sdk/physicslib/RnSoftbodyCapsule_t.hpp"
#include "source2sdk/physicslib/RnSoftbodyParticle_t.hpp"
#include "source2sdk/physicslib/RnSoftbodySpring_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x90
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PhysSoftbodyDesc_t
    {
    public:
        // m_ParticleBoneHash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_ParticleBoneHash;
        char m_ParticleBoneHash[0x18]; // 0x0        
        // m_Particles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnSoftbodyParticle_t> m_Particles;
        char m_Particles[0x18]; // 0x18        
        // m_Springs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnSoftbodySpring_t> m_Springs;
        char m_Springs[0x18]; // 0x30        
        // m_Capsules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<physicslib::RnSoftbodyCapsule_t> m_Capsules;
        char m_Capsules[0x18]; // 0x48        
        // m_InitPose has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CTransform> m_InitPose;
        char m_InitPose[0x18]; // 0x60        
        // m_ParticleBoneName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_ParticleBoneName;
        char m_ParticleBoneName[0x18]; // 0x78        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PhysSoftbodyDesc_t, m_ParticleBoneHash) == 0x0);
    static_assert(offsetof(PhysSoftbodyDesc_t, m_Particles) == 0x18);
    static_assert(offsetof(PhysSoftbodyDesc_t, m_Springs) == 0x30);
    static_assert(offsetof(PhysSoftbodyDesc_t, m_Capsules) == 0x48);
    static_assert(offsetof(PhysSoftbodyDesc_t, m_InitPose) == 0x60);
    static_assert(offsetof(PhysSoftbodyDesc_t, m_ParticleBoneName) == 0x78);
    
    static_assert(sizeof(PhysSoftbodyDesc_t) == 0x90);
};
