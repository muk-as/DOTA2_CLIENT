#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SurvivorsParticleID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSurvivorsAttackParticleInfo
        {
        public:
            source2sdk::client::SurvivorsParticleID_t unParticleID; // 0x_            
            float flTimeLeft; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsAttackParticleInfo, unParticleID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsAttackParticleInfo, flTimeLeft) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsAttackParticleInfo) == 0x_);
    };
};
