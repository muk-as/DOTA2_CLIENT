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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmMaterialAttributeEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            CUtlString m_attributeName; // 0x_            
            CUtlStringToken m_attributeNameToken; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPiecewiseCurve m_x; // 0x_            
            CPiecewiseCurve m_y; // 0x_            
            CPiecewiseCurve m_z; // 0x_            
            CPiecewiseCurve m_w; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmMaterialAttributeEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmMaterialAttributeEvent) == 0x_);
    };
};
