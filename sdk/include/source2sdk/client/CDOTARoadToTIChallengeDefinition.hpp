#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/client/RoadToTIQuestDefinition_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x98
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTARoadToTIChallengeDefinition
        {
        public:
            // metadata: MPropertyDescription "Event ID that the challenge is for"
            source2sdk::client::EEvent m_eEvent; // 0x0            
            // metadata: MPropertyDescription "Total Quest Periods within the challenge"
            std::uint32_t m_unTotalQuestPeriods; // 0x4            
            // metadata: MPropertyDescription "Number of hero options expected in each quest."
            std::uint32_t m_unHeroesPerQuest; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MPropertyDescription "A list of quest difficulties. This defines the pattern for each period and total quests per period. Eg [1, 1, 2] would mean every period has 3 quests (two easy, then one medium)."
            // m_vecQuestPattern has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecQuestPattern;
            char m_vecQuestPattern[0x18]; // 0x10            
            // metadata: MPropertyDescription "Item def for Culling Blade item"
            source2sdk::client::item_definition_index_t m_unCullingBladeItemDef; // 0x28            
            // metadata: MPropertyDescription "Item def for Reroll Token item"
            source2sdk::client::item_definition_index_t m_unRerollItemDef; // 0x2c            
            // metadata: MPropertyDescription "The quests in the challenge"
            // m_vecQuests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::RoadToTIQuestDefinition_t> m_vecQuests;
            char m_vecQuests[0x18]; // 0x30            
            uint8_t _pad0048[0x50];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_eEvent) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_unTotalQuestPeriods) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_unHeroesPerQuest) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_vecQuestPattern) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_unCullingBladeItemDef) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_unRerollItemDef) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTARoadToTIChallengeDefinition, m_vecQuests) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CDOTARoadToTIChallengeDefinition) == 0x98);
    };
};
