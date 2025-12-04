#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        class CMonsterHunterCraftableRewardDefinition
        {
        public:
            std::uint32_t m_unActionID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_mapRequiredMaterials has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,std::int32_t> m_mapRequiredMaterials;
            char m_mapRequiredMaterials[0x_]; // 0x_            
            bool m_bPremium; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterCraftableRewardDefinition, m_unActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCraftableRewardDefinition, m_mapRequiredMaterials) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterCraftableRewardDefinition, m_bPremium) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterCraftableRewardDefinition) == 0x_);
    };
};
