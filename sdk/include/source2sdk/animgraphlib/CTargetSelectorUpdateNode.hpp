#pragma once
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
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTargetSelectorUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        // m_children has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CAnimUpdateNodeRef> m_children;
        char m_children[0x18]; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x78[0x4]; // 0x78
        animgraphlib::CAnimParamHandle m_hTargetPosition; // 0x7c        
        animgraphlib::CAnimParamHandle m_hTargetFacePositionParameter; // 0x7e        
        animgraphlib::CAnimParamHandle m_hForwardDirectionOverrideParameter; // 0x80        
        bool m_bTargetPositionIsWorldSpace; // 0x82        
        bool m_bTargetFacePositionIsWorldSpace; // 0x83        
        [[maybe_unused]] std::uint8_t pad_0x84[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTargetSelectorUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CTargetSelectorUpdateNode) == 0x88);
};
