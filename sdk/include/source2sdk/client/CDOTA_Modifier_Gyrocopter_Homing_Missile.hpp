#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1780
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Gyrocopter_Homing_Missile : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        client::ParticleIndex_t m_nFXIndex2; // 0x170c        
        int32_t hero_damage; // 0x1710        
        int32_t acceleration; // 0x1714        
        float hit_damage; // 0x1718        
        int32_t max_distance; // 0x171c        
        float shard_radius; // 0x1720        
        float shard_delay; // 0x1724        
        float pre_flight_time; // 0x1728        
        float stun_duration; // 0x172c        
        int32_t m_nTeamNumber; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x8]; // 0x1734
        float speed; // 0x173c        
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x1740        
        Vector m_vStartPosition; // 0x1744        
        client::CountdownTimer m_EnemyVision; // 0x1750        
        client::CountdownTimer m_MoveTime; // 0x1768        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Homing_Missile because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Gyrocopter_Homing_Missile) == 0x1780);
};
