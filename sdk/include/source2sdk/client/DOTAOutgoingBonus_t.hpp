#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EDOTASpecialBonusOperation.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DOTAOutgoingBonus_t
        {
        public:
            char* m_pszAbilityName; // 0x_            
            char* m_pszSpecialName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fValue; // 0x_            
            source2sdk::client::EDOTASpecialBonusOperation m_eOperation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_pszAbilityName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_pszSpecialName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_fValue) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_eOperation) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DOTAOutgoingBonus_t) == 0x_);
    };
};
