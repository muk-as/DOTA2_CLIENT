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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimFoot
        {
        public:
            CUtlString m_name; // 0x_            
            Vector m_vBallOffset; // 0x_            
            Vector m_vHeelOffset; // 0x_            
            std::int32_t m_ankleBoneIndex; // 0x_            
            std::int32_t m_toeBoneIndex; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CAnimFoot, m_name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimFoot, m_vBallOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimFoot, m_vHeelOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimFoot, m_ankleBoneIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CAnimFoot, m_toeBoneIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CAnimFoot) == 0x_);
    };
};
