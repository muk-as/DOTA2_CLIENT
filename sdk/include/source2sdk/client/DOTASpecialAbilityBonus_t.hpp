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
        // Size: 0x10
        #pragma pack(push, 1)
        struct DOTASpecialAbilityBonus_t
        {
        public:
            char* m_pszName; // 0x0            
            float m_fValue; // 0x8            
            source2sdk::client::EDOTASpecialBonusOperation m_eOperation; // 0xc            
            uint8_t _pad000d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTASpecialAbilityBonus_t, m_pszName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbilityBonus_t, m_fValue) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTASpecialAbilityBonus_t, m_eOperation) == 0xc);
        
        static_assert(sizeof(source2sdk::client::DOTASpecialAbilityBonus_t) == 0x10);
    };
};
