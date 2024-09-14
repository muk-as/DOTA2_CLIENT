#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1d08
    // Has VTable
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_CurrentHeroAvailable"
    #pragma pack(push, 1)
    class C_DOTAGameManager
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x58[0xa18]; // 0x58
        bool m_bCustomGame; // 0xa70        
        bool m_bEventGame; // 0xa71        
        bool m_bGameModeWantsDefaultNeutralItemSchema; // 0xa72        
        bool m_bGameModeFilteredAbilities; // 0xa73        
        char m_szAddOnGame[128]; // 0xa74        
        char m_szAddOnMap[128]; // 0xaf4        
        [[maybe_unused]] std::uint8_t pad_0xb74[0xa04]; // 0xb74
        KeyValues* m_pTutorialLessonKeyValues; // 0x1578        
        KeyValues* m_pDivisionKeyValues; // 0x1580        
        KeyValues* m_pMatchGroupsKeyValues; // 0x1588        
        KeyValues* m_pAnimationStatues; // 0x1590        
        KeyValues* m_pBotScriptsDedicatedServer; // 0x1598        
        KeyValues* m_pkvWardPlacementLocations; // 0x15a0        
        KeyValues* m_pRegionKeyValues; // 0x15a8        
        KeyValues* m_pSurveyQuestionData; // 0x15b0        
        KeyValues3 m_AddonInfoKeyValues; // 0x15b8        
        [[maybe_unused]] std::uint8_t pad_0x15c8[0x28]; // 0x15c8
        KeyValues* m_pCountryKeyValues; // 0x15f0        
        [[maybe_unused]] std::uint8_t pad_0x15f8[0x5f8]; // 0x15f8
        bool m_bLoadedPortraits[9]; // 0x1bf0        
        [[maybe_unused]] std::uint8_t pad_0x1bf9[0x7]; // 0x1bf9
        KeyValues* m_pControlGroupsKeyValues; // 0x1c00        
        // metadata: MNetworkEnable
        bool m_CurrentHeroAvailable[256]; // 0x1c08        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_DOTAGameManager, __m_pChainEntity) == 0x30);
    static_assert(offsetof(C_DOTAGameManager, m_bCustomGame) == 0xa70);
    static_assert(offsetof(C_DOTAGameManager, m_bEventGame) == 0xa71);
    static_assert(offsetof(C_DOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0xa72);
    static_assert(offsetof(C_DOTAGameManager, m_bGameModeFilteredAbilities) == 0xa73);
    static_assert(offsetof(C_DOTAGameManager, m_szAddOnGame) == 0xa74);
    static_assert(offsetof(C_DOTAGameManager, m_szAddOnMap) == 0xaf4);
    static_assert(offsetof(C_DOTAGameManager, m_pTutorialLessonKeyValues) == 0x1578);
    static_assert(offsetof(C_DOTAGameManager, m_pDivisionKeyValues) == 0x1580);
    static_assert(offsetof(C_DOTAGameManager, m_pMatchGroupsKeyValues) == 0x1588);
    static_assert(offsetof(C_DOTAGameManager, m_pAnimationStatues) == 0x1590);
    static_assert(offsetof(C_DOTAGameManager, m_pBotScriptsDedicatedServer) == 0x1598);
    static_assert(offsetof(C_DOTAGameManager, m_pkvWardPlacementLocations) == 0x15a0);
    static_assert(offsetof(C_DOTAGameManager, m_pRegionKeyValues) == 0x15a8);
    static_assert(offsetof(C_DOTAGameManager, m_pSurveyQuestionData) == 0x15b0);
    static_assert(offsetof(C_DOTAGameManager, m_AddonInfoKeyValues) == 0x15b8);
    static_assert(offsetof(C_DOTAGameManager, m_pCountryKeyValues) == 0x15f0);
    static_assert(offsetof(C_DOTAGameManager, m_bLoadedPortraits) == 0x1bf0);
    static_assert(offsetof(C_DOTAGameManager, m_pControlGroupsKeyValues) == 0x1c00);
    static_assert(offsetof(C_DOTAGameManager, m_CurrentHeroAvailable) == 0x1c08);
    
    static_assert(sizeof(C_DOTAGameManager) == 0x1d08);
};
