#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
#include "source2sdk/smartprops/SmartPropColorSelectionMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Color Selection mode"
        // static metadata: MPropertyDescription "Specifies the method by which a color selection is to be made."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropVariable_ColorSelectionMode : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            source2sdk::smartprops::SmartPropColorSelectionMode_t m_DefaultValue; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_ColorSelectionMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_ColorSelectionMode) == 0x40);
    };
};
