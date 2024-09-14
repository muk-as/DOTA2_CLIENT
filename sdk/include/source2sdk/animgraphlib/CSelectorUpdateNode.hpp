#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/SelectorTagBehavior_t.hpp"
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
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children;
        char m_children[0x18]; // 0x58        
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int8_t> m_tags;
        char m_tags[0x18]; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x88[0x4]; // 0x88
        animgraphlib::CBlendCurve m_blendCurve; // 0x8c        
        // m_flBlendTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimValue<float> m_flBlendTime;
        char m_flBlendTime[0x8]; // 0x94        
        animgraphlib::CAnimParamHandle m_hParameter; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9e[0x2]; // 0x9e
        int32_t m_nTagIndex; // 0xa0        
        animgraphlib::SelectorTagBehavior_t m_eTagBehavior; // 0xa4        
        bool m_bResetOnChange; // 0xa8        
        bool m_bLockWhenWaning; // 0xa9        
        bool m_bSyncCyclesOnChange; // 0xaa        
        [[maybe_unused]] std::uint8_t pad_0xab[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSelectorUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CSelectorUpdateNode) == 0xb0);
};
