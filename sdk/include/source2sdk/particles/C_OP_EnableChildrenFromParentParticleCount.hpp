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
        // Size: 0x338
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_EnableChildrenFromParentParticleCount : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x1c8            
            // metadata: MPropertyFriendlyName "first child to enable"
            std::int32_t m_nFirstChild; // 0x1cc            
            // metadata: MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1d0            
            // metadata: MPropertyFriendlyName "remove children when particle count lowers"
            bool m_bDisableChildren; // 0x330            
            // metadata: MPropertyFriendlyName "play endcap when children are removed"
            // metadata: MPropertySuppressExpr "!m_bDisableChildren"
            bool m_bPlayEndcapOnStop; // 0x331            
            // metadata: MPropertyFriendlyName "destroy particles immediately when child is removed"
            // metadata: MPropertySuppressExpr "!m_bDisableChildren"
            bool m_bDestroyImmediately; // 0x332            
            uint8_t _pad0333[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_EnableChildrenFromParentParticleCount because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_EnableChildrenFromParentParticleCount) == 0x338);
    };
};
