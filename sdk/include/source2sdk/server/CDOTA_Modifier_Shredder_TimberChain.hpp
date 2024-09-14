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
    class CDOTA_Modifier_Shredder_TimberChain : public client::CDOTA_Buff
    {
    public:
        // m_hDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hDamaged;
        char m_hDamaged[0x18]; // 0x16e8        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1700        
        Vector m_vStartPosition; // 0x1704        
        int32_t speed; // 0x1710        
        int32_t radius; // 0x1714        
        int32_t damage; // 0x1718        
        int32_t tree_splinter_count; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_TimberChain because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_TimberChain) == 0x1720);
};
