#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/InGamePredictionData_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
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
    class CDOTAInGamePredictionState : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bVotingClosed; // 0x538        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAllPredictionsFinished"
        bool m_bAllPredictionsFinished; // 0x539        
        [[maybe_unused]] std::uint8_t pad_0x53a[0x6]; // 0x53a
        // metadata: MNetworkEnable
        // m_vecPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::InGamePredictionData_t> m_vecPredictions;
        char m_vecPredictions[0x50]; // 0x540        
        // metadata: MNetworkEnable
        client::LeagueID_t m_nLeagueID; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4]; // 0x594
        // m_vecPrevPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::InGamePredictionData_t> m_vecPrevPredictions;
        char m_vecPrevPredictions[0x18]; // 0x598        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTAInGamePredictionState because it is not a standard-layout class
    static_assert(sizeof(CDOTAInGamePredictionState) == 0x5b0);
};
