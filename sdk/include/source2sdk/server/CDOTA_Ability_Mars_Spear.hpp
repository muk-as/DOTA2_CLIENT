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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Mars_Spear : public server::CDOTABaseAbility
    {
    public:
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5e0[0x8]; // 0x5e0
        int32_t damage; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // hImpaledTargetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hImpaledTargetList;
        char hImpaledTargetList[0x18]; // 0x5f0        
        int32_t m_nTargetsImpaled; // 0x608        
        int32_t m_nMaxImpaleTargets; // 0x60c        
        bool m_bHadBulwarkEnabled; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x3]; // 0x611
        Vector m_vLastTrailThinkerLocation; // 0x614        
        bool bHasStartedBurning; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x621[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Mars_Spear because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Mars_Spear) == 0x628);
};
