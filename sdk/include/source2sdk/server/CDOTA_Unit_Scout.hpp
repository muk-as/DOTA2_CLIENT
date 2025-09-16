#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ScoutState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
        // Size: 0x1910
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_nSoleControllingPlayer"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "ScoutState_t m_nScoutState"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hScoutStateEntity"
        #pragma pack(push, 1)
        class CDOTA_Unit_Scout : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            bool m_bUnitRespawned; // 0x18e0            
            uint8_t _pad18e1[0x3]; // 0x18e1
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nSoleControllingPlayer; // 0x18e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x18e8            
            // metadata: MNetworkEnable
            source2sdk::client::ScoutState_t m_nScoutState; // 0x18ec            
            // metadata: MNetworkEnable
            // m_hScoutStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hScoutStateEntity;
            char m_hScoutStateEntity[0x4]; // 0x18f0            
            uint8_t _pad18f4[0x4]; // 0x18f4
            CUtlString m_strScoutModel; // 0x18f8            
            Vector m_vSpawnLocation; // 0x1900            
            uint8_t _pad190c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Scout because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Scout) == 0x1910);
    };
};
