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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CrownfallCreditsAABB_t
        {
        public:
            std::int32_t x; // 0x_            
            std::int32_t y; // 0x_            
            std::int32_t w; // 0x_            
            std::int32_t h; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, x) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, y) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, w) == 0x_);
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, h) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CrownfallCreditsAABB_t) == 0x_);
    };
};
