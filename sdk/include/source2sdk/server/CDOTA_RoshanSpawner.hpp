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
    // Size: 0x518
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_iLastKillerTeam"
    // static metadata: MNetworkVarNames "int m_iKillCount"
    // static metadata: MNetworkVarNames "Vector m_vRoshanAltLocation"
    #pragma pack(push, 1)
    class CDOTA_RoshanSpawner : public server::CPointEntity
    {
    public:
        bool m_bIsRoshanAlive; // 0x4e0        
        bool m_bSpawnRequested; // 0x4e1        
        [[maybe_unused]] std::uint8_t pad_0x4e2[0x2]; // 0x4e2
        // m_hRoshan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRoshan;
        char m_hRoshan[0x4]; // 0x4e4        
        entity2::GameTime_t m_fRoshanKillTime; // 0x4e8        
        int32_t m_nSentRoshReclaim; // 0x4ec        
        int32_t m_nSentRoshRespawn; // 0x4f0        
        float m_fRoshanRespawnDuration; // 0x4f4        
        // metadata: MNetworkEnable
        int32_t m_iLastKillerTeam; // 0x4f8        
        // metadata: MNetworkEnable
        int32_t m_iKillCount; // 0x4fc        
        // metadata: MNetworkEnable
        Vector m_vRoshanAltLocation; // 0x500        
        client::ParticleIndex_t m_nFXIndex; // 0x50c        
        client::ParticleIndex_t m_nFXIndex2; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_RoshanSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_RoshanSpawner) == 0x518);
};
