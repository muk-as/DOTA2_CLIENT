#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EDOTASpecialBonusOperation.hpp"
namespace source2sdk
{
    namespace client
    {
        struct DOTALevelingAbilityBonus_t;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct DOTASpecialAbilityBonus_t;
    };
};

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
        // Size: 0x40
        #pragma pack(push, 1)
        struct DOTAFacetAbilityBonus_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecValues;
            char m_vecValues[0x18]; // 0x8            
            source2sdk::client::EDOTASpecialBonusOperation m_eOperation; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            std::int32_t m_nSpecialBonusesCount; // 0x24            
            source2sdk::client::DOTASpecialAbilityBonus_t* m_pSpecialBonuses; // 0x28            
            source2sdk::client::DOTALevelingAbilityBonus_t* m_pScepterBonus; // 0x30            
            source2sdk::client::DOTALevelingAbilityBonus_t* m_pShardBonus; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAFacetAbilityBonus_t, m_vecValues) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTAFacetAbilityBonus_t, m_eOperation) == 0x20);
        static_assert(offsetof(source2sdk::client::DOTAFacetAbilityBonus_t, m_nSpecialBonusesCount) == 0x24);
        static_assert(offsetof(source2sdk::client::DOTAFacetAbilityBonus_t, m_pSpecialBonuses) == 0x28);
        static_assert(offsetof(source2sdk::client::DOTAFacetAbilityBonus_t, m_pScepterBonus) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTAFacetAbilityBonus_t, m_pShardBonus) == 0x38);
        
        static_assert(sizeof(source2sdk::client::DOTAFacetAbilityBonus_t) == 0x40);
    };
};
