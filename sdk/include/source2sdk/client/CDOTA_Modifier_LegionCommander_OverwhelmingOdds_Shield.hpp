#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield : public client::CDOTA_Buff
    {
    public:
        int32_t m_nDamageAbsorbed; // 0x16e8        
        bool m_bStartedTimer; // 0x16ec        
        [[maybe_unused]] std::uint8_t pad_0x16ed[0x3]; // 0x16ed
        entity2::GameTime_t m_timeLastDamage; // 0x16f0        
        int32_t bonus_hp_regen; // 0x16f4        
        int32_t shield; // 0x16f8        
        int32_t total_shield; // 0x16fc        
        float restore_time; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield) == 0x1708);
};
