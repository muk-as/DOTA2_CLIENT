#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        #pragma pack(push, 1)
        struct NeutralSpawnBoxes_t
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::mathlib_extended::AABB_t neutralSpawnBoxes; // 0x0            
            // metadata: MNetworkEnable
            Vector vSpawnBoxOrigin; // 0x18            
            uint8_t _pad0024[0x4]; // 0x24
            // metadata: MNetworkEnable
            CUtlString strCampName; // 0x28            
            // metadata: MNetworkEnable
            CEntityIndex iSpawnerEntIndex; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t nCampType; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, neutralSpawnBoxes) == 0x0);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, vSpawnBoxOrigin) == 0x18);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, strCampName) == 0x28);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, iSpawnerEntIndex) == 0x30);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, nCampType) == 0x34);
        
        static_assert(sizeof(source2sdk::client::NeutralSpawnBoxes_t) == 0x38);
    };
};
