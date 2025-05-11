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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBlend2DUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            // m_items has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::BlendItem_t> m_items;
            char m_items[0x18]; // 0x60            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::TagSpan_t> m_tags;
            char m_tags[0x18]; // 0x78            
            source2sdk::animgraphlib::CParamSpanUpdater m_paramSpans; // 0x90            
            // m_nodeItemIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nodeItemIndices;
            char m_nodeItemIndices[0x18]; // 0xa8            
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0xc0            
            source2sdk::animgraphlib::AnimValueSource m_blendSourceX; // 0xd0            
            source2sdk::animgraphlib::CAnimParamHandle m_paramX; // 0xd4            
            uint8_t _pad00d6[0x2]; // 0xd6
            source2sdk::animgraphlib::AnimValueSource m_blendSourceY; // 0xd8            
            source2sdk::animgraphlib::CAnimParamHandle m_paramY; // 0xdc            
            uint8_t _pad00de[0x2]; // 0xde
            source2sdk::animgraphlib::Blend2DMode m_eBlendMode; // 0xe0            
            float m_playbackSpeed; // 0xe4            
            bool m_bLoop; // 0xe8            
            bool m_bLockBlendOnReset; // 0xe9            
            bool m_bLockWhenWaning; // 0xea            
            bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xeb            
            uint8_t _pad00ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBlend2DUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlend2DUpdateNode) == 0xf0);
    };
};
