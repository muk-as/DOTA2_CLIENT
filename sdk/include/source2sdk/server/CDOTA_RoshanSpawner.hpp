#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iLastKillerTeam"
    // static metadata: MNetworkVarNames "int m_iKillCount"
    // static metadata: MNetworkVarNames "Vector m_vRoshanAltLocation"
    #pragma pack(push, 1)
    class CDOTA_RoshanSpawner : public server::CPointEntity
    {
    public:
        bool m_bIsRoshanAlive; // 0x4b8        
        bool m_bSpawnRequested; // 0x4b9        
        [[maybe_unused]] std::uint8_t pad_0x4ba[0x2]; // 0x4ba
        // m_hRoshan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRoshan;
        char m_hRoshan[0x4]; // 0x4bc        
        entity2::GameTime_t m_fRoshanKillTime; // 0x4c0        
        int32_t m_nSentRoshReclaim; // 0x4c4        
        int32_t m_nSentRoshRespawn; // 0x4c8        
        float m_fRoshanRespawnDuration; // 0x4cc        
        // metadata: MNetworkEnable
        int32_t m_iLastKillerTeam; // 0x4d0        
        // metadata: MNetworkEnable
        int32_t m_iKillCount; // 0x4d4        
        // metadata: MNetworkEnable
        Vector m_vRoshanAltLocation; // 0x4d8        
        client::ParticleIndex_t m_nFXIndex; // 0x4e4        
        client::ParticleIndex_t m_nFXIndex2; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_RoshanSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_RoshanSpawner) == 0x4f0);
};
