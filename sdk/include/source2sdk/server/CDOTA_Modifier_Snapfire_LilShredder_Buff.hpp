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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_LilShredder_Buff : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8]; // 0x1708
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1710        
        int32_t m_nIsActive; // 0x1728        
        bool m_bBonusAttack; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x172d[0x3]; // 0x172d
        int32_t attack_range_bonus; // 0x1730        
        int32_t buffed_attacks; // 0x1734        
        float base_attack_time; // 0x1738        
        int32_t attack_speed_bonus; // 0x173c        
        float armor_duration; // 0x1740        
        int32_t extra_targets; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_LilShredder_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_LilShredder_Buff) == 0x1748);
};
