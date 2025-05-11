#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/SelectorTagBehavior_t.hpp"

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
        // Size: 0xb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSelectorUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad0058[0x8]; // 0x58
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x18]; // 0x60            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int8_t> m_tags;
            char m_tags[0x18]; // 0x78            
            uint8_t _pad0090[0x4]; // 0x90
            source2sdk::animgraphlib::CBlendCurve m_blendCurve; // 0x94            
            // m_flBlendTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimValue<float> m_flBlendTime;
            char m_flBlendTime[0x8]; // 0x9c            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameter; // 0xa4            
            uint8_t _pad00a6[0x2]; // 0xa6
            std::int32_t m_nTagIndex; // 0xa8            
            source2sdk::animgraphlib::SelectorTagBehavior_t m_eTagBehavior; // 0xac            
            bool m_bResetOnChange; // 0xb0            
            bool m_bLockWhenWaning; // 0xb1            
            bool m_bSyncCyclesOnChange; // 0xb2            
            uint8_t _pad00b3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSelectorUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSelectorUpdateNode) == 0xb8);
    };
};
