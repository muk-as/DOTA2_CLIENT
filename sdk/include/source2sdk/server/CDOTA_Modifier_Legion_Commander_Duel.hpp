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
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Legion_Commander_Duel : public client::CDOTA_Buff
    {
    public:
        int32_t reward_damage; // 0x1708        
        int32_t assist_reward_damage; // 0x170c        
        int32_t damage_reduction_pct; // 0x1710        
        int32_t debuff_immunity; // 0x1714        
        bool m_bAttacked; // 0x1718        
        bool m_bHadAVictor; // 0x1719        
        [[maybe_unused]] std::uint8_t pad_0x171a[0x2]; // 0x171a
        entity2::GameTime_t m_flTimeDuelStart; // 0x171c        
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x1720        
        float m_flNextTime; // 0x1724        
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x1728        
        // m_hAllyAssisters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAllyAssisters;
        char m_hAllyAssisters[0x18]; // 0x1740        
        // m_hEnemyAssisters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEnemyAssisters;
        char m_hEnemyAssisters[0x18]; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_Duel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Legion_Commander_Duel) == 0x1770);
};
