#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMonsterHunterCosmeticSkinGroup.hpp"
#include "source2sdk/client/MonsterHunterEconItemID_t.hpp"
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
        class CMonsterHunterEconItemDefinition
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_econ_item"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::MonsterHunterEconItemID_t m_unEconItemID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strEconItemNavigationName; // 0x_            
            // metadata: MPropertyDescription "Custom panorama classes associated with relevant dashboard elements."
            CUtlString m_strCustomClass; // 0x_            
            // metadata: MPropertyDescription "Optional item used for preview purposes. If left empty, will use the first slot."
            source2sdk::client::item_definition_index_t m_unPreviewItemIndex; // 0x_            
            std::int32_t m_nPreviewPremiumCosmeticGroupIndex; // 0x_            
            // m_vecCosmeticSkinGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMonsterHunterCosmeticSkinGroup> m_vecCosmeticSkinGroups;
            char m_vecCosmeticSkinGroups[0x_]; // 0x_            
            float m_flPreviewModelRotation; // 0x_            
            float m_flPreviewModelZoom; // 0x_            
            bool m_bHasDetailedView; // 0x_            
            bool m_bCosmeticGroupsNeedToBeCraftedInOrder; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_unEconItemID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_strEconItemNavigationName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_strCustomClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_unPreviewItemIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_nPreviewPremiumCosmeticGroupIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_vecCosmeticSkinGroups) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_flPreviewModelRotation) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_flPreviewModelZoom) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_bHasDetailedView) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterEconItemDefinition, m_bCosmeticGroupsNeedToBeCraftedInOrder) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterEconItemDefinition) == 0x_);
    };
};
