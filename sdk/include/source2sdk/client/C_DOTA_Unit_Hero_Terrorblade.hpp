#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1ba8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint32 m_nArcanaColor"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Terrorblade : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nFXDeath; // 0x1b90        
        [[maybe_unused]] std::uint8_t pad_0x1b94[0x4]; // 0x1b94
        CUtlString m_szResponseCriteria; // 0x1b98        
        // metadata: MNetworkEnable
        uint32_t m_nArcanaColor; // 0x1ba0        
        [[maybe_unused]] std::uint8_t pad_0x1ba4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Terrorblade because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Terrorblade) == 0x1ba8);
};
