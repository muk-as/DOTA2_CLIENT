#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Wisp_Tether : public client::CDOTA_Buff
    {
    public:
        bool m_bInManaGained; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x170c        
        // hStunnedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hStunnedEntities;
        char hStunnedEntities[0x18]; // 0x1710        
        float stun_duration; // 0x1728        
        int32_t movespeed; // 0x172c        
        int32_t self_bonus; // 0x1730        
        bool m_bIsInRange; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3]; // 0x1735
        int32_t radius; // 0x1738        
        int32_t latch_distance; // 0x173c        
        int32_t damage_absorb; // 0x1740        
        float m_flHealthHealed; // 0x1744        
        float m_flManaHealed; // 0x1748        
        float tether_heal_amp; // 0x174c        
        float tether_mana_amp; // 0x1750        
        entity2::GameTime_t m_flHealMessageTime; // 0x1754        
        entity2::GameTime_t m_flManaMessageTime; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x175c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Tether because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Wisp_Tether) == 0x1760);
};
