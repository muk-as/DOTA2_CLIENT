#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

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
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "bool m_CurrentHeroAvailable"
        #pragma pack(push, 1)
        class C_DOTAGameManager
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCustomGame; // 0x_            
            bool m_bEventGame; // 0x_            
            bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x_            
            bool m_bGameModeFilteredAbilities; // 0x_            
            char m_szAddOnGame[128]; // 0x_            
            char m_szAddOnMap[128]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            KeyValues* m_pTutorialLessonKeyValues; // 0x_            
            KeyValues* m_pDivisionKeyValues; // 0x_            
            KeyValues* m_pMatchGroupsKeyValues; // 0x_            
            KeyValues* m_pAnimationStatues; // 0x_            
            KeyValues* m_pBotScriptsDedicatedServer; // 0x_            
            KeyValues* m_pkvWardPlacementLocations; // 0x_            
            KeyValues* m_pRegionKeyValues; // 0x_            
            KeyValues* m_pSurveyQuestionData; // 0x_            
            KeyValues3 m_AddonInfoKeyValues; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            KeyValues* m_pCountryKeyValues; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bLoadedPortraits[9]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            KeyValues* m_pControlGroupsKeyValues; // 0x_            
            KeyValues3* m_pItemSuggestPreferenceKeyValues; // 0x_            
            // metadata: MNetworkEnable
            bool m_CurrentHeroAvailable[256]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, __m_pChainEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bCustomGame) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bEventGame) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeFilteredAbilities) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnGame) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnMap) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pTutorialLessonKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pDivisionKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pMatchGroupsKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pAnimationStatues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pBotScriptsDedicatedServer) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pkvWardPlacementLocations) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pRegionKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pSurveyQuestionData) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_AddonInfoKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pCountryKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bLoadedPortraits) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pControlGroupsKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pItemSuggestPreferenceKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_CurrentHeroAvailable) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_DOTAGameManager) == 0x_);
    };
};
