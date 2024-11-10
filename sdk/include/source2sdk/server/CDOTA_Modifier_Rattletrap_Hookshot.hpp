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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Hookshot : public client::CDOTA_Buff
    {
    public:
        // m_hDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hDamaged;
        char m_hDamaged[0x18]; // 0x1708        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1720        
        Vector m_vStartPosition; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1730[0x8]; // 0x1730
        int32_t speed; // 0x1738        
        float stun_radius; // 0x173c        
        float stun_radius_ally; // 0x1740        
        float cooldown_refund_ally; // 0x1744        
        float damage; // 0x1748        
        float duration; // 0x174c        
        float ally_shield_duration; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Hookshot) == 0x1758);
};
