#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CConcreteAnimParameter.hpp"

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
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Float Parameter"
        #pragma pack(push, 1)
        class CFloatAnimParameter : public source2sdk::animgraphlib::CConcreteAnimParameter
        {
        public:
            // metadata: MPropertyFriendlyName "Default Value"
            float m_fDefaultValue; // 0x80            
            // metadata: MPropertyFriendlyName "Min Value"
            float m_fMinValue; // 0x84            
            // metadata: MPropertyFriendlyName "Max Value"
            float m_fMaxValue; // 0x88            
            // metadata: MPropertyFriendlyName "Interpolate"
            bool m_bInterpolate; // 0x8c            
            uint8_t _pad008d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFloatAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFloatAnimParameter) == 0x90);
    };
};
