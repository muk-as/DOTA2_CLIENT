#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Mars_Spear : public server::CDOTABaseAbility
    {
    public:
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5b8[0x8]; // 0x5b8
        int32_t damage; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4]; // 0x5c4
        // hImpaledTargetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hImpaledTargetList;
        char hImpaledTargetList[0x18]; // 0x5c8        
        int32_t m_nTargetsImpaled; // 0x5e0        
        int32_t m_nMaxImpaleTargets; // 0x5e4        
        bool m_bHadBulwarkEnabled; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        Vector m_vLastTrailThinkerLocation; // 0x5ec        
        bool bHasStartedBurning; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Mars_Spear because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Mars_Spear) == 0x600);
};
