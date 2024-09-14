#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/animgraphlib/MatterialAttributeTagType_t.hpp"
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
    // Size: 0x70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Material Attribute Tag"
    #pragma pack(push, 1)
    class CMaterialAttributeAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Attribute Name"
        CUtlString m_AttributeName; // 0x58        
        // metadata: MPropertyFriendlyName "Attribute Type"
        // metadata: MPropertyAttrChangeCallback
        animgraphlib::MatterialAttributeTagType_t m_AttributeType; // 0x60        
        // metadata: MPropertyFriendlyName "Value"
        // metadata: MPropertyAttrStateCallback
        float m_flValue; // 0x64        
        // metadata: MPropertyFriendlyName "Color"
        // metadata: MPropertyAttrStateCallback
        Color m_Color; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMaterialAttributeAnimTag because it is not a standard-layout class
    static_assert(sizeof(CMaterialAttributeAnimTag) == 0x70);
};
