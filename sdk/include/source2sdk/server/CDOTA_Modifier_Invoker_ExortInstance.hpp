#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invoker_Instance.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_ExortInstance : public server::CDOTA_Modifier_Invoker_Instance
    {
    public:
        int32_t bonus_damage_per_instance; // 0x1708        
        float magic_amp; // 0x170c        
        float resist_debuff_duration; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1718        
        char* m_pSlotName; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ExortInstance because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_ExortInstance) == 0x1738);
};
