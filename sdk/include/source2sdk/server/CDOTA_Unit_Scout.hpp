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
        // Size: 0x18c8
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
            bool m_bUnitRespawned; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nSoleControllingPlayer; // 0x189c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x18a0            
            // metadata: MNetworkEnable
            source2sdk::client::ScoutState_t m_nScoutState; // 0x18a4            
            // metadata: MNetworkEnable
            // m_hScoutStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hScoutStateEntity;
            char m_hScoutStateEntity[0x4]; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            CUtlString m_strScoutModel; // 0x18b0            
            Vector m_vSpawnLocation; // 0x18b8            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Scout because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Scout) == 0x18c8);
    };
};
