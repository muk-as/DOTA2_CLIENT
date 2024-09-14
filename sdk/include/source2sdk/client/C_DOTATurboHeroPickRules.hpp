#pragma once
#include "source2sdk/client/C_DOTABaseCustomHeroPickRules.hpp"
#include "source2sdk/client/DOTACustomHeroPickRulesPhase_t.hpp"
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
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "DOTACustomHeroPickRulesPhase_t m_Phase"
    #pragma pack(push, 1)
    class C_DOTATurboHeroPickRules : public client::C_DOTABaseCustomHeroPickRules
    {
    public:
        // metadata: MNetworkEnable
        client::DOTACustomHeroPickRulesPhase_t m_Phase; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTATurboHeroPickRules because it is not a standard-layout class
    static_assert(sizeof(C_DOTATurboHeroPickRules) == 0x540);
};
