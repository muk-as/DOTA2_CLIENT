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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker : public client::CDOTA_Buff
    {
    public:
        int32_t remnant_watch_radius; // 0x16e8        
        entity2::GameTime_t m_flLastDamageTick; // 0x16ec        
        float damage_tick_rate; // 0x16f0        
        float flDamage; // 0x16f4        
        bool m_bPiercesCreeps; // 0x16f8        
        bool bIsArtifice; // 0x16f9        
        [[maybe_unused]] std::uint8_t pad_0x16fa[0x2]; // 0x16fa
        float artifice_pct_effectiveness; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker) == 0x1700);
};
