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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Float Parameter"
        #pragma pack(push, 1)
        class CFloatAnimParameter : public source2sdk::animgraphlib::CConcreteAnimParameter
        {
        public:
            // metadata: MPropertyFriendlyName "Default Value"
            float m_fDefaultValue; // 0x_            
            // metadata: MPropertyFriendlyName "Min Value"
            float m_fMinValue; // 0x_            
            // metadata: MPropertyFriendlyName "Max Value"
            float m_fMaxValue; // 0x_            
            // metadata: MPropertyFriendlyName "Interpolate"
            bool m_bInterpolate; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFloatAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFloatAnimParameter) == 0x_);
    };
};
