#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SelectivelyEnableChildren : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nChildGroupID; // 0x1c8            
            // metadata: MPropertyFriendlyName "first child to enable"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nFirstChild; // 0x328            
            // metadata: MPropertyFriendlyName "# of children to enable"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x488            
            // metadata: MPropertyFriendlyName "play endcap when children are removed"
            bool m_bPlayEndcapOnStop; // 0x5e8            
            // metadata: MPropertyFriendlyName "destroy particles immediately when child is removed"
            bool m_bDestroyImmediately; // 0x5e9            
            uint8_t _pad05ea[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SelectivelyEnableChildren because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SelectivelyEnableChildren) == 0x5f0);
    };
};
