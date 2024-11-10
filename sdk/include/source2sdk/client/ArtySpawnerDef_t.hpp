#pragma once
#include "source2sdk/client/ArtyGameObjectDef_t.hpp"
#include "source2sdk/client/EArtyTeam.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ArtySpawnerDef_t : public client::ArtyGameObjectDef_t
    {
    public:
        float m_flInitialDelay; // 0xb0        
        float m_flDelayBetween; // 0xb4        
        int32_t m_nNumToSpawn; // 0xb8        
        client::EArtyTeam m_eSpawnedUnitTeam; // 0xbc        
        [[maybe_unused]] std::uint8_t pad_0xbd[0x3]; // 0xbd
        CUtlString m_szGameObject; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in ArtySpawnerDef_t because it is not a standard-layout class
    static_assert(sizeof(ArtySpawnerDef_t) == 0xd0);
};
