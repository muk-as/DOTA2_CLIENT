#pragma once
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x948
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint8 m_nLod"
    #pragma pack(push, 1)
    class NextBotCombatCharacter : public server::CBaseCombatCharacter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8b8[0x88]; // 0x8b8
        // metadata: MNetworkEnable
        uint8_t m_nLod; // 0x940        
        bool m_didModelChange; // 0x941        
        [[maybe_unused]] std::uint8_t pad_0x942[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in NextBotCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(NextBotCombatCharacter) == 0x948);
};
