#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMonsterHunterCraftableRewardDefinition.hpp"
#include "source2sdk/client/CMonsterHunterEconItemDefinition.hpp"
#include "source2sdk/client/CMonsterHunterHeroCodexDefinition.hpp"
#include "source2sdk/client/CMonsterHunterHeroDefinition.hpp"
#include "source2sdk/client/CMonsterHunterMaterialDefinition.hpp"
#include "source2sdk/client/CMonsterHunterSmallRewardCategoryDefinition.hpp"
#include "source2sdk/client/CMonsterHunterTradeRecipeDefinition.hpp"
#include "source2sdk/client/CMonterHunterHunterRankRewardDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CMonsterHunterWorldDefinition
        {
        public:
            // m_vecMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterMaterialDefinition> m_vecMaterials;
            char m_vecMaterials[0x_]; // 0x_            
            // m_vecEconItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterEconItemDefinition> m_vecEconItems;
            char m_vecEconItems[0x_]; // 0x_            
            // m_vecCraftableRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterCraftableRewardDefinition> m_vecCraftableRewards;
            char m_vecCraftableRewards[0x_]; // 0x_            
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterHeroDefinition> m_vecHeroes;
            char m_vecHeroes[0x_]; // 0x_            
            // m_vecTradeRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterTradeRecipeDefinition> m_vecTradeRecipes;
            char m_vecTradeRecipes[0x_]; // 0x_            
            // m_mapCodexEntriesLocalized has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CMonsterHunterHeroCodexDefinition> m_mapCodexEntriesLocalized;
            char m_mapCodexEntriesLocalized[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strTokenLocStringPrefix; // 0x_            
            // m_vecSmallRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition> m_vecSmallRewards;
            char m_vecSmallRewards[0x_]; // 0x_            
            // m_vecHunterRankRewardLine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonterHunterHunterRankRewardDefinition> m_vecHunterRankRewardLine;
            char m_vecHunterRankRewardLine[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecMaterials) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecEconItems) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecCraftableRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecHeroes) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecTradeRecipes) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_mapCodexEntriesLocalized) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_strTokenLocStringPrefix) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecSmallRewards) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterWorldDefinition, m_vecHunterRankRewardLine) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterWorldDefinition) == 0x_);
    };
};
