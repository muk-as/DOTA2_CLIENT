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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_EnableChildrenFromParentParticleCount : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x_            
            // metadata: MPropertyFriendlyName "first child to enable"
            std::int32_t m_nFirstChild; // 0x_            
            // metadata: MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x_            
            // metadata: MPropertyFriendlyName "remove children when particle count lowers"
            bool m_bDisableChildren; // 0x_            
            // metadata: MPropertyFriendlyName "play endcap when children are removed"
            // metadata: MPropertySuppressExpr "!m_bDisableChildren"
            bool m_bPlayEndcapOnStop; // 0x_            
            // metadata: MPropertyFriendlyName "destroy particles immediately when child is removed"
            // metadata: MPropertySuppressExpr "!m_bDisableChildren"
            bool m_bDestroyImmediately; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_EnableChildrenFromParentParticleCount because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_EnableChildrenFromParentParticleCount) == 0x_);
    };
};
