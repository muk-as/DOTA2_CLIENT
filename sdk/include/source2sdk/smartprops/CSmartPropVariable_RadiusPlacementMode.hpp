#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropVariable.hpp"
#include "source2sdk/smartprops/SmartPropRadiusPlacementMode_t.hpp"

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
        // static metadata: MPropertyFriendlyName "Placement Shape"
        // static metadata: MPropertyDescription "Specifies the shape (circle, or sphere) to use with elements that place children within a radius."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropVariable_RadiusPlacementMode : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            source2sdk::smartprops::SmartPropRadiusPlacementMode_t m_DefaultValue; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_RadiusPlacementMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_RadiusPlacementMode) == 0x40);
    };
};
