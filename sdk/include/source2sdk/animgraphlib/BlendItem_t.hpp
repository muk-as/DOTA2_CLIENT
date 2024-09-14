#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
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
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct BlendItem_t
    {
    public:
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x0        
        animgraphlib::CAnimUpdateNodeRef m_pChild; // 0x18        
        animationsystem::HSequence m_hSequence; // 0x28        
        Vector2D m_vPos; // 0x2c        
        float m_flDuration; // 0x34        
        bool m_bUseCustomDuration; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x39[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(BlendItem_t, m_tags) == 0x0);
    static_assert(offsetof(BlendItem_t, m_pChild) == 0x18);
    static_assert(offsetof(BlendItem_t, m_hSequence) == 0x28);
    static_assert(offsetof(BlendItem_t, m_vPos) == 0x2c);
    static_assert(offsetof(BlendItem_t, m_flDuration) == 0x34);
    static_assert(offsetof(BlendItem_t, m_bUseCustomDuration) == 0x38);
    
    static_assert(sizeof(BlendItem_t) == 0x40);
};
