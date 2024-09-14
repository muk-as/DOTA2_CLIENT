#pragma once
#include "source2sdk/modellib/CBaseConstraint.hpp"
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
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMorphConstraint : public modellib::CBaseConstraint
    {
    public:
        CUtlString m_sTargetMorph; // 0x68        
        int32_t m_nSlaveChannel; // 0x70        
        float m_flMin; // 0x74        
        float m_flMax; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x7c[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMorphConstraint because it is not a standard-layout class
    static_assert(sizeof(CMorphConstraint) == 0x88);
};
