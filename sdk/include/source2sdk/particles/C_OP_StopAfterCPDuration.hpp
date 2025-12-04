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
        class C_OP_StopAfterCPDuration : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "duration at which to stop"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDuration; // 0x_            
            // metadata: MPropertyFriendlyName "destroy all particles immediately"
            bool m_bDestroyImmediately; // 0x_            
            // metadata: MPropertyFriendlyName "play end cap effect"
            bool m_bPlayEndCap; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_StopAfterCPDuration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_StopAfterCPDuration) == 0x_);
    };
};
