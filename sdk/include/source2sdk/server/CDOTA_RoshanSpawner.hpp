#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x508
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iLastKillerTeam"
        // static metadata: MNetworkVarNames "int m_iKillCount"
        // static metadata: MNetworkVarNames "EHANDLE m_hRoshan"
        #pragma pack(push, 1)
        class CDOTA_RoshanSpawner : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bIsRoshanAlive; // 0x4e0            
            bool m_bSpawnRequested; // 0x4e1            
            uint8_t _pad04e2[0x2]; // 0x4e2
            source2sdk::entity2::GameTime_t m_fRoshanKillTime; // 0x4e4            
            std::int32_t m_nSentRoshReclaim; // 0x4e8            
            std::int32_t m_nSentRoshRespawn; // 0x4ec            
            float m_fRoshanRespawnDuration; // 0x4f0            
            // metadata: MNetworkEnable
            std::int32_t m_iLastKillerTeam; // 0x4f4            
            // metadata: MNetworkEnable
            std::int32_t m_iKillCount; // 0x4f8            
            // metadata: MNetworkEnable
            // m_hRoshan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoshan;
            char m_hRoshan[0x4]; // 0x4fc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x500            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x504            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_RoshanSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_RoshanSpawner) == 0x508);
    };
};
