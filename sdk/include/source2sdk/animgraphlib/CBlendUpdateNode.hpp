#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/BlendKeyType.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeRef.hpp"
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
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBlendUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children;
        char m_children[0x18]; // 0x60        
        // m_sortedOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_sortedOrder;
        char m_sortedOrder[0x18]; // 0x78        
        // m_targetValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_targetValues;
        char m_targetValues[0x18]; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x4]; // 0xa8
        animgraphlib::AnimValueSource m_blendValueSource; // 0xac        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb2[0x6]; // 0xb2
        animgraphlib::CAnimInputDamping m_damping; // 0xb8        
        animgraphlib::BlendKeyType m_blendKeyType; // 0xc8        
        bool m_bLockBlendOnReset; // 0xcc        
        bool m_bSyncCycles; // 0xcd        
        bool m_bLoop; // 0xce        
        bool m_bLockWhenWaning; // 0xcf        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBlendUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CBlendUpdateNode) == 0xd0);
};
