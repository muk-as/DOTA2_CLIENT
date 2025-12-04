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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CBaseAchievement
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            char* m_pszName; // 0x_            
            std::int32_t m_iAchievementID; // 0x_            
            std::int32_t m_iFlags; // 0x_            
            std::int32_t m_iGoal; // 0x_            
            std::int32_t m_iProgressMsgIncrement; // 0x_            
            std::int32_t m_iProgressMsgMinimum; // 0x_            
            std::int32_t m_iPointValue; // 0x_            
            bool m_bHideUntilAchieved; // 0x_            
            bool m_bStoreProgressInSteam; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pInflictorClassNameFilter; // 0x_            
            char* m_pInflictorEntityNameFilter; // 0x_            
            char* m_pVictimClassNameFilter; // 0x_            
            char* m_pAttackerClassNameFilter; // 0x_            
            char* m_pMapNameFilter; // 0x_            
            char* m_pGameDirFilter; // 0x_            
            char** m_pszComponentNames; // 0x_            
            char** m_pszComponentDisplayNames; // 0x_            
            std::int32_t m_iNumComponents; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pszComponentPrefix; // 0x_            
            std::int32_t m_iComponentPrefixLen; // 0x_            
            bool m_bAchieved; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iCount; // 0x_            
            std::int32_t m_iProgressShown; // 0x_            
            std::uint64_t m_iComponentBits; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nUserSlot; // 0x_            
            std::int32_t m_iDisplayOrder; // 0x_            
            bool m_bShowOnHUD; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iAssetAwardID; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszName) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iAchievementID) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iGoal) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iProgressMsgIncrement) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iProgressMsgMinimum) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iPointValue) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bHideUntilAchieved) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bStoreProgressInSteam) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pInflictorClassNameFilter) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pInflictorEntityNameFilter) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pVictimClassNameFilter) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pAttackerClassNameFilter) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pMapNameFilter) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pGameDirFilter) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszComponentNames) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszComponentDisplayNames) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iNumComponents) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_pszComponentPrefix) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iComponentPrefixLen) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bAchieved) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iProgressShown) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iComponentBits) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_nUserSlot) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iDisplayOrder) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_bShowOnHUD) == 0x_);
        static_assert(offsetof(source2sdk::client::CBaseAchievement, m_iAssetAwardID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CBaseAchievement) == 0x_);
    };
};
