#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Drow_Ranger_Glacier : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t shard_width; // 0x5b0            
            std::int32_t shard_count; // 0x5b4            
            float shard_duration; // 0x5b8            
            float shard_angle_step; // 0x5bc            
            std::int32_t shard_distance; // 0x5c0            
            Vector m_vSpawnOrigin; // 0x5c4            
            Vector m_vDirection; // 0x5d0            
            uint8_t _pad05dc[0x4]; // 0x5dc
            // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecShards;
            char m_vecShards[0x18]; // 0x5e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Drow_Ranger_Glacier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Drow_Ranger_Glacier) == 0x5f8);
    };
};
