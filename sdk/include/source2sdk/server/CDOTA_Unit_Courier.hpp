#pragma once
#include "source2sdk/client/CourierState_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x1848
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_nSoleControllingPlayer"
    // static metadata: MNetworkVarNames "bool m_bFlyingCourier"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "CourierState_t m_nCourierState"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCourierStateEntity"
    #pragma pack(push, 1)
    class CDOTA_Unit_Courier : public server::CDOTA_BaseNPC_Additive
    {
    public:
        bool m_bUnitRespawned; // 0x1810        
        bool m_bPreUpdateFlyingCourier; // 0x1811        
        [[maybe_unused]] std::uint8_t pad_0x1812[0x2]; // 0x1812
        // metadata: MNetworkEnable
        client::PlayerID_t m_nSoleControllingPlayer; // 0x1814        
        // metadata: MNetworkEnable
        bool m_bFlyingCourier; // 0x1818        
        [[maybe_unused]] std::uint8_t pad_0x1819[0x3]; // 0x1819
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x181c        
        // metadata: MNetworkEnable
        client::CourierState_t m_nCourierState; // 0x1820        
        // metadata: MNetworkEnable
        // m_hCourierStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCourierStateEntity;
        char m_hCourierStateEntity[0x4]; // 0x1824        
        CUtlString m_strCourierModel; // 0x1828        
        CUtlString m_strFlyingCourierModel; // 0x1830        
        Vector m_vSpawnLocation; // 0x1838        
        [[maybe_unused]] std::uint8_t pad_0x1844[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Courier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Courier) == 0x1848);
};
