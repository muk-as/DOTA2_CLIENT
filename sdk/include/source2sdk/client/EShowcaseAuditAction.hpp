#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x_
        enum class EShowcaseAuditAction : std::uint32_t
        {
            k_eShowcaseAuditAction_Invalid = 0x0,
            k_eShowcaseAuditAction_ShowcaseChanged = 0x1,
            k_eShowcaseAuditAction_AdminShowcaseReset = 0x2,
            k_eShowcaseAuditAction_AdminShowcaseAccountLocked = 0x3,
            k_eShowcaseAuditAction_AdminShowcaseExonerated = 0x4,
            k_eShowcaseAuditAction_AdminShowcaseConvicted = 0x5,
            k_eShowcaseAuditAction_AdminModerationApproved = 0x6,
            k_eShowcaseAuditAction_AdminModerationRejected = 0x7,
        };
    };
};
