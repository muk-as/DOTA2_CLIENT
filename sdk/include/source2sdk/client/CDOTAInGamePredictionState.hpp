#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/InGamePredictionData_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"

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
        // Size: 0x670
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bVotingClosed"
        // static metadata: MNetworkVarNames "bool m_bAllPredictionsFinished"
        // static metadata: MNetworkVarNames "InGamePredictionData_t m_vecPredictions"
        // static metadata: MNetworkVarNames "LeagueID_t m_nLeagueID"
        #pragma pack(push, 1)
        class CDOTAInGamePredictionState : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bVotingClosed; // 0x5e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAllPredictionsFinished"
            bool m_bAllPredictionsFinished; // 0x5e1            
            uint8_t _pad05e2[0x6]; // 0x5e2
            // metadata: MNetworkEnable
            // m_vecPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::InGamePredictionData_t> m_vecPredictions;
            char m_vecPredictions[0x68]; // 0x5e8            
            // metadata: MNetworkEnable
            source2sdk::client::LeagueID_t m_nLeagueID; // 0x650            
            uint8_t _pad0654[0x4]; // 0x654
            // m_vecPrevPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::InGamePredictionData_t> m_vecPrevPredictions;
            char m_vecPrevPredictions[0x18]; // 0x658            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAInGamePredictionState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAInGamePredictionState) == 0x670);
    };
};
