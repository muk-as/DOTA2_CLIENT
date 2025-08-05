#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x130
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmMaterialAttributeEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            CUtlString m_attributeName; // 0x20            
            CUtlStringToken m_attributeNameToken; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            CPiecewiseCurve m_x; // 0x30            
            CPiecewiseCurve m_y; // 0x70            
            CPiecewiseCurve m_z; // 0xb0            
            CPiecewiseCurve m_w; // 0xf0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmMaterialAttributeEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmMaterialAttributeEvent) == 0x130);
    };
};
