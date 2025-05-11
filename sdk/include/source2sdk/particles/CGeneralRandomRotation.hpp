#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e8
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGeneralRandomRotation : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "rotation field"
            // metadata: MPropertyAttributeChoiceName "particlefield_rotation"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8            
            // metadata: MPropertyFriendlyName "rotation initial"
            float m_flDegrees; // 0x1cc            
            // metadata: MPropertyFriendlyName "rotation offset from initial min"
            float m_flDegreesMin; // 0x1d0            
            // metadata: MPropertyFriendlyName "rotation offset from initial max"
            float m_flDegreesMax; // 0x1d4            
            // metadata: MPropertyFriendlyName "rotation offset exponent"
            float m_flRotationRandExponent; // 0x1d8            
            // metadata: MPropertyFriendlyName "randomly flip direction"
            bool m_bRandomlyFlipDirection; // 0x1dc            
            uint8_t _pad01dd[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGeneralRandomRotation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CGeneralRandomRotation) == 0x1e8);
    };
};
