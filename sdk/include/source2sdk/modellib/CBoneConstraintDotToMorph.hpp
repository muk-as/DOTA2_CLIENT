#pragma once
#include "source2sdk/modellib/CBoneConstraintBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x60
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBoneConstraintDotToMorph : public modellib::CBoneConstraintBase
    {
    public:
        CUtlString m_sBoneName; // 0x28        
        CUtlString m_sTargetBoneName; // 0x30        
        CUtlString m_sMorphChannelName; // 0x38        
        float m_flRemap[4]; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x50[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoneConstraintDotToMorph because it is not a standard-layout class
    static_assert(sizeof(CBoneConstraintDotToMorph) == 0x60);
};
