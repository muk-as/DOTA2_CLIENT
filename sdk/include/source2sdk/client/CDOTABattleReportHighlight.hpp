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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTABattleReportHighlight
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "Battle Report Highlight ID"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_battle_report_highlight_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            std::uint16_t m_nID; // 0x8            
            // metadata: MPropertyDescription "Enabled"
            bool m_bEnabled; // 0xa            
            uint8_t _pad000b[0x1]; // 0xb
            // metadata: MPropertyDescription "Battle Report Highlight Type"
            // metadata: MPropertyFriendlyName "Gameplay Outcome to Highlight"
            source2sdk::client::CMsgBattleReport_HighlightType m_eHighlightType; // 0xc            
            // metadata: MPropertyDescription "Battle Report Highlight Category"
            source2sdk::client::CMsgBattleReport_HighlightCategory m_eHighlightCategory; // 0x10            
            // metadata: MPropertyDescription "Battle Report Highlight Rarity"
            source2sdk::client::CMsgBattleReport_HighlightRarity m_eHighlightRarity; // 0x14            
            // metadata: MPropertyDescription "Localized name for this highlight"
            CUtlString m_sNameToken; // 0x18            
            // metadata: MPropertyDescription "Localized name for this highlight"
            CUtlString m_sFlavorToken; // 0x20            
            // metadata: MPropertyDescription "Helper Tooltip Available"
            bool m_bTooltip; // 0x28            
            uint8_t _pad0029[0x7]; // 0x29
            // metadata: MPropertyDescription "Helper Tooltip Loc String"
            // metadata: MPropertySuppressExpr "m_bTooltip == false"
            CUtlString m_sTooltipLocString; // 0x30            
            // metadata: MPropertyDescription "Number formatting for player score"
            source2sdk::client::EHighlightNumberFormat m_eFormat; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            // metadata: MPropertyDescription "Roles for the Highlight.  If none selected, use all roles."
            // metadata: MPropertySuppressExpr "m_eHighlightCategory != k_eHighlightRole"
            // m_vecRoles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMsgBattleReport_Role> m_vecRoles;
            char m_vecRoles[0x18]; // 0x40            
            // metadata: MPropertyDescription "Possible Tiers for the Highlight"
            // metadata: MPropertyAutoExpandSelf
            // m_vecTiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTABattleReportHighlightTier_t> m_vecTiers;
            char m_vecTiers[0x18]; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_nID) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_bEnabled) == 0xa);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eHighlightType) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eHighlightCategory) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eHighlightRarity) == 0x14);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sNameToken) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sFlavorToken) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_bTooltip) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_sTooltipLocString) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_eFormat) == 0x38);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_vecRoles) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTABattleReportHighlight, m_vecTiers) == 0x58);
        
        static_assert(sizeof(source2sdk::client::CDOTABattleReportHighlight) == 0x70);
    };
};
