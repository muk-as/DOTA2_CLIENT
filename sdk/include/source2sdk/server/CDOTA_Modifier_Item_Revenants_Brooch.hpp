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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Revenants_Brooch : public server::CDOTA_Buff_Item
    {
    public:
        bool m_bScepter; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        int32_t bonus_damage; // 0x16ec        
        int32_t spell_lifesteal; // 0x16f0        
        int32_t bonus_spell_lifesteal; // 0x16f4        
        int32_t manacost_per_hit; // 0x16f8        
        bool m_bActive; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1700        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Revenants_Brooch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Revenants_Brooch) == 0x1718);
};
