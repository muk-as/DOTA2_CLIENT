#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterCodexAuthor.hpp"

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
        #pragma pack(push, 1)
        class CMonsterHunterHeroCodexDefinition
        {
        public:
            CVDataLocalizedToken m_strLocHeroName; // 0x_            
            CVDataLocalizedToken m_strLocFieldNotes; // 0x_            
            CVDataLocalizedToken m_strLocNonHeroName; // 0x_            
            CVDataLocalizedToken m_strLocPersonaFieldNotes; // 0x_            
            CUtlString m_strNonHeroStickerName; // 0x_            
            CUtlString m_strNonHeroStickerDisplayName; // 0x_            
            bool m_bAlwaysUnlocked; // 0x_            
            bool m_bIsHero; // 0x_            
            bool m_bIsForeword; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nUnlocksAtCodexCompletionCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::EMonsterHunterCodexAuthor m_eAuthor; // 0x_            
            source2sdk::client::EMonsterHunterCodexAuthor m_ePersonaAuthor; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocHeroName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocFieldNotes) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocNonHeroName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strLocPersonaFieldNotes) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strNonHeroStickerName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_strNonHeroStickerDisplayName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_bAlwaysUnlocked) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_bIsHero) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_bIsForeword) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_nUnlocksAtCodexCompletionCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_eAuthor) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterHeroCodexDefinition, m_ePersonaAuthor) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterHeroCodexDefinition) == 0x_);
    };
};
