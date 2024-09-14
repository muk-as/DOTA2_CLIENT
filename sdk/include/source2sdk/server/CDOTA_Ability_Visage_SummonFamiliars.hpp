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
    // Size: 0x6e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Visage_SummonFamiliars : public server::CDOTABaseAbility
    {
    public:
        char szUnitName[260]; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x6a4[0x4]; // 0x6a4
        // m_hExistingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hExistingUnits;
        char m_hExistingUnits[0x18]; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6c0[0x28];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Visage_SummonFamiliars because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Visage_SummonFamiliars) == 0x6e8);
};
