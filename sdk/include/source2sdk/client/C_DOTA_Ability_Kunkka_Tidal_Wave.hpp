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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Kunkka_Tidal_Wave : public client::C_DOTABaseAbility
    {
    public:
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5d8        
        Vector m_vStart; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Kunkka_Tidal_Wave because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Kunkka_Tidal_Wave) == 0x608);
};
