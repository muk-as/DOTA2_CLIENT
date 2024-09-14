#pragma once
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/InGamePredictionData_t.hpp"
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
    // Size: 0x518
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bVotingClosed"
    // static metadata: MNetworkVarNames "bool m_bAllPredictionsFinished"
    // static metadata: MNetworkVarNames "InGamePredictionData_t m_vecPredictions"
    // static metadata: MNetworkVarNames "LeagueID_t m_nLeagueID"
    #pragma pack(push, 1)
    class CDOTAInGamePredictionState : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bVotingClosed; // 0x4b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAllPredictionsFinished"
        bool m_bAllPredictionsFinished; // 0x4b9        
        [[maybe_unused]] std::uint8_t pad_0x4ba[0x6]; // 0x4ba
        // metadata: MNetworkEnable
        // m_vecPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::InGamePredictionData_t> m_vecPredictions;
        char m_vecPredictions[0x50]; // 0x4c0        
        // metadata: MNetworkEnable
        client::LeagueID_t m_nLeagueID; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAInGamePredictionState because it is not a standard-layout class
    static_assert(sizeof(CDOTAInGamePredictionState) == 0x518);
};
