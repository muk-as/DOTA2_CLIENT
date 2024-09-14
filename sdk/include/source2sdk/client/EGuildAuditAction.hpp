#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 26
    // Alignment: 4
    // Size: 0x4
    enum class EGuildAuditAction : std::uint32_t
    {
        k_EGuildAuditAction_Invalid = 0x0,
        k_EGuildAuditAction_GuildCreated = 0x1,
        k_EGuildAuditAction_GuildLanguageChanged = 0x2,
        k_EGuildAuditAction_GuildFlagsChanged = 0x3,
        k_EGuildAuditAction_GuildMemberJoined = 0x5,
        k_EGuildAuditAction_GuildMemberLeft = 0x6,
        k_EGuildAuditAction_GuildMemberKicked = 0x7,
        k_EGuildAuditAction_GuildMemberRoleChanged = 0x8,
        k_EGuildAuditAction_GuildLogoChanged = 0x9,
        k_EGuildAuditAction_GuildRegionChanged = 0xa,
        k_EGuildAuditAction_GuildDescriptionChanged = 0xb,
        k_EGuildAuditAction_GuildPrimaryColorChanged = 0xc,
        k_EGuildAuditAction_GuildSecondaryColorChanged = 0xd,
        k_EGuildAuditAction_GuildPatternChanged = 0xe,
        k_EGuildAuditAction_AdminClearedLogo = 0xf,
        k_EGuildAuditAction_GuildRequiredRankChanged = 0x10,
        k_EGuildAuditAction_GuildMotDChanged = 0x12,
        k_EGuildAuditAction_AdminResetName = 0x13,
        k_EGuildAuditAction_AdminResetTag = 0x14,
        k_EGuildAuditAction_AdminLock = 0x15,
        k_EGuildAuditAction_GuildNameChanged = 0x16,
        k_EGuildAuditAction_GuildTagChanged = 0x17,
        k_EGuildAuditAction_AdminPermitted = 0x18,
        k_EGuildAuditAction_AdminBlocked = 0x19,
        k_EGuildAuditAction_AdminBannedUser = 0x1a,
        k_EGuildAuditAction_AdminExonerated = 0x1b,
    };
};
