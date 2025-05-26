#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            float health_threshold_pct; // 0x187c            
            float duration; // 0x1880            
            // m_hTombstoneSourceAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTABaseAbility> m_hTombstoneSourceAbility;
            char m_hTombstoneSourceAbility[0x4]; // 0x1884            
            // m_hChaseUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseUnit;
            char m_hChaseUnit[0x4]; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Undying_Tombstone_Zombie_Deathstrike) == 0x1890);
    };
};
