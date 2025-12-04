#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CMotionNode.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class MotionBlendItem
        {
        public:
            // m_pChild has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CMotionNode> m_pChild;
            char m_pChild[0x_]; // 0x_            
            float m_flKeyValue; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::MotionBlendItem, m_pChild) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::MotionBlendItem, m_flKeyValue) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::MotionBlendItem) == 0x_);
    };
};
