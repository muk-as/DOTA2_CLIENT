#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFantasyMutationOperation.hpp"
#include "source2sdk/client/EFantasyMutationTarget.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingGemMutation_t
        {
        public:
            // metadata: MPropertyDescription "What this operation is targeting"
            source2sdk::client::EFantasyMutationTarget m_eTarget; // 0x0            
            uint8_t _pad0002[0x2]; // 0x2
            // metadata: MPropertyDescription "What we are doing in this operation"
            source2sdk::client::EFantasyMutationOperation m_eOperation; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemMutation_t, m_eTarget) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemMutation_t, m_eOperation) == 0x4);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingGemMutation_t) == 0x8);
    };
};
