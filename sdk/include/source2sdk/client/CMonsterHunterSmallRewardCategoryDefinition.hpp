#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterSmallRewardCategory.hpp"

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
        class CMonsterHunterSmallRewardCategoryDefinition
        {
        public:
            source2sdk::client::EMonsterHunterSmallRewardCategory m_eCategory; // 0x_            
            std::uint32_t m_unActionID; // 0x_            
            CUtlString m_strLocName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition, m_eCategory) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition, m_unActionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition, m_strLocName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition) == 0x_);
    };
};
