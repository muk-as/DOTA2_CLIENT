#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 14
    // Alignment: 2
    // Size: 0x2
    enum class EFantasyMutationTarget : std::uint16_t
    {
        k_eFantasyMutationTarget_None = 0x0,
        k_eFantasyMutationTarget_Prefix = 0x1,
        k_eFantasyMutationTarget_Player = 0x2,
        k_eFantasyMutationTarget_Suffix = 0x4,
        k_eFantasyMutationTarget_Rubies = 0x8,
        k_eFantasyMutationTarget_Sapphires = 0x10,
        k_eFantasyMutationTarget_Emeralds = 0x20,
        k_eFantasyMutationTarget_Adjacent = 0x40,
        k_eFantasyMutationTarget_OperationChoice = 0x80,
        k_eFantasyMutationTarget_AllColor = 0x100,
        k_eFantasyMutationTarget_OneColor = 0x200,
        k_eFantasyMutationTarget_FirstColor = 0x400,
        k_eFantasyMutationTarget_LastColor = 0x800,
        k_eFantasyMutationTarget_All = 0x1000,
    };
};
