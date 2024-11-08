#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Tusk_IceShards : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_iProjectile; // 0x600        
        int32_t shard_width; // 0x604        
        int32_t shard_damage; // 0x608        
        int32_t shard_count; // 0x60c        
        float shard_speed; // 0x610        
        float shard_duration; // 0x614        
        float shard_angle_step; // 0x618        
        int32_t shard_distance; // 0x61c        
        Vector m_vSpawnOrigin; // 0x620        
        Vector m_vDirection; // 0x62c        
        // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecShards;
        char m_vecShards[0x18]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Tusk_IceShards because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Tusk_IceShards) == 0x650);
};
