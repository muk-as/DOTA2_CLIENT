#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"

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
        struct BlendItem_t
        {
        public:
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimUpdateNodeRef m_pChild; // 0x_            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            Vector2D m_vPos; // 0x_            
            float m_flDuration; // 0x_            
            bool m_bUseCustomDuration; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::BlendItem_t, m_tags) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BlendItem_t, m_pChild) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BlendItem_t, m_hSequence) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BlendItem_t, m_vPos) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BlendItem_t, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BlendItem_t, m_bUseCustomDuration) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::BlendItem_t) == 0x_);
    };
};
