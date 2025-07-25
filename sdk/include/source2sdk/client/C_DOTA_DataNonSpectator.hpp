#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CRoshanPhaseInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DOTATeleportInfo_t.hpp"
#include "source2sdk/client/DataTeamPlayer_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/PingConfirmationState_t.hpp"
#include "source2sdk/client/TierNeutralInfo_t.hpp"
#include "source2sdk/client/TreeModelReplacement_t.hpp"
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
        // Size: 0x1dc8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "DataTeamPlayer_t m_vecDataTeam"
        // static metadata: MNetworkVarNames "uint64 m_bWorldTreeState"
        // static metadata: MNetworkVarNames "uint64 m_bNPCVisibleState"
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
        // static metadata: MNetworkVarNames "CRoshanPhaseInfo m_roshanSpawnInfo"
        // static metadata: MNetworkVarNames "int m_nNextPowerRuneType"
        // static metadata: MNetworkVarNames "int m_nNextPowerRuneSpawnIndex"
        #pragma pack(push, 1)
        class C_DOTA_DataNonSpectator : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_vecDataTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::DataTeamPlayer_t> m_vecDataTeam;
            char m_vecDataTeam[0x68]; // 0x5e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnTeamWorldTreeStateChanged"
            std::uint64_t m_bWorldTreeState[256]; // 0x648            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_bNPCVisibleState[256]; // 0xe48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnTeamWorldTreeModelsChanged"
            // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
            char m_vecWorldTreeModelReplacements[0x68]; // 0x1648            
            // metadata: MNetworkEnable
            Vector2D m_vDesiredWardPlacement[2]; // 0x16b0            
            // metadata: MNetworkEnable
            std::int32_t m_nEnemyStartingPosition[5]; // 0x16c0            
            // metadata: MNetworkEnable
            std::int32_t m_nTotalEventPoints; // 0x16d4            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nCaptainInspectedHeroID; // 0x16d8            
            // metadata: MNetworkEnable
            std::int32_t m_nFeaturedPlayerID; // 0x16dc            
            // metadata: MNetworkEnable
            float m_flSuggestedWardWeights[20]; // 0x16e0            
            // metadata: MNetworkEnable
            std::uint8_t m_nSuggestedWardIndexes[20]; // 0x1730            
            // metadata: MNetworkEnable
            std::int32_t m_iSuggestedLanes[5]; // 0x1744            
            // metadata: MNetworkEnable
            float m_iSuggestedLaneWeights[5]; // 0x1758            
            // metadata: MNetworkEnable
            bool m_bSuggestedLaneRoam[5]; // 0x176c            
            // metadata: MNetworkEnable
            bool m_bSuggestedLaneJungle[5]; // 0x1771            
            uint8_t _pad1776[0x2]; // 0x1776
            // metadata: MNetworkEnable
            // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
            char m_vecNeutralItemsTierInfo[0x68]; // 0x1778            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnTeamNeutralStashItemsChanged"
            // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecNeutralStashItems;
            char m_vecNeutralStashItems[0x18]; // 0x17e0            
            // metadata: MNetworkEnable
            // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecNeutralItemsConsumed;
            char m_vecNeutralItemsConsumed[0x18]; // 0x17f8            
            // metadata: MNetworkEnable
            // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PingConfirmationState_t> m_PingConfirmationStates;
            char m_PingConfirmationStates[0x68]; // 0x1810            
            // metadata: MNetworkEnable
            // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecKnownClearCamps;
            char m_vecKnownClearCamps[0x18]; // 0x1878            
            // metadata: MNetworkEnable
            Vector2D m_vPossibleWardPlacement[100]; // 0x1890            
            // metadata: MNetworkEnable
            float m_vPossibleWardRadii[100]; // 0x1bb0            
            // metadata: MNetworkEnable
            // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::DOTATeleportInfo_t> m_vecTrackedTeleports;
            char m_vecTrackedTeleports[0x68]; // 0x1d40            
            // metadata: MNetworkEnable
            source2sdk::client::CRoshanPhaseInfo m_roshanSpawnInfo; // 0x1da8            
            // metadata: MNetworkEnable
            std::int32_t m_nNextPowerRuneType; // 0x1dc0            
            // metadata: MNetworkEnable
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x1dc4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_DataNonSpectator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_DataNonSpectator) == 0x1dc8);
    };
};
