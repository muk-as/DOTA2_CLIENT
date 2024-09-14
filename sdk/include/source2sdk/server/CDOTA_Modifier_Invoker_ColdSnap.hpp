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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_ColdSnap : public client::CDOTA_Buff
    {
    public:
        float freeze_damage; // 0x16e8        
        float freeze_duration; // 0x16ec        
        float freeze_cooldown; // 0x16f0        
        float damage_trigger; // 0x16f4        
        float spell_lifesteal; // 0x16f8        
        float spell_amp; // 0x16fc        
        float freeze_heal; // 0x1700        
        int32_t nQuasApplications; // 0x1704        
        int32_t nExortApplications; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        server::CountdownTimer m_freezeCooldownTimer; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ColdSnap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_ColdSnap) == 0x1728);
};
