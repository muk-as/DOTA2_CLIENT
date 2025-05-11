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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct DOTAOutgoingBonus_t
        {
        public:
            char* m_pszAbilityName; // 0x0            
            char* m_pszSpecialName; // 0x8            
            uint8_t _pad0010[0x4]; // 0x10
            float m_fValue; // 0x14            
            source2sdk::client::EDOTASpecialBonusOperation m_eOperation; // 0x18            
            uint8_t _pad0019[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_pszAbilityName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_pszSpecialName) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_fValue) == 0x14);
        static_assert(offsetof(source2sdk::client::DOTAOutgoingBonus_t, m_eOperation) == 0x18);
        
        static_assert(sizeof(source2sdk::client::DOTAOutgoingBonus_t) == 0x20);
    };
};
