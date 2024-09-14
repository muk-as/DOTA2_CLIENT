#pragma once
#include "source2sdk/client/CDOTA_ArcanaDataEntity_Base.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x108
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "int8 m_vecDrowRangerArcanaTargetPlayerID"
    // static metadata: MNetworkVarNames "GameTime_t m_vecDrowRangerArcanaDeathTime"
    // static metadata: MNetworkVarNames "GameTime_t m_vecDrowRangerArcanaKillTime"
    #pragma pack(push, 1)
    class CDOTA_ArcanaDataEntity_DrowRanger : public client::CDOTA_ArcanaDataEntity_Base
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDrowArcanaChanged"
        int8_t m_vecDrowRangerArcanaTargetPlayerID[24]; // 0x30        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDrowArcanaChanged"
        entity2::GameTime_t m_vecDrowRangerArcanaDeathTime[24]; // 0x48        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDrowArcanaChanged"
        entity2::GameTime_t m_vecDrowRangerArcanaKillTime[24]; // 0xa8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_ArcanaDataEntity_DrowRanger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_ArcanaDataEntity_DrowRanger) == 0x108);
};
