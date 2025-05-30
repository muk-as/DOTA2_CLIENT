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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksRecipeComponentQuantity
        {
        public:
            source2sdk::client::CraftworksComponentID_t m_unComponentID; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            std::uint32_t m_unQuantity; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeComponentQuantity, m_unComponentID) == 0x0);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeComponentQuantity, m_unQuantity) == 0x4);
        
        static_assert(sizeof(source2sdk::client::CCraftworksRecipeComponentQuantity) == 0x8);
    };
};
