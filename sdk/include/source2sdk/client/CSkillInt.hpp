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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // 
        // static metadata: MPropertyCustomEditor "multi_int( 4 )"
        #pragma pack(push, 1)
        class CSkillInt
        {
        public:
            std::int32_t m_pValue[4]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSkillInt, m_pValue) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSkillInt) == 0x_);
    };
};
