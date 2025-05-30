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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SkeletonAnimCapture_t_Camera_t
        {
        public:
            CTransform m_tmCamera; // 0x0            
            float m_flTime; // 0x20            
            uint8_t _pad0024[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Camera_t, m_tmCamera) == 0x0);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Camera_t, m_flTime) == 0x20);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t_Camera_t) == 0x30);
    };
};
