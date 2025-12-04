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
        class CMonterHunterHunterRankRewardDefinition
        {
        public:
            std::int32_t m_nHunterRank; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strLocRankName; // 0x_            
            std::uint32_t m_unActionID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonterHunterHunterRankRewardDefinition, m_nHunterRank) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonterHunterHunterRankRewardDefinition, m_strLocRankName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMonterHunterHunterRankRewardDefinition, m_unActionID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMonterHunterHunterRankRewardDefinition) == 0x_);
    };
};
