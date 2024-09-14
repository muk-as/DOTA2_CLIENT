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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Legion_Commander_Duel : public client::CDOTA_Buff
    {
    public:
        int32_t reward_damage; // 0x16e8        
        int32_t assist_reward_damage; // 0x16ec        
        int32_t damage_reduction_pct; // 0x16f0        
        int32_t debuff_immunity; // 0x16f4        
        bool m_bAttacked; // 0x16f8        
        bool m_bHadAVictor; // 0x16f9        
        [[maybe_unused]] std::uint8_t pad_0x16fa[0x2]; // 0x16fa
        entity2::GameTime_t m_flTimeDuelStart; // 0x16fc        
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x1700        
        float m_flNextTime; // 0x1704        
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x1708        
        // m_hAllyAssisters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAllyAssisters;
        char m_hAllyAssisters[0x18]; // 0x1720        
        // m_hEnemyAssisters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hEnemyAssisters;
        char m_hEnemyAssisters[0x18]; // 0x1738        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_Duel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Legion_Commander_Duel) == 0x1750);
};
