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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTATrophyDefinition
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "unique integer ID of this trophy"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_trophy_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            std::uint16_t m_nID; // 0x_            
            // metadata: MPropertyDescription "is this trophy still obtainable? This way we can have different presentations based on past and current trophies"
            bool m_bObtainable; // 0x_            
            // metadata: MPropertyDescription "should we render a progrss bar of progress towards the next tier"
            bool m_bShowProgressBar; // 0x_            
            // metadata: MPropertyDescription "should we show the popup when you earn the first tier of this trophy"
            bool m_bShowInitialEarn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "the date this trophy was introduced (YYYY-MM-DD or YYYY-MM-DD hh:mm:ss)"
            CUtlString m_sCreationDate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "how many badge points to grant for each increment"
            // metadata: MPropertyHideField
            std::uint32_t m_nBadgePointsPerUnit; // 0x_            
            // metadata: MPropertyDescription "how many units need to be leveled up in order to get the badge point grant"
            // metadata: MPropertyHideField
            std::uint32_t m_nUnitsPerBadgePoint; // 0x_            
            // metadata: MPropertyDescription "the cutoff for where badge points stop granting (0 is disable this limit)"
            // metadata: MPropertyHideField
            std::uint32_t m_nMaxUnitsForBadgePoints; // 0x_            
            // metadata: MPropertyDescription "higher sort tiers come first in presentation"
            // metadata: MPropertyHideField
            std::uint32_t m_nSortTier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "localization string ID to use for the user facing category trophy belongs to"
            CUtlString m_sLocCategory; // 0x_            
            // metadata: MPropertyDescription "localization string ID to use for the user facing name of this trophy"
            CUtlString m_sLocName; // 0x_            
            // metadata: MPropertyDescription "localization string ID to use for the user facing descriptiontrophy"
            CUtlString m_sLocDescription; // 0x_            
            // metadata: MPropertyDescription "pluralizable localization string ID to use for the user facing unit to display on the trophy tooltip (e.g. 1 Challenge Completed / 3 Challenges Completed)"
            CUtlString m_sLocUnitsPluralizable; // 0x_            
            // metadata: MPropertyAutoExpandSelf
            // m_vecLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::TrophyLevel_t> m_vecLevels;
            char m_vecLevels[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_bObtainable) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_bShowProgressBar) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_bShowInitialEarn) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sCreationDate) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nBadgePointsPerUnit) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nUnitsPerBadgePoint) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nMaxUnitsForBadgePoints) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_nSortTier) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_sLocUnitsPluralizable) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTATrophyDefinition, m_vecLevels) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTATrophyDefinition) == 0x_);
    };
};
