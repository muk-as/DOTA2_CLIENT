#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x748
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Visage_SummonFamiliars : public client::C_DOTABaseAbility
    {
    public:
        char szUnitName[260]; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x704[0x4]; // 0x704
        // m_hExistingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hExistingUnits;
        char m_hExistingUnits[0x18]; // 0x708        
        [[maybe_unused]] std::uint8_t pad_0x720[0x28];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Visage_SummonFamiliars because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Visage_SummonFamiliars) == 0x748);
};
