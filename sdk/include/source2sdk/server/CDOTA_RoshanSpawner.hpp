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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bIsRoshanAlive; // 0x_            
            bool m_bSpawnRequested; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_fRoshanKillTime; // 0x_            
            std::int32_t m_nSentRoshReclaim; // 0x_            
            std::int32_t m_nSentRoshRespawn; // 0x_            
            float m_fRoshanRespawnDuration; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iLastKillerTeam; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iKillCount; // 0x_            
            // metadata: MNetworkEnable
            // m_hRoshan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoshan;
            char m_hRoshan[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex2; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_RoshanSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_RoshanSpawner) == 0x_);
    };
};
