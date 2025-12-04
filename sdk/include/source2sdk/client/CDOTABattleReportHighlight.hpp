#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTABattleReportHighlightTier_t.hpp"
#include "source2sdk/client/CMsgBattleReport_HighlightCategory.hpp"
#include "source2sdk/client/CMsgBattleReport_HighlightRarity.hpp"
#include "source2sdk/client/CMsgBattleReport_HighlightType.hpp"
#include "source2sdk/client/CMsgBattleReport_Role.hpp"
#include "source2sdk/client/EHighlightNumberFormat.hpp"

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
        class CDOTABattleReportHighlight
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Battle Report Highlight ID"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_battle_report_highlight_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            std::uint16_t m_nID; // 0x_            
            // metadata: MPropertyDescription "Enabled"
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Battle Report Highlight Type"
            // metadata: MPropertyFriendlyName "Gameplay Outcome to Highlight"
            source2sdk::client::CMsgBattleReport_HighlightType m_eHighlightType; // 0x_            
            // metadata: MPropertyDescription "Battle Report Highlight Category"
            source2sdk::client::CMsgBattleReport_HighlightCategory m_eHighlightCategory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Hero Specific"
            // metadata: MPropertySuppressExpr "m_eHighlightCategory == k_eHighlightHero"
            CUtlString m_sHeroName; // 0x_            
            // metadata: MPropertyDescription "Battle Report Highlight Rarity"
            source2sdk::client::CMsgBattleReport_HighlightRarity m_eHighlightRarity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Localized name for this highlight"
            CUtlString m_sNameToken; // 0x_            
            // metadata: MPropertyDescription "Localized name for this highlight"
            CUtlString m_sFlavorToken; // 0x_            
            // metadata: MPropertyDescription "Helper Tooltip Available"
            bool m_bTooltip; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Helper Tooltip Loc String"
            // metadata: MPropertySuppressExpr "m_bTooltip == false"
            CUtlString m_sTooltipLocString; // 0x_            
            // metadata: MPropertyDescription "Number formatting for player score"
            source2sdk::client::EHighlightNumberFormat m_eFormat; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Roles for the Highlight.  If none selected, use all roles."
            // metadata: MPropertySuppressExpr "m_eHighlightCategory != k_eHighlightRole"
            // m_vecRoles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMsgBattleReport_Role> m_vecRoles;
            char m_vecRoles[0x_]; // 0x_            
            // metadata: MPropertyDescription "Possible Tiers for the Highlight"
            // metadata: MPropertyAutoExpandSelf
            // m_vecTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTABattleReportHighlightTier_t> m_vecTiers;
            char m_vecTiers[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_nID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_bEnabled) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eHighlightType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eHighlightCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sHeroName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eHighlightRarity) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sNameToken) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sFlavorToken) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_bTooltip) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sTooltipLocString) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eFormat) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_vecRoles) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_vecTiers) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTABattleReportHighlight) == 0x_);
    };
};
