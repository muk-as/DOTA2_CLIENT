#pragma once
#include "source2sdk/client/sGlaiveInfo.hpp"
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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Luna_MoonGlaive : public server::CDOTABaseAbility
    {
    public:
        // m_vecMarkedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecMarkedUnits;
        char m_vecMarkedUnits[0x18]; // 0x5a0        
        int32_t m_iAttackIndex; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        // m_GlaiveInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sGlaiveInfo> m_GlaiveInfo;
        char m_GlaiveInfo[0x18]; // 0x5c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Luna_MoonGlaive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Luna_MoonGlaive) == 0x5d8);
};