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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_HarpyStorm_ChainLightning : public client::CDOTA_Buff
    {
    public:
        int32_t jump_range; // 0x1708        
        int32_t max_targets; // 0x170c        
        float damage_percent_loss; // 0x1710        
        float m_flCurDamage; // 0x1714        
        Vector m_vJumpPosition; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_HarpyStorm_ChainLightning because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_HarpyStorm_ChainLightning) == 0x1740);
};
