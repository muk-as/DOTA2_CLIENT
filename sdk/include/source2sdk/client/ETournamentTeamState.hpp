#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 21
    // Alignment: 4
    // Size: 0x4
    enum class ETournamentTeamState : std::uint32_t
    {
        k_ETournamentTeamState_Unknown = 0x0,
        k_ETournamentTeamState_Node1 = 0x1,
        k_ETournamentTeamState_NodeMax = 0x400,
        k_ETournamentTeamState_Eliminated = 0x36b3,
        k_ETournamentTeamState_Forfeited = 0x36b4,
        k_ETournamentTeamState_Finished1st = 0x3a99,
        k_ETournamentTeamState_Finished2nd = 0x3a9a,
        k_ETournamentTeamState_Finished3rd = 0x3a9b,
        k_ETournamentTeamState_Finished4th = 0x3a9c,
        k_ETournamentTeamState_Finished5th = 0x3a9d,
        k_ETournamentTeamState_Finished6th = 0x3a9e,
        k_ETournamentTeamState_Finished7th = 0x3a9f,
        k_ETournamentTeamState_Finished8th = 0x3aa0,
        k_ETournamentTeamState_Finished9th = 0x3aa1,
        k_ETournamentTeamState_Finished10th = 0x3aa2,
        k_ETournamentTeamState_Finished11th = 0x3aa3,
        k_ETournamentTeamState_Finished12th = 0x3aa4,
        k_ETournamentTeamState_Finished13th = 0x3aa5,
        k_ETournamentTeamState_Finished14th = 0x3aa6,
        k_ETournamentTeamState_Finished15th = 0x3aa7,
        k_ETournamentTeamState_Finished16th = 0x3aa8,
    };
};
