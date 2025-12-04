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
        #pragma pack(push, 1)
        struct DOTALevelingAbilityBonus_t
        {
        public:
            char* m_pszName; // 0x_            
            // m_vecValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecValues;
            char m_vecValues[0x_]; // 0x_            
            source2sdk::client::EDOTASpecialBonusOperation m_eOperation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTALevelingAbilityBonus_t, m_pszName) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTALevelingAbilityBonus_t, m_vecValues) == 0x_);
        static_assert(offsetof(source2sdk::client::DOTALevelingAbilityBonus_t, m_eOperation) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DOTALevelingAbilityBonus_t) == 0x_);
    };
};
