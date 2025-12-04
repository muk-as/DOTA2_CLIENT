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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x_
        enum class ECustomGameInstallStatus : std::uint32_t
        {
            k_ECustomGameInstallStatus_Unknown = 0x0,
            k_ECustomGameInstallStatus_Ready = 0x1,
            k_ECustomGameInstallStatus_Busy = 0x2,
            k_ECustomGameInstallStatus_FailedGeneric = 0x65,
            k_ECustomGameInstallStatus_FailedInternalError = 0x66,
            k_ECustomGameInstallStatus_RequestedTimestampTooOld = 0x67,
            k_ECustomGameInstallStatus_RequestedTimestampTooNew = 0x68,
            k_ECustomGameInstallStatus_CRCMismatch = 0x69,
            k_ECustomGameInstallStatus_FailedSteam = 0x6a,
            k_ECustomGameInstallStatus_FailedCanceled = 0x6b,
        };
    };
};
