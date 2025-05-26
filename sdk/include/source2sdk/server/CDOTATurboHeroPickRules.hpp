#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"
#include "source2sdk/server/CDOTABaseCustomHeroPickRules.hpp"

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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DOTACustomHeroPickRulesPhase_t m_Phase"
        #pragma pack(push, 1)
        class CDOTATurboHeroPickRules : public source2sdk::server::CDOTABaseCustomHeroPickRules
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x4e0            
            uint8_t _pad04e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTATurboHeroPickRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTATurboHeroPickRules) == 0x4e8);
    };
};
