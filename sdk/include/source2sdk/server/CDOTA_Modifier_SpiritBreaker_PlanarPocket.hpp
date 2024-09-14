#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_SpiritBreaker_PlanarPocket : public client::CDOTA_Buff
    {
    public:
        // m_hRedirectAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRedirectAbility;
        char m_hRedirectAbility[0x4]; // 0x16e8        
        entity2::GameTick_t nRedirectTick; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_PlanarPocket because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_SpiritBreaker_PlanarPocket) == 0x16f0);
};
