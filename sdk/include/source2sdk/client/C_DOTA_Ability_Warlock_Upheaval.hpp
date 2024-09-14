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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Warlock_Upheaval : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x5d8        
        float aoe; // 0x5e4        
        int32_t slow_per_second; // 0x5e8        
        int32_t aspd_per_second; // 0x5ec        
        int32_t max_slow; // 0x5f0        
        int32_t base_damage; // 0x5f4        
        int32_t damage_per_second; // 0x5f8        
        int32_t max_damage; // 0x5fc        
        float damage_tick_interval; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        client::CountdownTimer m_timer; // 0x608        
        client::CountdownTimer m_shardTimer; // 0x620        
        float duration; // 0x638        
        entity2::GameTime_t m_flElapsedTime; // 0x63c        
        float m_flCurrentSlow; // 0x640        
        client::ParticleIndex_t m_nFXIndex; // 0x644        
        [[maybe_unused]] std::uint8_t pad_0x648[0x8]; // 0x648
        bool m_bTargetCast; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x651[0x3]; // 0x651
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x654        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Warlock_Upheaval) == 0x658);
};
