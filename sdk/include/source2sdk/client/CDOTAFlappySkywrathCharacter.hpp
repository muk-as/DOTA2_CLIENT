#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFlappySkywrathCharacter
        {
        public:
            float flInitialSpeed; // 0x_            
            float flMaxSpeed; // 0x_            
            float flAcceleration; // 0x_            
            float flActionCooldown; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathCharacter, flInitialSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathCharacter, flMaxSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathCharacter, flAcceleration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathCharacter, flActionCooldown) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathCharacter) == 0x_);
    };
};
