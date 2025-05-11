#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CraftworksRecipeTierID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksRecipeTierDefinition
        {
        public:
            source2sdk::client::CraftworksRecipeTierID_t m_unRecipeTierID; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            CUtlString m_strLocName; // 0x8            
            uint8_t _pad0010[0x18]; // 0x10
            CUtlString m_strUnlockAction; // 0x28            
            CUtlString m_strUnlockLocDesc; // 0x30            
            CUtlString m_strUnlockLocProgress; // 0x38            
            CUtlString m_strCraftAction; // 0x40            
            CUtlString m_strTierClass; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_unRecipeTierID) == 0x0);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strUnlockAction) == 0x28);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strUnlockLocDesc) == 0x30);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strUnlockLocProgress) == 0x38);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strCraftAction) == 0x40);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strTierClass) == 0x48);
        
        static_assert(sizeof(source2sdk::client::CCraftworksRecipeTierDefinition) == 0x50);
    };
};
