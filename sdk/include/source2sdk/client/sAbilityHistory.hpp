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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sAbilityHistory
        {
        public:
            source2sdk::entity2::GameTime_t flAppliedTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::C_DOTABaseAbility* pAbility; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sAbilityHistory, flAppliedTime) == 0x_);
        static_assert(offsetof(source2sdk::client::sAbilityHistory, pAbility) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sAbilityHistory) == 0x_);
    };
};
