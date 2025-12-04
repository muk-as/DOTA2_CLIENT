#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAOverworldCharacterBase.hpp"
#include "source2sdk/client/CDOTAOverworldCharacterConditional.hpp"
#include "source2sdk/client/OverworldHeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldCharacter
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "If set, character will appear behind the specified hero in a traveling party, as long as 1 node meets the conditionals."
            source2sdk::client::CDOTAOverworldCharacterBase m_appearance; // 0x_            
            source2sdk::client::CDOTAOverworldCharacterConditional m_conditions; // 0x_            
            source2sdk::client::OverworldHeroID_t m_unHeroPartyID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::CDOTAOverworldCharacterConditional m_partyConditions; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_appearance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_conditions) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_unHeroPartyID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_partyConditions) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldCharacter) == 0x_);
    };
};
