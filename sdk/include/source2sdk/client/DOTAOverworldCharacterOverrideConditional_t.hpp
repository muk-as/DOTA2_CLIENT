#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAOverworldCharacterBase.hpp"
#include "source2sdk/client/CDOTAOverworldCharacterConditional.hpp"

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
        struct DOTAOverworldCharacterOverrideConditional_t
        {
        public:
            source2sdk::client::CDOTAOverworldCharacterConditional m_condition; // 0x_            
            source2sdk::client::CDOTAOverworldCharacterBase m_character; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAOverworldCharacterOverrideConditional_t, m_condition) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAOverworldCharacterOverrideConditional_t, m_character) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DOTAOverworldCharacterOverrideConditional_t) == 0x_);
    };
};
