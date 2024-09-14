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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Leshrac_Lightning_Storm : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        float radius; // 0x16ec        
        int32_t jump_count; // 0x16f0        
        float slow_duration; // 0x16f4        
        float jump_delay; // 0x16f8        
        // hInitialTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hInitialTarget;
        char hInitialTarget[0x4]; // 0x16fc        
        float m_flDamage; // 0x1700        
        int32_t m_iCurJumpCount; // 0x1704        
        Vector m_vCurTargetLoc; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1718        
        bool m_bGrantedGem; // 0x1730        
        bool m_bBounceTwice; // 0x1731        
        [[maybe_unused]] std::uint8_t pad_0x1732[0x2]; // 0x1732
        // m_eLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_eLastTarget;
        char m_eLastTarget[0x4]; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Lightning_Storm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Lightning_Storm) == 0x1738);
};
