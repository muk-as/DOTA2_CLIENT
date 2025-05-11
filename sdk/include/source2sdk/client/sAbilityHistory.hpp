#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTABaseAbility;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            source2sdk::entity2::GameTime_t flAppliedTime; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            source2sdk::client::C_DOTABaseAbility* pAbility; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sAbilityHistory, flAppliedTime) == 0x0);
        static_assert(offsetof(source2sdk::client::sAbilityHistory, pAbility) == 0x8);
        
        static_assert(sizeof(source2sdk::client::sAbilityHistory) == 0x10);
    };
};
