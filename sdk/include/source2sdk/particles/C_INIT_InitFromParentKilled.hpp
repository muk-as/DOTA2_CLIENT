#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
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
        // Size: 0x250
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitFromParentKilled : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "field to init"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1c8            
            // metadata: MPropertyFriendlyName "event type"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x1cc            
            uint8_t _pad01d0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitFromParentKilled because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitFromParentKilled) == 0x250);
    };
};
