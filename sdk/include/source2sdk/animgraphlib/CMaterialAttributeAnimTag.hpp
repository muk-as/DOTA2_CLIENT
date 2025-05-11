#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/animgraphlib/MatterialAttributeTagType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
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
        class CMaterialAttributeAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertyFriendlyName "Attribute Name"
            CUtlString m_AttributeName; // 0x58            
            // metadata: MPropertyFriendlyName "Attribute Type"
            // metadata: MPropertyAttrChangeCallback
            source2sdk::animgraphlib::MatterialAttributeTagType_t m_AttributeType; // 0x60            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertyAttrStateCallback
            float m_flValue; // 0x64            
            // metadata: MPropertyFriendlyName "Color"
            // metadata: MPropertyAttrStateCallback
            Color m_Color; // 0x68            
            uint8_t _pad006c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMaterialAttributeAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CMaterialAttributeAnimTag) == 0x70);
    };
};
