#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAFlappySkywrathCharacter.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x3c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFlappySkywrathDifficulty
        {
        public:
            source2sdk::client::CDOTAFlappySkywrathCharacter characterPlayer; // 0x0            
            source2sdk::client::CDOTAFlappySkywrathCharacter characterOpponent; // 0x10            
            float flRaceDistance; // 0x20            
            float flBaseObstacleDistanceInterval; // 0x24            
            float flBaseObstacleGapDistance; // 0x28            
            float flMinObstacleGapDistance; // 0x2c            
            float flCollisionSpeedReduction; // 0x30            
            float flLandedMaxSpeed; // 0x34            
            float flCollisionInputCooldown; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, characterPlayer) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, characterOpponent) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flRaceDistance) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flBaseObstacleDistanceInterval) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flBaseObstacleGapDistance) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flMinObstacleGapDistance) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flCollisionSpeedReduction) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flLandedMaxSpeed) == 0x34);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flCollisionInputCooldown) == 0x38);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathDifficulty) == 0x3c);
    };
};
