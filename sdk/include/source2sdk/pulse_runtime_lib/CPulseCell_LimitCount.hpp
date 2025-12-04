#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseRequirement.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Limit Count"
        // static metadata: MPropertyDescription "Skip this node after the limit. Check Type does not apply, the limit will always be checked."
        #pragma pack(push, 1)
        class CPulseCell_LimitCount : public source2sdk::pulse_runtime_lib::CPulseCell_BaseRequirement
        {
        public:
            // metadata: MPropertyFlattenIntoParentRow
            std::int32_t m_nLimitCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_LimitCount because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_LimitCount) == 0x_);
    };
};
