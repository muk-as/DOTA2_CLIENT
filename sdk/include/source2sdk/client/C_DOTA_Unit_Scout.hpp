#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ScoutState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b10
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "PlayerID_t m_nSoleControllingPlayer"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "ScoutState_t m_nScoutState"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hScoutStateEntity"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Scout : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            bool m_bUnitRespawned; // 0x1a18            
            uint8_t _pad1a19[0x3]; // 0x1a19
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_nSoleControllingPlayer; // 0x1a1c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a20            
            // metadata: MNetworkEnable
            source2sdk::client::ScoutState_t m_nScoutState; // 0x1a24            
            // metadata: MNetworkEnable
            // m_hScoutStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hScoutStateEntity;
            char m_hScoutStateEntity[0x4]; // 0x1a28            
            uint8_t _pad1a2c[0xe4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Scout because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Scout) == 0x1b10);
    };
};
