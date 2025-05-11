#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"

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
        // Size: 0x1e0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointToCenter : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point number to set"
            std::int32_t m_nCP1; // 0x1c8            
            // metadata: MPropertyFriendlyName "center offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecCP1Pos; // 0x1cc            
            // metadata: MPropertyFriendlyName "use average particle position"
            // metadata: MVectorIsCoordinate
            bool m_bUseAvgParticlePos; // 0x1d8            
            uint8_t _pad01d9[0x3]; // 0x1d9
            // metadata: MPropertyFriendlyName "set parent"
            source2sdk::particles::ParticleParentSetMode_t m_nSetParent; // 0x1dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToCenter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToCenter) == 0x1e0);
    };
};
