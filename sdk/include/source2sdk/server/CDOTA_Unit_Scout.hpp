#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ScoutState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
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
    // Size: 0x1840
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
    class CDOTA_Unit_Scout : public server::CDOTA_BaseNPC_Additive
    {
    public:
        bool m_bUnitRespawned; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1811[0x3]; // 0x1811
        // metadata: MNetworkEnable
        client::PlayerID_t m_nSoleControllingPlayer; // 0x1814        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x1818        
        // metadata: MNetworkEnable
        client::ScoutState_t m_nScoutState; // 0x181c        
        // metadata: MNetworkEnable
        // m_hScoutStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hScoutStateEntity;
        char m_hScoutStateEntity[0x4]; // 0x1820        
        [[maybe_unused]] std::uint8_t pad_0x1824[0x4]; // 0x1824
        CUtlString m_strScoutModel; // 0x1828        
        Vector m_vSpawnLocation; // 0x1830        
        [[maybe_unused]] std::uint8_t pad_0x183c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Scout because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Scout) == 0x1840);
};
