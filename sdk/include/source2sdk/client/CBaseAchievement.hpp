#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0xc0
        // Has VTable
        #pragma pack(push, 1)
        class CBaseAchievement
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            char* m_pszName; // 0x18            
            std::int32_t m_iAchievementID; // 0x20            
            std::int32_t m_iFlags; // 0x24            
            std::int32_t m_iGoal; // 0x28            
            std::int32_t m_iProgressMsgIncrement; // 0x2c            
            std::int32_t m_iProgressMsgMinimum; // 0x30            
            std::int32_t m_iPointValue; // 0x34            
            bool m_bHideUntilAchieved; // 0x38            
            bool m_bStoreProgressInSteam; // 0x39            
            uint8_t _pad003a[0x6]; // 0x3a
            char* m_pInflictorClassNameFilter; // 0x40            
            char* m_pInflictorEntityNameFilter; // 0x48            
            char* m_pVictimClassNameFilter; // 0x50            
            char* m_pAttackerClassNameFilter; // 0x58            
            char* m_pMapNameFilter; // 0x60            
            char* m_pGameDirFilter; // 0x68            
            char** m_pszComponentNames; // 0x70            
            char** m_pszComponentDisplayNames; // 0x78            
            std::int32_t m_iNumComponents; // 0x80            
            uint8_t _pad0084[0x4]; // 0x84
            char* m_pszComponentPrefix; // 0x88            
            std::int32_t m_iComponentPrefixLen; // 0x90            
            bool m_bAchieved; // 0x94            
            uint8_t _pad0095[0x3]; // 0x95
            std::int32_t m_iCount; // 0x98            
            std::int32_t m_iProgressShown; // 0x9c            
            std::uint64_t m_iComponentBits; // 0xa0            
            uint8_t _pad00a8[0x8]; // 0xa8
            std::int32_t m_nUserSlot; // 0xb0            
            std::int32_t m_iDisplayOrder; // 0xb4            
            bool m_bShowOnHUD; // 0xb8            
            uint8_t _pad00b9[0x3]; // 0xb9
            std::int32_t m_iAssetAwardID; // 0xbc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszName) == 0x18);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iAchievementID) == 0x20);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iFlags) == 0x24);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iGoal) == 0x28);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iProgressMsgIncrement) == 0x2c);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iProgressMsgMinimum) == 0x30);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iPointValue) == 0x34);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bHideUntilAchieved) == 0x38);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bStoreProgressInSteam) == 0x39);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pInflictorClassNameFilter) == 0x40);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pInflictorEntityNameFilter) == 0x48);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pVictimClassNameFilter) == 0x50);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pAttackerClassNameFilter) == 0x58);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pMapNameFilter) == 0x60);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pGameDirFilter) == 0x68);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszComponentNames) == 0x70);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszComponentDisplayNames) == 0x78);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iNumComponents) == 0x80);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszComponentPrefix) == 0x88);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iComponentPrefixLen) == 0x90);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bAchieved) == 0x94);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iCount) == 0x98);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iProgressShown) == 0x9c);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iComponentBits) == 0xa0);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_nUserSlot) == 0xb0);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iDisplayOrder) == 0xb4);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bShowOnHUD) == 0xb8);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iAssetAwardID) == 0xbc);
        
        static_assert(sizeof(source2sdk::client::CBaseAchievement) == 0xc0);
    };
};
