#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseCustomHeroPickRules.hpp"
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"

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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DOTACustomHeroPickRulesPhase_t m_Phase"
        #pragma pack(push, 1)
        class C_DOTATurboHeroPickRules : public source2sdk::client::C_DOTABaseCustomHeroPickRules
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x510            
            uint8_t _pad0514[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTATurboHeroPickRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTATurboHeroPickRules) == 0x518);
    };
};
