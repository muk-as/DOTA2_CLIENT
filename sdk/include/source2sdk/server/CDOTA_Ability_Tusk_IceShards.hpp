#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x628
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tusk_IceShards : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x5b8            
            float shard_width; // 0x5bc            
            float shard_damage; // 0x5c0            
            std::int32_t shard_count; // 0x5c4            
            float shard_speed; // 0x5c8            
            float shard_duration; // 0x5cc            
            float shard_angle_step; // 0x5d0            
            float shard_distance; // 0x5d4            
            Vector m_vSpawnOrigin; // 0x5d8            
            Vector m_vDirection; // 0x5e4            
            // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecShards;
            char m_vecShards[0x18]; // 0x5f0            
            uint8_t _pad0608[0x8]; // 0x608
            source2sdk::server::CDOTABaseAbility* m_pIceShardsStop; // 0x610            
            uint8_t _pad0618[0x8]; // 0x618
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x620            
            uint8_t _pad0624[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tusk_IceShards because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tusk_IceShards) == 0x628);
    };
};
