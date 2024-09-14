#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Warlock_Upheaval : public server::CDOTABaseAbility
    {
    public:
        Vector m_vPosition; // 0x5a0        
        float aoe; // 0x5ac        
        int32_t slow_per_second; // 0x5b0        
        int32_t aspd_per_second; // 0x5b4        
        int32_t max_slow; // 0x5b8        
        int32_t base_damage; // 0x5bc        
        int32_t damage_per_second; // 0x5c0        
        int32_t max_damage; // 0x5c4        
        float damage_tick_interval; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        server::CountdownTimer m_timer; // 0x5d0        
        server::CountdownTimer m_shardTimer; // 0x5e8        
        float duration; // 0x600        
        entity2::GameTime_t m_flElapsedTime; // 0x604        
        float m_flCurrentSlow; // 0x608        
        client::ParticleIndex_t m_nFXIndex; // 0x60c        
        [[maybe_unused]] std::uint8_t pad_0x610[0x8]; // 0x610
        bool m_bTargetCast; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x3]; // 0x619
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x61c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Warlock_Upheaval because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Warlock_Upheaval) == 0x620);
};
