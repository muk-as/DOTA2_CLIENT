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
        // Size: 0x128
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmMaterialAttributeEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            CUtlString m_attributeName; // 0x18            
            CUtlStringToken m_attributeNameToken; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            CPiecewiseCurve m_x; // 0x28            
            CPiecewiseCurve m_y; // 0x68            
            CPiecewiseCurve m_z; // 0xa8            
            CPiecewiseCurve m_w; // 0xe8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmMaterialAttributeEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmMaterialAttributeEvent) == 0x128);
    };
};
