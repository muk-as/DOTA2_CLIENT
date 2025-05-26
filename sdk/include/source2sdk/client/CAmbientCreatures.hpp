#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTAWorldParticleSystem.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CAmbientCreatures : public source2sdk::client::C_DOTAWorldParticleSystem
        {
        public:
            CUtlString m_szAnimationName; // 0x9b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAmbientCreatures because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAmbientCreatures) == 0x9c0);
    };
};
