#pragma once
#include "source2sdk/client/CDOTAOverworldCharacterBase.hpp"
#include "source2sdk/client/CDOTAOverworldCharacterConditional.hpp"
#include "source2sdk/client/OverworldHeroID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAOverworldCharacter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "If set, character will appear behind the specified hero in a traveling party, as long as 1 node meets the conditionals."
        client::CDOTAOverworldCharacterBase m_appearance; // 0x8        
        client::CDOTAOverworldCharacterConditional m_conditions; // 0x30        
        client::OverworldHeroID_t m_unHeroPartyID; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x7]; // 0x51
        client::CDOTAOverworldCharacterConditional m_partyConditions; // 0x58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAOverworldCharacter, m_appearance) == 0x8);
    static_assert(offsetof(CDOTAOverworldCharacter, m_conditions) == 0x30);
    static_assert(offsetof(CDOTAOverworldCharacter, m_unHeroPartyID) == 0x50);
    static_assert(offsetof(CDOTAOverworldCharacter, m_partyConditions) == 0x58);
    
    static_assert(sizeof(CDOTAOverworldCharacter) == 0x78);
};
