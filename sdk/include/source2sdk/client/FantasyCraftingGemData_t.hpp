#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Fantasy_Gem_Type.hpp"
#include "source2sdk/client/Fantasy_Scoring.hpp"

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
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingGemData_t
        {
        public:
            // metadata: MPropertyDescription "Unique Identifier for the Gem Type"
            source2sdk::client::Fantasy_Gem_Type m_eType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Localization name of the gem"
            CUtlString m_sLocName; // 0x_            
            // metadata: MPropertyDescription "Which stats can this gem roll"
            // m_eStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::Fantasy_Scoring> m_eStats;
            char m_eStats[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemData_t, m_eType) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemData_t, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemData_t, m_eStats) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingGemData_t) == 0x_);
    };
};
