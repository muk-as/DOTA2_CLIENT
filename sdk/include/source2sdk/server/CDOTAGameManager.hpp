#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x2f98
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "bool m_CurrentHeroAvailable"
        #pragma pack(push, 1)
        class CDOTAGameManager
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x30            
            uint8_t _pad0058[0x1608]; // 0x58
            bool m_bCustomGame; // 0x1660            
            bool m_bEventGame; // 0x1661            
            bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x1662            
            bool m_bGameModeFilteredAbilities; // 0x1663            
            char m_szAddOnGame[128]; // 0x1664            
            char m_szAddOnMap[128]; // 0x16e4            
            uint8_t _pad1764[0x15f4]; // 0x1764
            KeyValues* m_pTutorialLessonKeyValues; // 0x2d58            
            KeyValues* m_pDivisionKeyValues; // 0x2d60            
            KeyValues* m_pMatchGroupsKeyValues; // 0x2d68            
            KeyValues* m_pAnimationStatues; // 0x2d70            
            KeyValues* m_pBotScriptsDedicatedServer; // 0x2d78            
            KeyValues* m_pkvWardPlacementLocations; // 0x2d80            
            KeyValues* m_pRegionKeyValues; // 0x2d88            
            KeyValues* m_pSurveyQuestionData; // 0x2d90            
            KeyValues3 m_AddonInfoKeyValues; // 0x2d98            
            uint8_t _pad2da8[0x28]; // 0x2da8
            KeyValues* m_pCountryKeyValues; // 0x2dd0            
            uint8_t _pad2dd8[0xc0]; // 0x2dd8
            // metadata: MNetworkEnable
            bool m_CurrentHeroAvailable[256]; // 0x2e98            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bCustomGame) == 0x1660);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bEventGame) == 0x1661);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x1662);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeFilteredAbilities) == 0x1663);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnGame) == 0x1664);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnMap) == 0x16e4);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pTutorialLessonKeyValues) == 0x2d58);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pDivisionKeyValues) == 0x2d60);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pMatchGroupsKeyValues) == 0x2d68);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pAnimationStatues) == 0x2d70);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2d78);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pkvWardPlacementLocations) == 0x2d80);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pRegionKeyValues) == 0x2d88);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pSurveyQuestionData) == 0x2d90);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_AddonInfoKeyValues) == 0x2d98);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pCountryKeyValues) == 0x2dd0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_CurrentHeroAvailable) == 0x2e98);
        
        static_assert(sizeof(source2sdk::server::CDOTAGameManager) == 0x2f98);
    };
};
