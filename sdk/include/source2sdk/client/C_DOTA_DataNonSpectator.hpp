#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DOTATeleportInfo_t.hpp"
#include "source2sdk/client/DataTeamPlayer_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/PingConfirmationState_t.hpp"
#include "source2sdk/client/TierNeutralInfo_t.hpp"
#include "source2sdk/client/TreeModelReplacement_t.hpp"
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
    // Size: 0x1488
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
    // static metadata: MNetworkVarNames "int m_nTotalEventPoints"
    // static metadata: MNetworkVarNames "HeroID_t m_nCaptainInspectedHeroID"
    // static metadata: MNetworkVarNames "int m_nFeaturedPlayerID"
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
    class C_DOTA_DataNonSpectator : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_vecDataTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::DataTeamPlayer_t> m_vecDataTeam;
        char m_vecDataTeam[0x50]; // 0x538        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnTeamWorldTreeStateChanged"
        uint64_t m_bWorldTreeState[256]; // 0x588        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamWorldTreeModelsChanged"
        // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
        char m_vecWorldTreeModelReplacements[0x50]; // 0xd88        
        // metadata: MNetworkEnable
        Vector2D m_vDesiredWardPlacement[2]; // 0xdd8        
        // metadata: MNetworkEnable
        int32_t m_nEnemyStartingPosition[5]; // 0xde8        
        // metadata: MNetworkEnable
        int32_t m_nTotalEventPoints; // 0xdfc        
        // metadata: MNetworkEnable
        client::HeroID_t m_nCaptainInspectedHeroID; // 0xe00        
        // metadata: MNetworkEnable
        int32_t m_nFeaturedPlayerID; // 0xe04        
        // metadata: MNetworkEnable
        float m_flSuggestedWardWeights[20]; // 0xe08        
        // metadata: MNetworkEnable
        uint8_t m_nSuggestedWardIndexes[20]; // 0xe58        
        // metadata: MNetworkEnable
        int32_t m_iSuggestedLanes[5]; // 0xe6c        
        // metadata: MNetworkEnable
        float m_iSuggestedLaneWeights[5]; // 0xe80        
        // metadata: MNetworkEnable
        bool m_bSuggestedLaneRoam[5]; // 0xe94        
        // metadata: MNetworkEnable
        bool m_bSuggestedLaneJungle[5]; // 0xe99        
        [[maybe_unused]] std::uint8_t pad_0xe9e[0x2]; // 0xe9e
        // metadata: MNetworkEnable
        // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
        char m_vecNeutralItemsTierInfo[0x50]; // 0xea0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTeamNeutralStashItemsChanged"
        // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecNeutralStashItems;
        char m_vecNeutralStashItems[0x18]; // 0xef0        
        // metadata: MNetworkEnable
        // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::AbilityID_t> m_vecNeutralItemsConsumed;
        char m_vecNeutralItemsConsumed[0x18]; // 0xf08        
        // metadata: MNetworkEnable
        // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PingConfirmationState_t> m_PingConfirmationStates;
        char m_PingConfirmationStates[0x50]; // 0xf20        
        // metadata: MNetworkEnable
        // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecKnownClearCamps;
        char m_vecKnownClearCamps[0x18]; // 0xf70        
        // metadata: MNetworkEnable
        Vector2D m_vPossibleWardPlacement[100]; // 0xf88        
        // metadata: MNetworkEnable
        float m_vPossibleWardRadii[100]; // 0x12a8        
        // metadata: MNetworkEnable
        // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::DOTATeleportInfo_t> m_vecTrackedTeleports;
        char m_vecTrackedTeleports[0x50]; // 0x1438        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_DataNonSpectator because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_DataNonSpectator) == 0x1488);
};
