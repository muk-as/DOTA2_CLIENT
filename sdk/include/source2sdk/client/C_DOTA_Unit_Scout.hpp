#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ScoutState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_nSoleControllingPlayer"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "ScoutState_t m_nScoutState"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hScoutStateEntity"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Scout : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        bool m_bUnitRespawned; // 0x1800        
        [[maybe_unused]] std::uint8_t pad_0x1801[0x3]; // 0x1801
        // metadata: MNetworkEnable
        client::PlayerID_t m_nSoleControllingPlayer; // 0x1804        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x1808        
        // metadata: MNetworkEnable
        client::ScoutState_t m_nScoutState; // 0x180c        
        // metadata: MNetworkEnable
        // m_hScoutStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hScoutStateEntity;
        char m_hScoutStateEntity[0x4]; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1814[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Scout because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Scout) == 0x18f8);
};
