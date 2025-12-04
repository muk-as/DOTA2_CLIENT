#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimReplayFrame.hpp"

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimGraphDebugReplay
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_animGraphFileName; // 0x_            
            // m_frameList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimReplayFrame>> m_frameList;
            char m_frameList[0x_]; // 0x_            
            std::int32_t m_startIndex; // 0x_            
            std::int32_t m_writeIndex; // 0x_            
            std::int32_t m_frameCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimGraphDebugReplay, m_animGraphFileName) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimGraphDebugReplay, m_frameList) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimGraphDebugReplay, m_startIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimGraphDebugReplay, m_writeIndex) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimGraphDebugReplay, m_frameCount) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimGraphDebugReplay) == 0x_);
    };
};
