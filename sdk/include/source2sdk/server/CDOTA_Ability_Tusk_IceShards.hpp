#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Tusk_IceShards : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iProjectile; // 0x5a0        
        int32_t shard_width; // 0x5a4        
        int32_t shard_damage; // 0x5a8        
        int32_t shard_count; // 0x5ac        
        float shard_speed; // 0x5b0        
        float shard_duration; // 0x5b4        
        float shard_angle_step; // 0x5b8        
        int32_t shard_distance; // 0x5bc        
        Vector m_vSpawnOrigin; // 0x5c0        
        Vector m_vDirection; // 0x5cc        
        // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecShards;
        char m_vecShards[0x18]; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5f0[0x8]; // 0x5f0
        server::CDOTABaseAbility* m_pIceShardsStop; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x600[0x8]; // 0x600
        client::ParticleIndex_t m_nFXIndex; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tusk_IceShards because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tusk_IceShards) == 0x610);
};
