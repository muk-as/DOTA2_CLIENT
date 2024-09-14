#pragma once
#include "source2sdk/animgraphlib/TagSpan_t.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDirectPlaybackTagData
    {
    public:
        CUtlString m_sequenceName; // 0x0        
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDirectPlaybackTagData, m_sequenceName) == 0x0);
    static_assert(offsetof(CDirectPlaybackTagData, m_tags) == 0x8);
    
    static_assert(sizeof(CDirectPlaybackTagData) == 0x20);
};
