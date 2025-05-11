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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct WaterWheelDrag_t
        {
        public:
            float m_flFractionOfWheelSubmerged; // 0x0            
            float m_flWheelDrag; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::WaterWheelDrag_t, m_flFractionOfWheelSubmerged) == 0x0);
        static_assert(offsetof(source2sdk::client::WaterWheelDrag_t, m_flWheelDrag) == 0x4);
        
        static_assert(sizeof(source2sdk::client::WaterWheelDrag_t) == 0x8);
    };
};
