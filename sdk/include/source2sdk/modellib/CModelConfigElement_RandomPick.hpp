#pragma once
#include "source2sdk/modellib/CModelConfigElement.hpp"
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
    // Size: 0x80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModelConfigElement_RandomPick : public modellib::CModelConfigElement
    {
    public:
        // m_Choices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_Choices;
        char m_Choices[0x18]; // 0x48        
        // m_ChoiceWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_ChoiceWeights;
        char m_ChoiceWeights[0x18]; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x78[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModelConfigElement_RandomPick because it is not a standard-layout class
    static_assert(sizeof(CModelConfigElement_RandomPick) == 0x80);
};
