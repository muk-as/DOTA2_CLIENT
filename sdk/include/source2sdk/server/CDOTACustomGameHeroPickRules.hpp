#pragma once
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseCustomHeroPickRules.hpp"
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
    // Size: 0x4c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DOTACustomHeroPickRulesPhase_t m_Phase"
    // static metadata: MNetworkVarNames "int32 m_nNumBansPerTeam"
    // static metadata: MNetworkVarNames "GameTime_t m_flEnterTime"
    #pragma pack(push, 1)
    class CDOTACustomGameHeroPickRules : public server::CDOTABaseCustomHeroPickRules
    {
    public:
        // metadata: MNetworkEnable
        client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x4b8        
        // metadata: MNetworkEnable
        int32_t m_nNumBansPerTeam; // 0x4bc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flEnterTime; // 0x4c0        
        int32_t m_nNumHeroesPicked; // 0x4c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTACustomGameHeroPickRules because it is not a standard-layout class
    static_assert(sizeof(CDOTACustomGameHeroPickRules) == 0x4c8);
};
