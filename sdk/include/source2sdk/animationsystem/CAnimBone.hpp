#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimBone
        {
        public:
            CBufferString m_name; // 0x_            
            std::int32_t m_parent; // 0x_            
            Vector m_pos; // 0x_            
            QuaternionStorage m_quat; // 0x_            
            float m_scale; // 0x_            
            QuaternionStorage m_qAlignment; // 0x_            
            std::int32_t m_flags; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_parent) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_pos) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_quat) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_scale) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_qAlignment) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimBone, m_flags) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimBone) == 0x_);
    };
};
