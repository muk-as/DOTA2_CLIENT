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
        // Size: 0x3528
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
            uint8_t _pad0058[0x1648]; // 0x58
            bool m_bCustomGame; // 0x16a0            
            bool m_bEventGame; // 0x16a1            
            bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x16a2            
            bool m_bGameModeFilteredAbilities; // 0x16a3            
            char m_szAddOnGame[128]; // 0x16a4            
            char m_szAddOnMap[128]; // 0x1724            
            uint8_t _pad17a4[0x1634]; // 0x17a4
            KeyValues* m_pTutorialLessonKeyValues; // 0x2dd8            
            KeyValues* m_pDivisionKeyValues; // 0x2de0            
            KeyValues* m_pMatchGroupsKeyValues; // 0x2de8            
            KeyValues* m_pAnimationStatues; // 0x2df0            
            KeyValues* m_pBotScriptsDedicatedServer; // 0x2df8            
            KeyValues* m_pkvWardPlacementLocations; // 0x2e00            
            KeyValues* m_pRegionKeyValues; // 0x2e08            
            KeyValues* m_pSurveyQuestionData; // 0x2e10            
            KeyValues3 m_AddonInfoKeyValues; // 0x2e18            
            uint8_t _pad2e28[0x28]; // 0x2e28
            KeyValues* m_pCountryKeyValues; // 0x2e50            
            uint8_t _pad2e58[0x5b0]; // 0x2e58
            bool m_bLoadedPortraits[9]; // 0x3408            
            uint8_t _pad3411[0x7]; // 0x3411
            KeyValues* m_pControlGroupsKeyValues; // 0x3418            
            KeyValues3* m_pItemSuggestPreferenceKeyValues; // 0x3420            
            // metadata: MNetworkEnable
            bool m_CurrentHeroAvailable[256]; // 0x3428            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bCustomGame) == 0x16a0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bEventGame) == 0x16a1);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x16a2);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bGameModeFilteredAbilities) == 0x16a3);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnGame) == 0x16a4);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_szAddOnMap) == 0x1724);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pTutorialLessonKeyValues) == 0x2dd8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pDivisionKeyValues) == 0x2de0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pMatchGroupsKeyValues) == 0x2de8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pAnimationStatues) == 0x2df0);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2df8);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pkvWardPlacementLocations) == 0x2e00);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pRegionKeyValues) == 0x2e08);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pSurveyQuestionData) == 0x2e10);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_AddonInfoKeyValues) == 0x2e18);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pCountryKeyValues) == 0x2e50);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_bLoadedPortraits) == 0x3408);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pControlGroupsKeyValues) == 0x3418);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_pItemSuggestPreferenceKeyValues) == 0x3420);
        static_assert(offsetof(source2sdk::client::C_DOTAGameManager, m_CurrentHeroAvailable) == 0x3428);
        
        static_assert(sizeof(source2sdk::client::C_DOTAGameManager) == 0x3528);
    };
};
