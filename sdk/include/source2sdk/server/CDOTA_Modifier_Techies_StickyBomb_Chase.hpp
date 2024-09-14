#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    class CDOTA_Modifier_Techies_StickyBomb_Chase : public client::CDOTA_Buff
    {
    public:
        int32_t acceleration; // 0x16e8        
        int32_t m_nTeamNumber; // 0x16ec        
        float speed; // 0x16f0        
        float pre_chase_time; // 0x16f4        
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x16f8        
        Vector m_vStartPosition; // 0x16fc        
        server::CountdownTimer m_MoveTime; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StickyBomb_Chase because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_StickyBomb_Chase) == 0x1720);
};
