#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1870
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Homing_Missile : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x17f8            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x17fc            
            std::int32_t hero_damage; // 0x1800            
            std::int32_t acceleration; // 0x1804            
            float hit_damage; // 0x1808            
            std::int32_t max_distance; // 0x180c            
            float shard_radius; // 0x1810            
            float shard_delay; // 0x1814            
            float pre_flight_time; // 0x1818            
            float stun_duration; // 0x181c            
            std::int32_t m_nTeamNumber; // 0x1820            
            uint8_t _pad1824[0x8]; // 0x1824
            float speed; // 0x182c            
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1830            
            Vector m_vStartPosition; // 0x1834            
            source2sdk::server::CountdownTimer m_EnemyVision; // 0x1840            
            source2sdk::server::CountdownTimer m_MoveTime; // 0x1858            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Homing_Missile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Gyrocopter_Homing_Missile) == 0x1870);
    };
};
