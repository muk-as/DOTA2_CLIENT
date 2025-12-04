#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CPathParameters.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // static metadata: MParticleMinVersion "8"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateSequentialPathV2 : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "maximum distance"
            source2sdk::particleslib::CPerParticleFloatInput m_fMaxDistance; // 0x_            
            // metadata: MPropertyFriendlyName "particles to map from start to end"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flNumToAssign; // 0x_            
            // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
            bool m_bLoop; // 0x_            
            // metadata: MPropertyFriendlyName "use sequential CP pairs between start and end point"
            bool m_bCPPairs; // 0x_            
            // metadata: MPropertyFriendlyName "save offset"
            bool m_bSaveOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::particles::CPathParameters m_PathParams; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateSequentialPathV2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateSequentialPathV2) == 0x_);
    };
};
