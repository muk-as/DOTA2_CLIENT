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
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float health_threshold_pct; // 0x170c        
        float duration; // 0x1710        
        // m_hTombstoneSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTABaseAbility> m_hTombstoneSourceAbility;
        char m_hTombstoneSourceAbility[0x4]; // 0x1714        
        // m_hChaseUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hChaseUnit;
        char m_hChaseUnit[0x4]; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike) == 0x1720);
};
