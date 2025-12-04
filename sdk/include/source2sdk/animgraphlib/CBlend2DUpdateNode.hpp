#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/Blend2DMode.hpp"
#include "source2sdk/animgraphlib/BlendItem_t.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CParamSpanUpdater.hpp"
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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBlend2DUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_items has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::BlendItem_t> m_items;
            char m_items[0x_]; // 0x_            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x_]; // 0x_            
            source2sdk::animgraphlib::CParamSpanUpdater m_paramSpans; // 0x_            
            // m_nodeItemIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nodeItemIndices;
            char m_nodeItemIndices[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x_            
            source2sdk::animgraphlib::AnimValueSource m_blendSourceX; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramX; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::AnimValueSource m_blendSourceY; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_paramY; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::Blend2DMode m_eBlendMode; // 0x_            
            float m_playbackSpeed; // 0x_            
            bool m_bLoop; // 0x_            
            bool m_bLockBlendOnReset; // 0x_            
            bool m_bLockWhenWaning; // 0x_            
            bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBlend2DUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlend2DUpdateNode) == 0x_);
    };
};
