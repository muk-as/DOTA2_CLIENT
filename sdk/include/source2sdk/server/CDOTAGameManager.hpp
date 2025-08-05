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
        // Size: 0x2ea8
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
            uint8_t _pad2d08[0xa0]; // 0x2d08
            // metadata: MNetworkEnable
            bool m_CurrentHeroAvailable[256]; // 0x2da8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, __m_pChainEntity) == 0x30);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bCustomGame) == 0x1610);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bEventGame) == 0x1611);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x1612);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeFilteredAbilities) == 0x1613);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnGame) == 0x1614);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnMap) == 0x1694);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pTutorialLessonKeyValues) == 0x2cb8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pDivisionKeyValues) == 0x2cc0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pMatchGroupsKeyValues) == 0x2cc8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pAnimationStatues) == 0x2cd0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2cd8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pkvWardPlacementLocations) == 0x2ce0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pRegionKeyValues) == 0x2ce8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pSurveyQuestionData) == 0x2cf0);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_AddonInfoKeyValues) == 0x2cf8);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_CurrentHeroAvailable) == 0x2da8);
        
        static_assert(sizeof(source2sdk::server::CDOTAGameManager) == 0x2ea8);
    };
};
