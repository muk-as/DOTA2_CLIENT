#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/TrophyLevel_t.hpp"

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
        // Size: 0x68
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTATrophyDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "unique integer ID of this trophy"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_trophy_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            std::uint16_t m_nID; // 0x8            
            // metadata: MPropertyDescription "is this trophy still obtainable? This way we can have different presentations based on past and current trophies"
            bool m_bObtainable; // 0xa            
            // metadata: MPropertyDescription "should we render a progrss bar of progress towards the next tier"
            bool m_bShowProgressBar; // 0xb            
            // metadata: MPropertyDescription "should we show the popup when you earn the first tier of this trophy"
            bool m_bShowInitialEarn; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            // metadata: MPropertyDescription "the date this trophy was introduced (YYYY-MM-DD or YYYY-MM-DD hh:mm:ss)"
            CUtlString m_sCreationDate; // 0x10            
            uint8_t _pad0018[0x4]; // 0x18
            // metadata: MPropertyDescription "how many badge points to grant for each increment"
            // metadata: MPropertyHideField
            std::uint32_t m_nBadgePointsPerUnit; // 0x1c            
            // metadata: MPropertyDescription "how many units need to be leveled up in order to get the badge point grant"
            // metadata: MPropertyHideField
            std::uint32_t m_nUnitsPerBadgePoint; // 0x20            
            // metadata: MPropertyDescription "the cutoff for where badge points stop granting (0 is disable this limit)"
            // metadata: MPropertyHideField
            std::uint32_t m_nMaxUnitsForBadgePoints; // 0x24            
            // metadata: MPropertyDescription "higher sort tiers come first in presentation"
            // metadata: MPropertyHideField
            std::uint32_t m_nSortTier; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // metadata: MPropertyDescription "localization string ID to use for the user facing category trophy belongs to"
            CUtlString m_sLocCategory; // 0x30            
            // metadata: MPropertyDescription "localization string ID to use for the user facing name of this trophy"
            CUtlString m_sLocName; // 0x38            
            // metadata: MPropertyDescription "localization string ID to use for the user facing descriptiontrophy"
            CUtlString m_sLocDescription; // 0x40            
            // metadata: MPropertyDescription "pluralizable localization string ID to use for the user facing unit to display on the trophy tooltip (e.g. 1 Challenge Completed / 3 Challenges Completed)"
            CUtlString m_sLocUnitsPluralizable; // 0x48            
            // metadata: MPropertyAutoExpandSelf
            // m_vecLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::TrophyLevel_t> m_vecLevels;
            char m_vecLevels[0x18]; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nID) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_bObtainable) == 0xa);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_bShowProgressBar) == 0xb);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_bShowInitialEarn) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sCreationDate) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nBadgePointsPerUnit) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nUnitsPerBadgePoint) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nMaxUnitsForBadgePoints) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nSortTier) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocCategory) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocName) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocDescription) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocUnitsPluralizable) == 0x48);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_vecLevels) == 0x50);
        
        static_assert(sizeof(source2sdk::client::CDOTATrophyDefinition) == 0x68);
    };
};
