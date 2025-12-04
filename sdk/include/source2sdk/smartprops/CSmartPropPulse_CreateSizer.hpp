#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Create Sizer"
        // static metadata: MPropertyDescription "Create a sizer that will be displayed at the current location, allowing the user to manipulate the specified set of size values."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropPulse_CreateSizer : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            // metadata: MPropertyFriendlyName "Name"
            // metadata: MPropertyDescription "Name used to identify the sizer. Must be unique within the paraent element."
            CUtlString m_Name; // 0x_            
            bool m_bHACK_ProvideResultMinX; // 0x_            
            bool m_bHACK_ProvideResultMaxX; // 0x_            
            bool m_bHACK_ProvideResultMinY; // 0x_            
            bool m_bHACK_ProvideResultMaxY; // 0x_            
            bool m_bHACK_ProvideResultMinZ; // 0x_            
            bool m_bHACK_ProvideResultMaxZ; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropPulse_CreateSizer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_CreateSizer) == 0x_);
    };
};
