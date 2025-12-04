#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"

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
        // static metadata: MPropertyFriendlyName "Transform: Translate"
        // static metadata: MPropertyDescription "Apply a position offset to the current transform."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_Translate : public source2sdk::smartprops::CSmartPropTransformOperation
        {
        public:
            // metadata: MPropertyDescription "Local space position translation to apply to the current transform"
            CSmartPropAttributeVector m_vPosition; // 0x_            
            // metadata: MPropertyDescription "Specifies the coordinate space of the specified position value."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_Translate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_Translate) == 0x_);
    };
};
