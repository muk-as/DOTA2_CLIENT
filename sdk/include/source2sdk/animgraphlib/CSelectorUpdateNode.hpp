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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSelectorUpdateNode : public source2sdk::animgraphlib::CAnimUpdateNodeBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CAnimUpdateNodeRef> m_children;
            char m_children[0x_]; // 0x_            
            // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int8_t> m_tags;
            char m_tags[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CBlendCurve m_blendCurve; // 0x_            
            // m_flBlendTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimValue<float> m_flBlendTime;
            char m_flBlendTime[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hParameter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nTagIndex; // 0x_            
            source2sdk::animgraphlib::SelectorTagBehavior_t m_eTagBehavior; // 0x_            
            bool m_bResetOnChange; // 0x_            
            bool m_bLockWhenWaning; // 0x_            
            bool m_bSyncCyclesOnChange; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSelectorUpdateNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSelectorUpdateNode) == 0x_);
    };
};
