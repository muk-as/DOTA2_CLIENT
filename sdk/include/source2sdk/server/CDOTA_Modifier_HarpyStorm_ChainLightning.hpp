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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_HarpyStorm_ChainLightning : public client::CDOTA_Buff
    {
    public:
        int32_t jump_range; // 0x16e8        
        int32_t max_targets; // 0x16ec        
        float damage_percent_loss; // 0x16f0        
        float m_flCurDamage; // 0x16f4        
        Vector m_vJumpPosition; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_HarpyStorm_ChainLightning because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_HarpyStorm_ChainLightning) == 0x1720);
};
