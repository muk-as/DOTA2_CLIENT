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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sLoadoutItem
        {
        public:
            CUtlSymbolLarge name; // 0x0            
            std::int32_t iFlags; // 0x8            
            source2sdk::client::AbilityID_t iAbilityID; // 0xc            
            bool bPurchased; // 0x10            
            uint8_t _pad0011[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::sLoadoutItem, name) == 0x0);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, iFlags) == 0x8);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, iAbilityID) == 0xc);
        static_assert(offsetof(source2sdk::server::sLoadoutItem, bPurchased) == 0x10);
        
        static_assert(sizeof(source2sdk::server::sLoadoutItem) == 0x18);
    };
};
