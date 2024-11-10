#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_StickyBomb_Chase : public client::CDOTA_Buff
    {
    public:
        int32_t acceleration; // 0x1708        
        int32_t m_nTeamNumber; // 0x170c        
        float speed; // 0x1710        
        float pre_chase_time; // 0x1714        
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x1718        
        Vector m_vStartPosition; // 0x171c        
        client::CountdownTimer m_MoveTime; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StickyBomb_Chase because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_StickyBomb_Chase) == 0x1740);
};
