#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/DOTATeleportInfo_t.hpp"
#include "source2sdk/server/DataTeamPlayer_t.hpp"
#include "source2sdk/server/PingConfirmationState_t.hpp"
#include "source2sdk/server/TierNeutralInfo_t.hpp"
#include "source2sdk/server/TreeModelReplacement_t.hpp"
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
    // Size: 0x14a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // 
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkVarNames "DataTeamPlayer_t m_vecDataTeam"
    // static metadata: MNetworkVarNames "uint64 m_bWorldTreeState"
    // static metadata: MNetworkVarNames "TreeModelReplacement_t m_vecWorldTreeModelReplacements"
    // static metadata: MNetworkVarNames "Vector2D m_vDesiredWardPlacement"
    // static metadata: MNetworkVarNames "int m_nEnemyStartingPosition"
    // static metadata: MNetworkVarNames "HeroID_t m_nCaptainInspectedHeroID"
    // static metadata: MNetworkVarNames "float m_flSuggestedWardWeights"
    // static metadata: MNetworkVarNames "uint8 m_nSuggestedWardIndexes"
    // static metadata: MNetworkVarNames "int m_iSuggestedLanes"
    // static metadata: MNetworkVarNames "float m_iSuggestedLaneWeights"
    // static metadata: MNetworkVarNames "bool m_bSuggestedLaneRoam"
    // static metadata: MNetworkVarNames "bool m_bSuggestedLaneJungle"
    // static metadata: MNetworkVarNames "TierNeutralInfo_t m_vecNeutralItemsTierInfo"
    // static metadata: MNetworkVarNames "EHANDLE m_vecNeutralStashItems"
    // static metadata: MNetworkVarNames "AbilityID_t m_vecNeutralItemsConsumed"
    // static metadata: MNetworkVarNames "PingConfirmationState_t m_PingConfirmationStates"
    // static metadata: MNetworkVarNames "EHANDLE m_vecKnownClearCamps"
    // static metadata: MNetworkVarNames "Vector2D m_vPossibleWardPlacement"
    // static metadata: MNetworkVarNames "float m_vPossibleWardRadii"
    // static metadata: MNetworkVarNames "DOTATeleportInfo_t m_vecTrackedTeleports"
    #pragma pack(push, 1)
    class CDOTA_DataNonSpectator : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_vecDataTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::DataTeamPlayer_t> m_vecDataTeam;
        char m_vecDataTeam[0x68]; // 0x4e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_bWorldTreeState[256]; // 0x548        
        // metadata: MNetworkEnable
        // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
        char m_vecWorldTreeModelReplacements[0x68]; // 0xd48        
        // metadata: MNetworkEnable
        Vector2D m_vDesiredWardPlacement[2]; // 0xdb0        
        // metadata: MNetworkEnable
        int32_t m_nEnemyStartingPosition[5]; // 0xdc0        
        // metadata: MNetworkEnable
        client::HeroID_t m_nCaptainInspectedHeroID; // 0xdd4        
        // metadata: MNetworkEnable
        float m_flSuggestedWardWeights[20]; // 0xdd8        
        // metadata: MNetworkEnable
        uint8_t m_nSuggestedWardIndexes[20]; // 0xe28        
        // metadata: MNetworkEnable
        int32_t m_iSuggestedLanes[5]; // 0xe3c        
        // metadata: MNetworkEnable
        float m_iSuggestedLaneWeights[5]; // 0xe50        
        // metadata: MNetworkEnable
        bool m_bSuggestedLaneRoam[5]; // 0xe64        
        // metadata: MNetworkEnable
        bool m_bSuggestedLaneJungle[5]; // 0xe69        
        [[maybe_unused]] std::uint8_t pad_0xe6e[0x2]; // 0xe6e
        // metadata: MNetworkEnable
        // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
        char m_vecNeutralItemsTierInfo[0x68]; // 0xe70        
        // metadata: MNetworkEnable
        // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecNeutralStashItems;
        char m_vecNeutralStashItems[0x18]; // 0xed8        
        // metadata: MNetworkEnable
        // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::AbilityID_t> m_vecNeutralItemsConsumed;
        char m_vecNeutralItemsConsumed[0x18]; // 0xef0        
        // metadata: MNetworkEnable
        // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PingConfirmationState_t> m_PingConfirmationStates;
        char m_PingConfirmationStates[0x68]; // 0xf08        
        // metadata: MNetworkEnable
        // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecKnownClearCamps;
        char m_vecKnownClearCamps[0x18]; // 0xf70        
        // metadata: MNetworkEnable
        Vector2D m_vPossibleWardPlacement[100]; // 0xf88        
        // metadata: MNetworkEnable
        float m_vPossibleWardRadii[100]; // 0x12a8        
        // metadata: MNetworkEnable
        // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::DOTATeleportInfo_t> m_vecTrackedTeleports;
        char m_vecTrackedTeleports[0x68]; // 0x1438        
        int32_t m_iTowerKills; // 0x14a0        
        [[maybe_unused]] std::uint8_t pad_0x14a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_DataNonSpectator because it is not a standard-layout class
    static_assert(sizeof(CDOTA_DataNonSpectator) == 0x14a8);
};
