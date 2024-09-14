#pragma once
#include "source2sdk/animlib/CNmBoneMaskValueNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
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
    class CNmBoneMaskSelectorNode__CDefinition : public animlib::CNmBoneMaskValueNode__CDefinition
    {
    public:
        int16_t m_defaultMaskNodeIdx; // 0x10        
        int16_t m_parameterValueNodeIdx; // 0x12        
        bool m_switchDynamically; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3]; // 0x15
        // m_maskNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<int16_t,7> m_maskNodeIndices;
        char m_maskNodeIndices[0x28]; // 0x18        
        // m_parameterValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CGlobalSymbol,7> m_parameterValues;
        char m_parameterValues[0x50]; // 0x40        
        float m_flBlendTimeSeconds; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x94[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmBoneMaskSelectorNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmBoneMaskSelectorNode__CDefinition) == 0x98);
};
