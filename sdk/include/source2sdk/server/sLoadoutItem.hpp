#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sLoadoutItem
        {
        public:
            CUtlSymbolLarge name; // 0x_            
            std::int32_t iFlags; // 0x_            
            source2sdk::client::AbilityID_t iAbilityID; // 0x_            
            bool bPurchased; // 0x_            
            bool bPregame; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::sLoadoutItem, name) == 0x_);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, iFlags) == 0x_);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, iAbilityID) == 0x_);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, bPurchased) == 0x_);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, bPregame) == 0x_);
        
        static_assert(sizeof(source2sdk::server::sLoadoutItem) == 0x_);
    };
};
