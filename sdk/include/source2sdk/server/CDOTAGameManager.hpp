#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x2f58
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "bool m_CurrentHeroAvailable"
    #pragma pack(push, 1)
    class CDOTAGameManager
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x58[0x15e8]; // 0x58
        bool m_bCustomGame; // 0x1640        
        bool m_bEventGame; // 0x1641        
        bool m_bGameModeWantsDefaultNeutralItemSchema; // 0x1642        
        bool m_bGameModeFilteredAbilities; // 0x1643        
        char m_szAddOnGame[128]; // 0x1644        
        char m_szAddOnMap[128]; // 0x16c4        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x15d4]; // 0x1744
        KeyValues* m_pTutorialLessonKeyValues; // 0x2d18        
        KeyValues* m_pDivisionKeyValues; // 0x2d20        
        KeyValues* m_pMatchGroupsKeyValues; // 0x2d28        
        KeyValues* m_pAnimationStatues; // 0x2d30        
        KeyValues* m_pBotScriptsDedicatedServer; // 0x2d38        
        KeyValues* m_pkvWardPlacementLocations; // 0x2d40        
        KeyValues* m_pRegionKeyValues; // 0x2d48        
        KeyValues* m_pSurveyQuestionData; // 0x2d50        
        KeyValues3 m_AddonInfoKeyValues; // 0x2d58        
        [[maybe_unused]] std::uint8_t pad_0x2d68[0x28]; // 0x2d68
        KeyValues* m_pCountryKeyValues; // 0x2d90        
        [[maybe_unused]] std::uint8_t pad_0x2d98[0xc0]; // 0x2d98
        // metadata: MNetworkEnable
        bool m_CurrentHeroAvailable[256]; // 0x2e58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAGameManager, __m_pChainEntity) == 0x30);
    static_assert(offsetof(CDOTAGameManager, m_bCustomGame) == 0x1640);
    static_assert(offsetof(CDOTAGameManager, m_bEventGame) == 0x1641);
    static_assert(offsetof(CDOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x1642);
    static_assert(offsetof(CDOTAGameManager, m_bGameModeFilteredAbilities) == 0x1643);
    static_assert(offsetof(CDOTAGameManager, m_szAddOnGame) == 0x1644);
    static_assert(offsetof(CDOTAGameManager, m_szAddOnMap) == 0x16c4);
    static_assert(offsetof(CDOTAGameManager, m_pTutorialLessonKeyValues) == 0x2d18);
    static_assert(offsetof(CDOTAGameManager, m_pDivisionKeyValues) == 0x2d20);
    static_assert(offsetof(CDOTAGameManager, m_pMatchGroupsKeyValues) == 0x2d28);
    static_assert(offsetof(CDOTAGameManager, m_pAnimationStatues) == 0x2d30);
    static_assert(offsetof(CDOTAGameManager, m_pBotScriptsDedicatedServer) == 0x2d38);
    static_assert(offsetof(CDOTAGameManager, m_pkvWardPlacementLocations) == 0x2d40);
    static_assert(offsetof(CDOTAGameManager, m_pRegionKeyValues) == 0x2d48);
    static_assert(offsetof(CDOTAGameManager, m_pSurveyQuestionData) == 0x2d50);
    static_assert(offsetof(CDOTAGameManager, m_AddonInfoKeyValues) == 0x2d58);
    static_assert(offsetof(CDOTAGameManager, m_pCountryKeyValues) == 0x2d90);
    static_assert(offsetof(CDOTAGameManager, m_CurrentHeroAvailable) == 0x2e58);
    
    static_assert(sizeof(CDOTAGameManager) == 0x2f58);
};
