#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CRoshanPhaseInfo.hpp"
#include "source2sdk/server/DOTATeleportInfo_t.hpp"
#include "source2sdk/server/DataTeamPlayer_t.hpp"
#include "source2sdk/server/PingConfirmationState_t.hpp"
#include "source2sdk/server/TierNeutralInfo_t.hpp"
#include "source2sdk/server/TreeModelReplacement_t.hpp"
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
        // Size: 0x1cc8
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
        // static metadata: MNetworkVarNames "CRoshanPhaseInfo m_roshanSpawnInfo"
        // static metadata: MNetworkVarNames "int m_nNextPowerRuneType"
        // static metadata: MNetworkVarNames "int m_nNextPowerRuneSpawnIndex"
        #pragma pack(push, 1)
        class CDOTA_DataNonSpectator : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_vecDataTeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DataTeamPlayer_t> m_vecDataTeam;
            char m_vecDataTeam[0x68]; // 0x4e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_bWorldTreeState[256]; // 0x548            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_bNPCVisibleState[256]; // 0xd48            
            // metadata: MNetworkEnable
            // m_vecWorldTreeModelReplacements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TreeModelReplacement_t> m_vecWorldTreeModelReplacements;
            char m_vecWorldTreeModelReplacements[0x68]; // 0x1548            
            // metadata: MNetworkEnable
            Vector2D m_vDesiredWardPlacement[2]; // 0x15b0            
            // metadata: MNetworkEnable
            std::int32_t m_nEnemyStartingPosition[5]; // 0x15c0            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nCaptainInspectedHeroID; // 0x15d4            
            // metadata: MNetworkEnable
            float m_flSuggestedWardWeights[20]; // 0x15d8            
            // metadata: MNetworkEnable
            std::uint8_t m_nSuggestedWardIndexes[20]; // 0x1628            
            // metadata: MNetworkEnable
            std::int32_t m_iSuggestedLanes[5]; // 0x163c            
            // metadata: MNetworkEnable
            float m_iSuggestedLaneWeights[5]; // 0x1650            
            // metadata: MNetworkEnable
            bool m_bSuggestedLaneRoam[5]; // 0x1664            
            // metadata: MNetworkEnable
            bool m_bSuggestedLaneJungle[5]; // 0x1669            
            uint8_t _pad166e[0x2]; // 0x166e
            // metadata: MNetworkEnable
            // m_vecNeutralItemsTierInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::TierNeutralInfo_t> m_vecNeutralItemsTierInfo;
            char m_vecNeutralItemsTierInfo[0x68]; // 0x1670            
            // metadata: MNetworkEnable
            // m_vecNeutralStashItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecNeutralStashItems;
            char m_vecNeutralStashItems[0x18]; // 0x16d8            
            // metadata: MNetworkEnable
            // m_vecNeutralItemsConsumed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecNeutralItemsConsumed;
            char m_vecNeutralItemsConsumed[0x18]; // 0x16f0            
            // metadata: MNetworkEnable
            // m_PingConfirmationStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PingConfirmationState_t> m_PingConfirmationStates;
            char m_PingConfirmationStates[0x68]; // 0x1708            
            // metadata: MNetworkEnable
            // m_vecKnownClearCamps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecKnownClearCamps;
            char m_vecKnownClearCamps[0x18]; // 0x1770            
            // metadata: MNetworkEnable
            Vector2D m_vPossibleWardPlacement[100]; // 0x1788            
            // metadata: MNetworkEnable
            float m_vPossibleWardRadii[100]; // 0x1aa8            
            // metadata: MNetworkEnable
            // m_vecTrackedTeleports has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTATeleportInfo_t> m_vecTrackedTeleports;
            char m_vecTrackedTeleports[0x68]; // 0x1c38            
            // metadata: MNetworkEnable
            source2sdk::server::CRoshanPhaseInfo m_roshanSpawnInfo; // 0x1ca0            
            // metadata: MNetworkEnable
            std::int32_t m_nNextPowerRuneType; // 0x1cb8            
            // metadata: MNetworkEnable
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x1cbc            
            std::int32_t m_iTowerKills; // 0x1cc0            
            uint8_t _pad1cc4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DataNonSpectator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_DataNonSpectator) == 0x1cc8);
    };
};
