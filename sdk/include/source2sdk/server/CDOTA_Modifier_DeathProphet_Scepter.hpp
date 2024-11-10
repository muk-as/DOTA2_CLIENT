#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class sSpiritInfo;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DeathProphet_Scepter : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        int32_t spirit_speed; // 0x170c        
        int32_t max_distance; // 0x1710        
        int32_t give_up_distance; // 0x1714        
        int32_t min_damage; // 0x1718        
        int32_t max_damage; // 0x171c        
        int32_t heal_percent; // 0x1720        
        int32_t spirit_duration; // 0x1724        
        entity2::GameTime_t m_fStartTime; // 0x1728        
        entity2::GameTime_t m_fLastThinkTime; // 0x172c        
        bool m_bExpired; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7]; // 0x1731
        client::sSpiritInfo* m_SpiritInfo; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1740[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Scepter because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DeathProphet_Scepter) == 0x1748);
};
