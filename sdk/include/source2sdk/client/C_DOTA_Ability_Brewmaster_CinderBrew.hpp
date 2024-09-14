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
    class C_DOTA_Ability_Brewmaster_CinderBrew : public client::C_DOTABaseAbility
    {
    public:
        // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hUnitsHit;
        char m_hUnitsHit[0x18]; // 0x5d8        
        float duration; // 0x5f0        
        int32_t barrel_impact_damage; // 0x5f4        
        int32_t barrel_width; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Brewmaster_CinderBrew because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Brewmaster_CinderBrew) == 0x608);
};
