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
        // Enumerator count: 18
        // Alignment: 4
        // Size: 0x_
        enum class EGCEventClientMessages : std::uint32_t
        {
            k_EMsgClientToGCGetEventPoints = 0x3a98,
            k_EMsgClientToGCGetEventPointsResponse = 0x3a99,
            k_EMsgGCToClientEventPointsUpdated = 0x3a9a,
            k_EMsgClientToGCDevGrantEventPoints = 0x3a9b,
            k_EMsgClientToGCDevGrantEventPointsResponse = 0x3a9c,
            k_EMsgClientToGCDevReloadEventSchema = 0x3a9d,
            k_EMsgClientToGCDevReloadEventSchemaResponse = 0x3a9e,
            k_EMsgClientToGCDevResetEventState = 0x3a9f,
            k_EMsgClientToGCDevResetEventStateResponse = 0x3aa0,
            k_EMsgClientToGCDevGrantEventAction = 0x3aa1,
            k_EMsgClientToGCDevGrantEventActionResponse = 0x3aa2,
            k_EMsgClientToGCDevDeleteEventActions = 0x3aa3,
            k_EMsgClientToGCDevDeleteEventActionsResponse = 0x3aa4,
            k_EMsgClientToGCClaimEventAction = 0x3aac,
            k_EMsgClientToGCClaimEventActionResponse = 0x3aad,
            k_EMsgClientToGCGetPeriodicResource = 0x3afc,
            k_EMsgClientToGCGetPeriodicResourceResponse = 0x3afd,
            k_EMsgGCToClientPeriodicResourceUpdated = 0x3afe,
        };
    };
};
