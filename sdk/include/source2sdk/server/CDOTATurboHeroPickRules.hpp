#pragma once
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"
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
    // Size: 0x4e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "DOTACustomHeroPickRulesPhase_t m_Phase"
    #pragma pack(push, 1)
    class CDOTATurboHeroPickRules : public server::CDOTABaseCustomHeroPickRules
    {
    public:
        // metadata: MNetworkEnable
        client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTATurboHeroPickRules because it is not a standard-layout class
    static_assert(sizeof(CDOTATurboHeroPickRules) == 0x4e8);
};
