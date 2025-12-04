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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct ItemRecipe_t
        {
        public:
            // m_vecRecipeComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecRecipeComponents;
            char m_vecRecipeComponents[0x_]; // 0x_            
            std::int32_t m_nPrimaryComponentIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemRecipe_t, m_vecRecipeComponents) == 0x_);
        static_assert(offsetof(source2sdk::client::ItemRecipe_t, m_nPrimaryComponentIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ItemRecipe_t) == 0x_);
    };
};
