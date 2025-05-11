#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CPathParameters.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x220
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MaintainSequentialPath : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "maximum distance"
            float m_fMaxDistance; // 0x1c0            
            // metadata: MPropertyFriendlyName "particles to map from start to end"
            float m_flNumToAssign; // 0x1c4            
            // metadata: MPropertyFriendlyName "cohesion strength"
            float m_flCohesionStrength; // 0x1c8            
            // metadata: MPropertyFriendlyName "control point movement tolerance"
            float m_flTolerance; // 0x1cc            
            // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
            bool m_bLoop; // 0x1d0            
            // metadata: MPropertyFriendlyName "use existing particle count"
            bool m_bUseParticleCount; // 0x1d1            
            uint8_t _pad01d2[0xe]; // 0x1d2
            source2sdk::particles::CPathParameters m_PathParams; // 0x1e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MaintainSequentialPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MaintainSequentialPath) == 0x220);
    };
};
