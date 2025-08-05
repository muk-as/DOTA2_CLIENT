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
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Drow_Ranger_Glacier : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t shard_width; // 0x688            
            std::int32_t shard_count; // 0x68c            
            float shard_duration; // 0x690            
            float shard_angle_step; // 0x694            
            std::int32_t shard_distance; // 0x698            
            Vector m_vSpawnOrigin; // 0x69c            
            Vector m_vDirection; // 0x6a8            
            uint8_t _pad06b4[0x4]; // 0x6b4
            // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecShards;
            char m_vecShards[0x18]; // 0x6b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Drow_Ranger_Glacier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Drow_Ranger_Glacier) == 0x6d0);
    };
};
