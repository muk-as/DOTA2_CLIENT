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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x3330
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "bool m_CurrentHeroAvailable"
        #pragma pack(push, 1)
        class C_DOTAGameManager
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x30            
            uint8_t _pad0058[0x15b8]; // 0x58
            bool m_bCustomGame; // 0x1610            
            bool m_bEventGame; // 0x1611            
            bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x1612            
            bool m_bGameModeFilteredAbilities; // 0x1613            
            char m_szAddOnGame[128]; // 0x1614            
            char m_szAddOnMap[128]; // 0x1694            
            uint8_t _pad1714[0x15a4]; // 0x1714
            KeyValues* m_pTutorialLessonKeyValues; // 0x2cb8            
            KeyValues* m_pDivisionKeyValues; // 0x2cc0            
            KeyValues* m_pMatchGroupsKeyValues; // 0x2cc8            
            KeyValues* m_pAnimationStatues; // 0x2cd0            
            KeyValues* m_pBotScriptsDedicatedServer; // 0x2cd8            
            KeyValues* m_pkvWardPlacementLocations; // 0x2ce0            
            KeyValues* m_pRegionKeyValues; // 0x2ce8            
            KeyValues* m_pSurveyQuestionData; // 0x2cf0            
            KeyValues3 m_AddonInfoKeyValues; // 0x2cf8            
            uint8_t _pad2d08[0x28]; // 0x2d08
            KeyValues* m_pCountryKeyValues; // 0x2d30            
            uint8_t _pad2d38[0x4d8]; // 0x2d38
            bool m_bLoadedPortraits[9]; // 0x3210            
            uint8_t _pad3219[0x7]; // 0x3219
            KeyValues* m_pControlGroupsKeyValues; // 0x3220            
            KeyValues3* m_pItemSuggestPreferenceKeyValues; // 0x3228            
            // metadata: MNetworkEnable
            bool m_CurrentHeroAvailable[256]; // 0x3230            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bCustomGame) == 0x1610);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bEventGame) == 0x1611);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x1612);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeFilteredAbilities) == 0x1613);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnGame) == 0x1614);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnMap) == 0x1694);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pTutorialLessonKeyValues) == 0x2cb8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pDivisionKeyValues) == 0x2cc0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pMatchGroupsKeyValues) == 0x2cc8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pAnimationStatues) == 0x2cd0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2cd8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pkvWardPlacementLocations) == 0x2ce0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pRegionKeyValues) == 0x2ce8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pSurveyQuestionData) == 0x2cf0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_AddonInfoKeyValues) == 0x2cf8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pCountryKeyValues) == 0x2d30);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bLoadedPortraits) == 0x3210);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pControlGroupsKeyValues) == 0x3220);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pItemSuggestPreferenceKeyValues) == 0x3228);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_CurrentHeroAvailable) == 0x3230);
        
        static_assert(sizeof(source2sdk::client::C_DOTAGameManager) == 0x3330);
    };
};
