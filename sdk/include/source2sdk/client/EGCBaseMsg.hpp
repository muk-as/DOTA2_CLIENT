#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 22
    // Alignment: 4
    // Size: 0x4
    enum class EGCBaseMsg : std::uint32_t
    {
        k_EMsgGCInviteToParty = 0x1195,
        k_EMsgGCInvitationCreated = 0x1196,
        k_EMsgGCPartyInviteResponse = 0x1197,
        k_EMsgGCKickFromParty = 0x1198,
        k_EMsgGCLeaveParty = 0x1199,
        k_EMsgGCServerAvailable = 0x119a,
        k_EMsgGCClientConnectToServer = 0x119b,
        k_EMsgGCGameServerInfo = 0x119c,
        k_EMsgGCLANServerAvailable = 0x119f,
        k_EMsgGCInviteToLobby = 0x11a0,
        k_EMsgGCLobbyInviteResponse = 0x11a1,
        k_EMsgGCToClientPollFileRequest = 0x11a2,
        k_EMsgGCToClientPollFileResponse = 0x11a3,
        k_EMsgGCToGCPerformManualOp = 0x11a4,
        k_EMsgGCToGCPerformManualOpCompleted = 0x11a5,
        k_EMsgGCToGCReloadServerRegionSettings = 0x11a6,
        k_EMsgGCAdditionalWelcomeMsgList = 0x11a7,
        k_EMsgGCToClientApplyRemoteConVars = 0x11a8,
        k_EMsgGCToServerApplyRemoteConVars = 0x11a9,
        k_EMsgClientToGCIntegrityStatus = 0x11aa,
        k_EMsgClientToGCAggregateMetrics = 0x11ab,
        k_EMsgGCToClientAggregateMetricsBackoff = 0x11ac,
    };
};
