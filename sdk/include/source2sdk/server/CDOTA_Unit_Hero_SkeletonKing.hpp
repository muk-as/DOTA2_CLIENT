#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1ec0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int32 m_vecInitialHeroKillBitmask"
    // static metadata: MNetworkVarNames "int32 m_vecInGameHeroKillBitmask"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_SkeletonKing : public server::CDOTA_BaseNPC_Hero
    {
    public:
        int32_t m_nSkeletonWarriors; // 0x1e90        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSKArcanaProgressChanged"
        int32_t m_vecInitialHeroKillBitmask[5]; // 0x1e94        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSKArcanaProgressChanged"
        int32_t m_vecInGameHeroKillBitmask[5]; // 0x1ea8        
        [[maybe_unused]] std::uint8_t pad_0x1ebc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_SkeletonKing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_SkeletonKing) == 0x1ec0);
};
