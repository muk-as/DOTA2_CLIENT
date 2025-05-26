#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDrawCullingData
        {
        public:
            std::int8_t m_ConeAxis[3]; // 0x0            
            std::int8_t m_ConeCutoff; // 0x3            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CDrawCullingData, m_ConeAxis) == 0x0);
        static_assert(offsetof(source2sdk::modellib::CDrawCullingData, m_ConeCutoff) == 0x3);
        
        static_assert(sizeof(source2sdk::modellib::CDrawCullingData) == 0x4);
    };
};
