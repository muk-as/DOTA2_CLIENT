#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x1d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_InheritFromPeerSystem : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "read field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0            
            // metadata: MPropertyFriendlyName "written field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c4            
            // metadata: MPropertyFriendlyName "particle neighbor increment amount"
            std::int32_t m_nIncrement; // 0x1c8            
            // metadata: MPropertyFriendlyName "group id"
            std::int32_t m_nGroupID; // 0x1cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_InheritFromPeerSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_InheritFromPeerSystem) == 0x1d0);
    };
};
