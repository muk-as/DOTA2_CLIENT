#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        mathlib_extended::AABB_t neutralSpawnBoxes; // 0x0        
        // metadata: MNetworkEnable
        Vector vSpawnBoxOrigin; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        // metadata: MNetworkEnable
        CUtlString strCampName; // 0x28        
        // metadata: MNetworkEnable
        CEntityIndex iSpawnerEntIndex; // 0x30        
        // metadata: MNetworkEnable
        int32_t nCampType; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NeutralSpawnBoxes_t, neutralSpawnBoxes) == 0x0);
    static_assert(offsetof(NeutralSpawnBoxes_t, vSpawnBoxOrigin) == 0x18);
    static_assert(offsetof(NeutralSpawnBoxes_t, strCampName) == 0x28);
    static_assert(offsetof(NeutralSpawnBoxes_t, iSpawnerEntIndex) == 0x30);
    static_assert(offsetof(NeutralSpawnBoxes_t, nCampType) == 0x34);
    
    static_assert(sizeof(NeutralSpawnBoxes_t) == 0x38);
};
