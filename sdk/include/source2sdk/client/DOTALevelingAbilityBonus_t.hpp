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
        // Size: 0x28
        #pragma pack(push, 1)
        struct DOTALevelingAbilityBonus_t
        {
        public:
            char* m_pszName; // 0x0            
            // m_vecValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecValues;
            char m_vecValues[0x18]; // 0x8            
            source2sdk::client::EDOTASpecialBonusOperation m_eOperation; // 0x20            
            uint8_t _pad0021[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTALevelingAbilityBonus_t, m_pszName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTALevelingAbilityBonus_t, m_vecValues) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTALevelingAbilityBonus_t, m_eOperation) == 0x20);
        
        static_assert(sizeof(source2sdk::client::DOTALevelingAbilityBonus_t) == 0x28);
    };
};
