#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimMotorUpdaterBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_name; // 0x_            
            bool m_bDefault; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimMotorUpdaterBase, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimMotorUpdaterBase, m_bDefault) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimMotorUpdaterBase) == 0x_);
    };
};
