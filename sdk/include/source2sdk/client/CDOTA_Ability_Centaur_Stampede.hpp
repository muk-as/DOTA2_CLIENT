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
    class CDOTA_Ability_Centaur_Stampede : public client::C_DOTABaseAbility
    {
    public:
        float duration; // 0x5d8        
        int32_t base_damage; // 0x5dc        
        float strength_damage; // 0x5e0        
        float slow_duration; // 0x5e4        
        float scepter_bonus_duration; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Centaur_Stampede because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Centaur_Stampede) == 0x608);
};
