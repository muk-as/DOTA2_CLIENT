#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    class CDOTA_Modifier_Invoker_ColdSnap : public client::CDOTA_Buff
    {
    public:
        float freeze_damage; // 0x1708        
        float freeze_duration; // 0x170c        
        float freeze_cooldown; // 0x1710        
        float damage_trigger; // 0x1714        
        float spell_lifesteal; // 0x1718        
        float spell_amp; // 0x171c        
        float freeze_heal; // 0x1720        
        int32_t nQuasApplications; // 0x1724        
        int32_t nExortApplications; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        server::CountdownTimer m_freezeCooldownTimer; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ColdSnap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_ColdSnap) == 0x1748);
};
