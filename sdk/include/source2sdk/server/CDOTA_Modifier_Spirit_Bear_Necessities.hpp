#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_Ability_Lone_Druid_Bear_Necessities;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spirit_Bear_Necessities : public client::CDOTA_Buff
    {
    public:
        // m_hAbilityBearNecessities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Ability_Lone_Druid_Bear_Necessities> m_hAbilityBearNecessities;
        char m_hAbilityBearNecessities[0x4]; // 0x16e8        
        int32_t item_slots; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spirit_Bear_Necessities because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spirit_Bear_Necessities) == 0x16f0);
};
