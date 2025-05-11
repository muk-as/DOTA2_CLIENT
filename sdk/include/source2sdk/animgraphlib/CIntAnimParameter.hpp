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
        // static metadata: MPropertyFriendlyName "Int Parameter"
        #pragma pack(push, 1)
        class CIntAnimParameter : public source2sdk::animgraphlib::CConcreteAnimParameter
        {
        public:
            // metadata: MPropertyFriendlyName "Default Value"
            std::int32_t m_defaultValue; // 0x80            
            // metadata: MPropertyFriendlyName "Min Value"
            std::int32_t m_minValue; // 0x84            
            // metadata: MPropertyFriendlyName "Max Value"
            std::int32_t m_maxValue; // 0x88            
            uint8_t _pad008c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CIntAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CIntAnimParameter) == 0x90);
    };
};
