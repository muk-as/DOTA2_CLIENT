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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Shadow_Demon_Shadow_Poison : public server::CDOTABaseAbility
    {
    public:
        // m_hPoisonedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hPoisonedUnits;
        char m_hPoisonedUnits[0x18]; // 0x5a0        
        bool m_bHitDisruptedUnit; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0x3]; // 0x5b9
        float radius; // 0x5bc        
        // m_hHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitUnits;
        char m_hHitUnits[0x18]; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5d8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Shadow_Demon_Shadow_Poison because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Shadow_Demon_Shadow_Poison) == 0x5e0);
};
