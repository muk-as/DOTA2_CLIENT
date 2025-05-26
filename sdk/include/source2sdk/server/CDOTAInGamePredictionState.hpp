#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/InGamePredictionData_t.hpp"

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
        // Size: 0x558
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bVotingClosed"
        // static metadata: MNetworkVarNames "bool m_bAllPredictionsFinished"
        // static metadata: MNetworkVarNames "InGamePredictionData_t m_vecPredictions"
        // static metadata: MNetworkVarNames "LeagueID_t m_nLeagueID"
        #pragma pack(push, 1)
        class CDOTAInGamePredictionState : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bVotingClosed; // 0x4e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAllPredictionsFinished"
            bool m_bAllPredictionsFinished; // 0x4e1            
            uint8_t _pad04e2[0x6]; // 0x4e2
            // metadata: MNetworkEnable
            // m_vecPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::InGamePredictionData_t> m_vecPredictions;
            char m_vecPredictions[0x68]; // 0x4e8            
            // metadata: MNetworkEnable
            source2sdk::client::LeagueID_t m_nLeagueID; // 0x550            
            uint8_t _pad0554[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAInGamePredictionState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAInGamePredictionState) == 0x558);
    };
};
