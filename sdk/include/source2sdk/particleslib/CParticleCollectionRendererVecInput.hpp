#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x678
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyCustomEditor "CollectionRendererVecInput()"
        #pragma pack(push, 1)
        class CParticleCollectionRendererVecInput : public source2sdk::particleslib::CParticleCollectionVecInput
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::particleslib::CParticleCollectionRendererVecInput) == 0x678);
    };
};
