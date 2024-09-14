#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 11
    // Alignment: 4
    // Size: 0x4
    enum class EBingoAuditAction : std::uint32_t
    {
        k_eBingoAuditAction_Invalid = 0x0,
        k_eBingoAuditAction_DevModifyTokens = 0x1,
        k_eBingoAuditAction_DevClearInventory = 0x2,
        k_eBingoAuditAction_DevRerollCard = 0x3,
        k_eBingoAuditAction_ShuffleCard = 0x4,
        k_eBingoAuditAction_RerollSquare = 0x5,
        k_eBingoAuditAction_UpgradeSquare = 0x6,
        k_eBingoAuditAction_ClaimRow = 0x7,
        k_eBingoAuditAction_EventActionTokenGrant = 0x8,
        k_eBingoAuditAction_SupportGrantTokens = 0x9,
        k_eBingoAuditAction_SupportStatThresholdFixup = 0xa,
    };
};
