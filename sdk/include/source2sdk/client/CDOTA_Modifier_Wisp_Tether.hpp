#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Wisp_Tether : public client::CDOTA_Buff
    {
    public:
        bool m_bInManaGained; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16ec        
        // hStunnedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hStunnedEntities;
        char hStunnedEntities[0x18]; // 0x16f0        
        float stun_duration; // 0x1708        
        int32_t movespeed; // 0x170c        
        int32_t self_bonus; // 0x1710        
        bool m_bIsInRange; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        int32_t radius; // 0x1718        
        int32_t latch_distance; // 0x171c        
        int32_t damage_absorb; // 0x1720        
        float m_flHealthHealed; // 0x1724        
        float m_flManaHealed; // 0x1728        
        float tether_heal_amp; // 0x172c        
        float tether_mana_amp; // 0x1730        
        entity2::GameTime_t m_flHealMessageTime; // 0x1734        
        entity2::GameTime_t m_flManaMessageTime; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Tether because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Wisp_Tether) == 0x1740);
};
