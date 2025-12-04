#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CraftworksComponentID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksRecipeComponentQuantity
        {
        public:
            source2sdk::client::CraftworksComponentID_t m_unComponentID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_unQuantity; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeComponentQuantity, m_unComponentID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeComponentQuantity, m_unQuantity) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCraftworksRecipeComponentQuantity) == 0x_);
    };
};
