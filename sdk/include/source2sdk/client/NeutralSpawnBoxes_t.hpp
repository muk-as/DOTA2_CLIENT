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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct NeutralSpawnBoxes_t
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::mathlib_extended::AABB_t neutralSpawnBoxes; // 0x_            
            // metadata: MNetworkEnable
            Vector vSpawnBoxOrigin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlString strCampName; // 0x_            
            // metadata: MNetworkEnable
            CEntityIndex iSpawnerEntIndex; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t nCampType; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, neutralSpawnBoxes) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, vSpawnBoxOrigin) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, strCampName) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, iSpawnerEntIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::NeutralSpawnBoxes_t, nCampType) == 0x_);
        
        static_assert(sizeof(source2sdk::client::NeutralSpawnBoxes_t) == 0x_);
    };
};
