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
        class C_OP_SetControlPointOrientation : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "set orientation in world space"
            bool m_bUseWorldLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "randomize"
            bool m_bRandomize; // 0x_            
            // metadata: MPropertyFriendlyName "only set orientation once"
            bool m_bSetOnce; // 0x_            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nCP; // 0x_            
            // metadata: MPropertyFriendlyName "control point to offset orientation from"
            std::int32_t m_nHeadLocation; // 0x_            
            // metadata: MPropertyFriendlyName "pitch yaw roll"
            QAngle m_vecRotation; // 0x_            
            // metadata: MPropertyFriendlyName "pitch yaw roll max"
            QAngle m_vecRotationB; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "interpolation"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointOrientation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointOrientation) == 0x_);
    };
};
