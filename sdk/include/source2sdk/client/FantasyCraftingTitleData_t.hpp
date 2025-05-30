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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingTitleData_t
        {
        public:
            // metadata: MPropertyDescription "Unique integer ID of the title"
            source2sdk::client::FantasyTitle_t m_unTitle; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyDescription "Localization name of the title when used as an aggregate"
            CUtlString m_sLocName; // 0x8            
            // metadata: MPropertyDescription "Localization name of the title when used on it's own"
            CUtlString m_sLocNameIndividual; // 0x10            
            // metadata: MPropertyDescription "Localization token for explaining what the title does"
            CUtlString m_sLocExplanation; // 0x18            
            // metadata: MPropertyDescription "Localization token for explaining what the title does in sitations that allow mouseover"
            CUtlString m_sLocExplanationMouseOver; // 0x20            
            // metadata: MPropertyDescription "Controls how we decide to use the stat vector"
            source2sdk::client::EFantasyStatMatchMode m_eMode; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // metadata: MPropertyDescription "Stats to Track"
            // m_vecStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyCraftingTrackedStat_t> m_vecStats;
            char m_vecStats[0x18]; // 0x30            
            // metadata: MPropertyDescription "Bonus this title provides"
            std::int32_t m_nBonus; // 0x48            
            uint8_t _pad004c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_unTitle) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocNameIndividual) == 0x10);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocExplanation) == 0x18);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_sLocExplanationMouseOver) == 0x20);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_eMode) == 0x28);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_vecStats) == 0x30);
        static_assert(offsetof(source2sdk::client::FantasyCraftingTitleData_t, m_nBonus) == 0x48);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingTitleData_t) == 0x50);
    };
};
