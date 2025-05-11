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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Quaternion Parameter"
        #pragma pack(push, 1)
        class CQuaternionAnimParameter : public source2sdk::animgraphlib::CConcreteAnimParameter
        {
        public:
            // metadata: MPropertyFriendlyName "Default Value"
            Quaternion m_defaultValue; // 0x80            
            // metadata: MPropertyFriendlyName "Interpolate"
            bool m_bInterpolate; // 0x90            
            uint8_t _pad0091[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CQuaternionAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CQuaternionAnimParameter) == 0xa0);
    };
};
