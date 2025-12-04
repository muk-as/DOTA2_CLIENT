#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/item_definition_index_t.hpp"

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
        class CMonsterHunterCosmeticSkinGroup
        {
        public:
            CUtlString m_strSetName; // 0x_            
            // m_vecActionIDSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecActionIDSlots;
            char m_vecActionIDSlots[0x_]; // 0x_            
            bool m_bRequiresPremium; // 0x_            
            bool m_bShowPremiumPurchaseAsCrafting; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strCustomClass; // 0x_            
            CUtlString m_strCustomStyleSelectAnimation; // 0x_            
            float m_flAnimationFreezeTime; // 0x_            
            float m_flCustomStyleSelectRotation; // 0x_            
            source2sdk::client::item_definition_index_t m_unPreviewItemIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_strSetName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_vecActionIDSlots) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_bRequiresPremium) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_bShowPremiumPurchaseAsCrafting) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_strCustomClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_strCustomStyleSelectAnimation) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_flAnimationFreezeTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_flCustomStyleSelectRotation) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCosmeticSkinGroup, m_unPreviewItemIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterCosmeticSkinGroup) == 0x_);
    };
};
