#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTABaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sAbilityHistory
    {
    public:
        entity2::GameTime_t flAppliedTime; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        client::C_DOTABaseAbility* pAbility; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sAbilityHistory, flAppliedTime) == 0x0);
    static_assert(offsetof(sAbilityHistory, pAbility) == 0x8);
    
    static_assert(sizeof(sAbilityHistory) == 0x10);
};
