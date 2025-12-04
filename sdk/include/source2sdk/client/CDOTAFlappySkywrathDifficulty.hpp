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
        class CDOTAFlappySkywrathDifficulty
        {
        public:
            source2sdk::client::CDOTAFlappySkywrathCharacter characterPlayer; // 0x_            
            source2sdk::client::CDOTAFlappySkywrathCharacter characterOpponent; // 0x_            
            float flRaceDistance; // 0x_            
            float flBaseObstacleDistanceInterval; // 0x_            
            float flBaseObstacleGapDistance; // 0x_            
            float flMinObstacleGapDistance; // 0x_            
            float flCollisionSpeedReduction; // 0x_            
            float flLandedMaxSpeed; // 0x_            
            float flCollisionInputCooldown; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, characterPlayer) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, characterOpponent) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flRaceDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flBaseObstacleDistanceInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flBaseObstacleGapDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flMinObstacleGapDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flCollisionSpeedReduction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flLandedMaxSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFlappySkywrathDifficulty, flCollisionInputCooldown) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFlappySkywrathDifficulty) == 0x_);
    };
};
