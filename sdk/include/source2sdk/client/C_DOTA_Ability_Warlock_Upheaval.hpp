#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x680
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Warlock_Upheaval : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x600        
        float aoe; // 0x60c        
        int32_t slow_per_second; // 0x610        
        int32_t aspd_per_second; // 0x614        
        int32_t max_slow; // 0x618        
        int32_t base_damage; // 0x61c        
        int32_t damage_per_second; // 0x620        
        int32_t max_damage; // 0x624        
        float damage_tick_interval; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4]; // 0x62c
        client::CountdownTimer m_timer; // 0x630        
        client::CountdownTimer m_shardTimer; // 0x648        
        float duration; // 0x660        
        entity2::GameTime_t m_flElapsedTime; // 0x664        
        float m_flCurrentSlow; // 0x668        
        client::ParticleIndex_t m_nFXIndex; // 0x66c        
        [[maybe_unused]] std::uint8_t pad_0x670[0x8]; // 0x670
        bool m_bTargetCast; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x679[0x3]; // 0x679
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x67c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Warlock_Upheaval) == 0x680);
};
