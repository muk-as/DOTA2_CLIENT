#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EStickerbookAuditAction : std::uint32_t
    {
        STICKERBOOK_AUDIT_CREATE_PAGE = 0x0,
        STICKERBOOK_AUDIT_DELETE_PAGE = 0x1,
        STICKERBOOK_AUDIT_STICK_STICKERS = 0x2,
        STICKERBOOK_AUDIT_REPLACE_STICKERS = 0x3,
        STICKERBOOK_AUDIT_HERO_STICKER = 0x4,
    };
};
