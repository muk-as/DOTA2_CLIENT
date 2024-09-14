#pragma once
#include "source2sdk/particles/ParticleDetailLevel_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ParticleChildrenInfo_t
    {
    public:
        // metadata: MPropertySuppressField
        // m_ChildRef has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_ChildRef;
        char m_ChildRef[0x8]; // 0x0        
        // metadata: MPropertyFriendlyName "delay"
        float m_flDelay; // 0x8        
        // metadata: MPropertyFriendlyName "end cap effect"
        bool m_bEndCap; // 0xc        
        // metadata: MPropertySuppressField
        bool m_bDisableChild; // 0xd        
        [[maybe_unused]] std::uint8_t pad_0x0e[0x2]; // 0xe
        // metadata: MPropertyFriendlyName "disable at detail levels below"
        particles::ParticleDetailLevel_t m_nDetailLevel; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticleChildrenInfo_t, m_ChildRef) == 0x0);
    static_assert(offsetof(ParticleChildrenInfo_t, m_flDelay) == 0x8);
    static_assert(offsetof(ParticleChildrenInfo_t, m_bEndCap) == 0xc);
    static_assert(offsetof(ParticleChildrenInfo_t, m_bDisableChild) == 0xd);
    static_assert(offsetof(ParticleChildrenInfo_t, m_nDetailLevel) == 0x10);
    
    static_assert(sizeof(ParticleChildrenInfo_t) == 0x20);
};
