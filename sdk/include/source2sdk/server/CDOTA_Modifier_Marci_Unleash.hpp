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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Unleash : public client::CDOTA_Buff
    {
    public:
        float time_between_flurries; // 0x1708        
        int32_t charges_per_flurry; // 0x170c        
        int32_t flurry_charge_increment; // 0x1710        
        int32_t bonus_movespeed; // 0x1714        
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Unleash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Unleash) == 0x1730);
};
