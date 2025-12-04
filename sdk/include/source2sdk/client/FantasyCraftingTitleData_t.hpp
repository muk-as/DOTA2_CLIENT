#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFantasyStatMatchMode.hpp"
#include "source2sdk/client/FantasyCraftingTrackedStat_t.hpp"
#include "source2sdk/client/FantasyTitle_t.hpp"

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
        struct FantasyCraftingTitleData_t
        {
        public:
            // metadata: MPropertyDescription "Unique integer ID of the title"
            source2sdk::client::FantasyTitle_t m_unTitle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Localization name of the title when used as an aggregate"
            CUtlString m_sLocName; // 0x_            
            // metadata: MPropertyDescription "Localization name of the title when used on it's own"
            CUtlString m_sLocNameIndividual; // 0x_            
            // metadata: MPropertyDescription "Localization token for explaining what the title does"
            CUtlString m_sLocExplanation; // 0x_            
            // metadata: MPropertyDescription "Localization token for explaining what the title does in sitations that allow mouseover"
            CUtlString m_sLocExplanationMouseOver; // 0x_            
            // metadata: MPropertyDescription "Controls how we decide to use the stat vector"
            source2sdk::client::EFantasyStatMatchMode m_eMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Stats to Track"
            // m_vecStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingTrackedStat_t> m_vecStats;
            char m_vecStats[0x_]; // 0x_            
            // metadata: MPropertyDescription "Bonus this title provides"
            std::int32_t m_nBonus; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_unTitle) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocNameIndividual) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocExplanation) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocExplanationMouseOver) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_eMode) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_vecStats) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_nBonus) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingTitleData_t) == 0x_);
    };
};
