#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"

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
        class C_OP_ModelSurfaceSnapshotGenerator : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nCPSnapshot; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "input model"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x_            
            // metadata: MPropertyFriendlyName "Recalculation Rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x_            
            // metadata: MPropertyFriendlyName "U Spacing"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flUSpacing; // 0x_            
            // metadata: MPropertyFriendlyName "V Spacing"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flVSpacing; // 0x_            
            // metadata: MPropertyFriendlyName "Surface Offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSurfaceOffset; // 0x_            
            // metadata: MPropertyFriendlyName "Set Normal"
            bool m_bSetNormal; // 0x_            
            // metadata: MPropertyFriendlyName "Set UV Up Direction (To Box Angles)"
            bool m_bSetUp; // 0x_            
            // metadata: MPropertyFriendlyName "Set Gravity Direction (To Prev Position)"
            bool m_bSetGravity; // 0x_            
            // metadata: MPropertyFriendlyName "Set UV (To Hitbox Offset)"
            bool m_bSetUV; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ModelSurfaceSnapshotGenerator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ModelSurfaceSnapshotGenerator) == 0x_);
    };
};
