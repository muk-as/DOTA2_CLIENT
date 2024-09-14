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
    // Size: 0x1408
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
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
        char m_vecDataTeam[0x50]; // 0x4b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        uint64_t m_bWorldTreeState[256]; // 0x508        
        // metadata: MNetworkEnable
        // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
        char m_vecWorldTreeModelReplacements[0x50]; // 0xd08        
        // metadata: MNetworkEnable
        Vector2D m_vDesiredWardPlacement[2]; // 0xd58        
        // metadata: MNetworkEnable
        int32_t m_nEnemyStartingPosition[5]; // 0xd68        
        // metadata: MNetworkEnable
        client::HeroID_t m_nCaptainInspectedHeroID; // 0xd7c        
        // metadata: MNetworkEnable
        float m_flSuggestedWardWeights[20]; // 0xd80        
        // metadata: MNetworkEnable
        uint8_t m_nSuggestedWardIndexes[20]; // 0xdd0        
        // metadata: MNetworkEnable
        int32_t m_iSuggestedLanes[5]; // 0xde4        
        // metadata: MNetworkEnable
        float m_iSuggestedLaneWeights[5]; // 0xdf8        
        // metadata: MNetworkEnable
        bool m_bSuggestedLaneRoam[5]; // 0xe0c        
        // metadata: MNetworkEnable
        bool m_bSuggestedLaneJungle[5]; // 0xe11        
        [[maybe_unused]] std::uint8_t pad_0xe16[0x2]; // 0xe16
        // metadata: MNetworkEnable
        // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
        char m_vecNeutralItemsTierInfo[0x50]; // 0xe18        
        // metadata: MNetworkEnable
        // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecNeutralStashItems;
        char m_vecNeutralStashItems[0x18]; // 0xe68        
        // metadata: MNetworkEnable
        // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::AbilityID_t> m_vecNeutralItemsConsumed;
        char m_vecNeutralItemsConsumed[0x18]; // 0xe80        
        // metadata: MNetworkEnable
        // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PingConfirmationState_t> m_PingConfirmationStates;
        char m_PingConfirmationStates[0x50]; // 0xe98        
        // metadata: MNetworkEnable
        // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecKnownClearCamps;
        char m_vecKnownClearCamps[0x18]; // 0xee8        
        // metadata: MNetworkEnable
        Vector2D m_vPossibleWardPlacement[100]; // 0xf00        
        // metadata: MNetworkEnable
        float m_vPossibleWardRadii[100]; // 0x1220        
        // metadata: MNetworkEnable
        // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::DOTATeleportInfo_t> m_vecTrackedTeleports;
        char m_vecTrackedTeleports[0x50]; // 0x13b0        
        int32_t m_iTowerKills; // 0x1400        
        [[maybe_unused]] std::uint8_t pad_0x1404[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_DataNonSpectator because it is not a standard-layout class
    static_assert(sizeof(CDOTA_DataNonSpectator) == 0x1408);
};
