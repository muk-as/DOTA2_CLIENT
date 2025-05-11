#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

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
        // Size: 0x20
        #pragma pack(push, 1)
        struct ItemRecipe_t
        {
        public:
            // m_vecRecipeComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecRecipeComponents;
            char m_vecRecipeComponents[0x18]; // 0x0            
            std::int32_t m_nPrimaryComponentIndex; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemRecipe_t, m_vecRecipeComponents) == 0x0);
        static_assert(offsetof(source2sdk::client::ItemRecipe_t, m_nPrimaryComponentIndex) == 0x18);
        
        static_assert(sizeof(source2sdk::client::ItemRecipe_t) == 0x20);
    };
};
