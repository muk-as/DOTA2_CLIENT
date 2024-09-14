#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsRadiantMiniboss"
    #pragma pack(push, 1)
    class CDOTA_MinibossSpawner : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsRadiantMiniboss; // 0x4b8        
        bool m_bIsMinibossAlive; // 0x4b9        
        bool m_bSpawnRequested; // 0x4ba        
        [[maybe_unused]] std::uint8_t pad_0x4bb[0x1]; // 0x4bb
        // m_hMiniboss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMiniboss;
        char m_hMiniboss[0x4]; // 0x4bc        
        entity2::GameTime_t m_fMinibossKillTime; // 0x4c0        
        int32_t m_nSentMinibossReclaim; // 0x4c4        
        int32_t m_nSentMinibossRespawn; // 0x4c8        
        int32_t m_nTimesSpawned; // 0x4cc        
        float m_fMinibossRespawnDuration; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_MinibossSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_MinibossSpawner) == 0x4d8);
};
