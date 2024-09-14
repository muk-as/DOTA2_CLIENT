#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_SatyrSoulstealer_ManaBurn : public client::C_DOTABaseAbility
    {
    public:
        // hNeutralTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hNeutralTarget;
        char hNeutralTarget[0x4]; // 0x5d8        
        entity2::GameTime_t m_flTimeBuffer; // 0x5dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_SatyrSoulstealer_ManaBurn because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_SatyrSoulstealer_ManaBurn) == 0x5e0);
};
