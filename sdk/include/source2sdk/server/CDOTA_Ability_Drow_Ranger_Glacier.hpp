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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Drow_Ranger_Glacier : public server::CDOTABaseAbility
    {
    public:
        int32_t shard_width; // 0x5c8        
        int32_t shard_count; // 0x5cc        
        float shard_duration; // 0x5d0        
        float shard_angle_step; // 0x5d4        
        int32_t shard_distance; // 0x5d8        
        Vector m_vSpawnOrigin; // 0x5dc        
        Vector m_vDirection; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        // m_vecShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecShards;
        char m_vecShards[0x18]; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x610[0x8]; // 0x610
        server::CDOTABaseAbility* m_pIceShardsStop; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x620[0x8]; // 0x620
        client::ParticleIndex_t m_nFXIndex; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Drow_Ranger_Glacier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Drow_Ranger_Glacier) == 0x630);
};
