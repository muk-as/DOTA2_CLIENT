#pragma once
#include "source2sdk/animgraphlib/CAnimReplayFrame.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimGraphDebugReplay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x40]; // 0x0
        CUtlString m_animGraphFileName; // 0x40        
        // m_frameList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPtr<animgraphlib::CAnimReplayFrame>> m_frameList;
        char m_frameList[0x18]; // 0x48        
        int32_t m_startIndex; // 0x60        
        int32_t m_writeIndex; // 0x64        
        int32_t m_frameCount; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimGraphDebugReplay, m_animGraphFileName) == 0x40);
    static_assert(offsetof(CAnimGraphDebugReplay, m_frameList) == 0x48);
    static_assert(offsetof(CAnimGraphDebugReplay, m_startIndex) == 0x60);
    static_assert(offsetof(CAnimGraphDebugReplay, m_writeIndex) == 0x64);
    static_assert(offsetof(CAnimGraphDebugReplay, m_frameCount) == 0x68);
    
    static_assert(sizeof(CAnimGraphDebugReplay) == 0x70);
};
