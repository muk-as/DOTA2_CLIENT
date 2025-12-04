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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCraftworksRecipeTierDefinition
        {
        public:
            source2sdk::client::CraftworksRecipeTierID_t m_unRecipeTierID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strUnlockAction; // 0x_            
            CUtlString m_strUnlockLocDesc; // 0x_            
            CUtlString m_strUnlockLocProgress; // 0x_            
            CUtlString m_strCraftAction; // 0x_            
            CUtlString m_strTierClass; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_unRecipeTierID) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strUnlockAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strUnlockLocDesc) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strUnlockLocProgress) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strCraftAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CCraftworksRecipeTierDefinition, m_strTierClass) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CCraftworksRecipeTierDefinition) == 0x_);
    };
};
