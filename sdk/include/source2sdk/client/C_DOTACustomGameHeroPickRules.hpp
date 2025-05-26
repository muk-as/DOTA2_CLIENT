#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseCustomHeroPickRules.hpp"
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DOTACustomHeroPickRulesPhase_t m_Phase"
        // static metadata: MNetworkVarNames "int32 m_nNumBansPerTeam"
        // static metadata: MNetworkVarNames "GameTime_t m_flEnterTime"
        #pragma pack(push, 1)
        class C_DOTACustomGameHeroPickRules : public source2sdk::client::C_DOTABaseCustomHeroPickRules
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x5e0            
            // metadata: MNetworkEnable
            std::int32_t m_nNumBansPerTeam; // 0x5e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flEnterTime; // 0x5e8            
            std::int32_t m_nNumHeroesPicked; // 0x5ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTACustomGameHeroPickRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTACustomGameHeroPickRules) == 0x5f0);
    };
};
