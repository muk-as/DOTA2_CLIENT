#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterMaterialRarity.hpp"
#include "source2sdk/client/EMonsterHunterMaterialTradeConversion.hpp"

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
        #pragma pack(push, 1)
        class CMonsterHunterTradeRecipeDefinition
        {
        public:
            source2sdk::client::EMonsterHunterMaterialTradeConversion m_eTradeConversion; // 0x_            
            std::int32_t m_nOfferCount; // 0x_            
            std::int32_t m_nResultCount; // 0x_            
            bool m_bOfferTokensMustBeTheSame; // 0x_            
            bool m_bCanChooseResult; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocTitle; // 0x_            
            CUtlString m_strDescription; // 0x_            
            std::uint32_t m_unUnlockPrerequisiteActionID; // 0x_            
            std::uint32_t m_unResultActionID; // 0x_            
            source2sdk::client::EMonsterHunterMaterialRarity m_eRequiredOfferRarity; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_eTradeConversion) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_nOfferCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_nResultCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_bOfferTokensMustBeTheSame) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_bCanChooseResult) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_strLocTitle) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_strDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_unUnlockPrerequisiteActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_unResultActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_eRequiredOfferRarity) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterTradeRecipeDefinition) == 0x_);
    };
};
