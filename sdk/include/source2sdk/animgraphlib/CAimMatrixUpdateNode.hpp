#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AimMatrixOpFixedSettings_t.hpp"
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x170
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAimMatrixUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        animgraphlib::AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x150[0x8]; // 0x150
        animgraphlib::AnimVectorSource m_target; // 0x158        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x15c        
        [[maybe_unused]] std::uint8_t pad_0x15e[0x2]; // 0x15e
        animationsystem::HSequence m_hSequence; // 0x160        
        bool m_bResetChild; // 0x164        
        bool m_bLockWhenWaning; // 0x165        
        [[maybe_unused]] std::uint8_t pad_0x166[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAimMatrixUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CAimMatrixUpdateNode) == 0x170);
};
