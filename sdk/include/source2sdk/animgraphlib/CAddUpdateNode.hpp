#pragma once
#include "source2sdk/animgraphlib/BinaryNodeChildOption.hpp"
#include "source2sdk/animgraphlib/CBinaryUpdateNode.hpp"
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
    // Size: 0x98
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAddUpdateNode : public animgraphlib::CBinaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x88[0x4]; // 0x88
        animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x8c        
        bool m_bApplyToFootMotion; // 0x90        
        bool m_bApplyChannelsSeparately; // 0x91        
        bool m_bUseModelSpace; // 0x92        
        bool m_bApplyScale; // 0x93        
        [[maybe_unused]] std::uint8_t pad_0x94[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAddUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CAddUpdateNode) == 0x98);
};
