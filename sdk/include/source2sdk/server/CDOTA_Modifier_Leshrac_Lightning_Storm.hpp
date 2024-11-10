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
    class CDOTA_Modifier_Leshrac_Lightning_Storm : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        float radius; // 0x170c        
        int32_t jump_count; // 0x1710        
        float slow_duration; // 0x1714        
        float jump_delay; // 0x1718        
        // hInitialTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hInitialTarget;
        char hInitialTarget[0x4]; // 0x171c        
        float m_flDamage; // 0x1720        
        int32_t m_iCurJumpCount; // 0x1724        
        Vector m_vCurTargetLoc; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1738        
        bool m_bGrantedGem; // 0x1750        
        bool m_bBounceTwice; // 0x1751        
        [[maybe_unused]] std::uint8_t pad_0x1752[0x2]; // 0x1752
        // m_eLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_eLastTarget;
        char m_eLastTarget[0x4]; // 0x1754        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Lightning_Storm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Lightning_Storm) == 0x1758);
};
