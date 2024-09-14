#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Snapfire_LilShredder_Buff : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x8]; // 0x16e8
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x16f0        
        int32_t m_nIsActive; // 0x1708        
        bool m_bBonusAttack; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        int32_t attack_range_bonus; // 0x1710        
        int32_t buffed_attacks; // 0x1714        
        float base_attack_time; // 0x1718        
        int32_t attack_speed_bonus; // 0x171c        
        float armor_duration; // 0x1720        
        int32_t extra_targets; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_LilShredder_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_LilShredder_Buff) == 0x1728);
};
