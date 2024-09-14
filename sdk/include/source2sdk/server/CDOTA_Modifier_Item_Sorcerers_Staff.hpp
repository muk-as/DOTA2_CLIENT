#pragma once
#include "source2sdk/server/CDOTA_Buff_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Sorcerers_Staff : public server::CDOTA_Buff_Item
    {
    public:
        int32_t mana_regen_amp; // 0x16e8        
        int32_t spell_amp_creeps; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Sorcerers_Staff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Sorcerers_Staff) == 0x16f0);
};
