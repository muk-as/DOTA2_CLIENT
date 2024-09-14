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

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI9_Shovel_Ghost_Haunt : public client::CDOTA_Buff
    {
    public:
        int32_t nDamageInstances; // 0x16e8        
        entity2::GameTime_t m_flLastAttackTime; // 0x16ec        
        entity2::GameTime_t m_flLastMoveTime; // 0x16f0        
        // m_hGhost has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGhost;
        char m_hGhost[0x4]; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Shovel_Ghost_Haunt because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI9_Shovel_Ghost_Haunt) == 0x16f8);
};
