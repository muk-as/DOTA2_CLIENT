#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1c10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int32 m_vecInitialHeroKillBitmask"
    // static metadata: MNetworkVarNames "int32 m_vecInGameHeroKillBitmask"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_SkeletonKing : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        int32_t m_nSkeletonWarriors; // 0x1be0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSKArcanaProgressChanged"
        int32_t m_vecInitialHeroKillBitmask[5]; // 0x1be4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSKArcanaProgressChanged"
        int32_t m_vecInGameHeroKillBitmask[5]; // 0x1bf8        
        [[maybe_unused]] std::uint8_t pad_0x1c0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_SkeletonKing because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_SkeletonKing) == 0x1c10);
};
