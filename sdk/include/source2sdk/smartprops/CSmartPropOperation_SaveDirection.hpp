#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeDirection.hpp"
#include "source2sdk/smartprops/CSmartPropOperation.hpp"

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
        // static metadata: MPropertyFriendlyName "Save Direction Vector"
        // static metadata: MPropertyDescription "Save the specified direction vector to a specified variable, in the requested coordinate space"
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_SaveDirection : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyDescription "Specifies which direction vector to save."
            source2sdk::smartprops::CSmartPropAttributeDirection m_DirectionVector; // 0x_            
            // metadata: MPropertyDescription "Specifies the coordinate space of the saved position value."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x_            
            // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
            CUtlString m_VariableName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_SaveDirection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_SaveDirection) == 0x_);
    };
};
