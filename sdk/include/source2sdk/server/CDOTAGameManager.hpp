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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "bool m_CurrentHeroAvailable"
        #pragma pack(push, 1)
        class CDOTAGameManager
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
            // metadata: MNetworkEnable
            bool m_CurrentHeroAvailable[256]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, __m_pChainEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bCustomGame) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bEventGame) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeWantsDefaultNeutralItemSchema) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_bGameModeFilteredAbilities) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnGame) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_szAddOnMap) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pTutorialLessonKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pDivisionKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pMatchGroupsKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pAnimationStatues) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pBotScriptsDedicatedServer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pkvWardPlacementLocations) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pRegionKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_pSurveyQuestionData) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_AddonInfoKeyValues) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAGameManager, m_CurrentHeroAvailable) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTAGameManager) == 0x_);
    };
};
