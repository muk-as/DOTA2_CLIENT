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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct TrackedStatHeroAdjectiveData_t
        {
        public:
            // metadata: MPropertyDescription "The adjective"
            CUtlString m_strAdjective; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrackedStatHeroAdjectiveData_t, m_strAdjective) == 0x0);
        
        static_assert(sizeof(source2sdk::client::TrackedStatHeroAdjectiveData_t) == 0x8);
    };
};
