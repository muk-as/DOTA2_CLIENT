#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleDetailLevel_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        struct ParticleChildrenInfo_t
        {
        public:
            // metadata: MPropertySuppressField
            // m_ChildRef has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_ChildRef;
            char m_ChildRef[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "delay"
            float m_flDelay; // 0x_            
            // metadata: MPropertyFriendlyName "end cap effect"
            bool m_bEndCap; // 0x_            
            // metadata: MPropertySuppressField
            bool m_bDisableChild; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "disable at detail levels below"
            source2sdk::particles::ParticleDetailLevel_t m_nDetailLevel; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ParticleChildrenInfo_t, m_ChildRef) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleChildrenInfo_t, m_flDelay) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleChildrenInfo_t, m_bEndCap) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleChildrenInfo_t, m_bDisableChild) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleChildrenInfo_t, m_nDetailLevel) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::ParticleChildrenInfo_t) == 0x_);
    };
};
