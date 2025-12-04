#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // static metadata: MPropertyFriendlyName "Cross Product"
        // static metadata: MPropertyDescription "Compute a dot or cross product between two 3D vectors"
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_ComputeCrossProduct3D : public source2sdk::smartprops::CSmartPropOperation
        {
        public:
            // metadata: MPropertyFriendlyName "Output Variable"
            // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
            CUtlString m_OutputVariableName; // 0x_            
            // metadata: MPropertyFriendlyName "Vector A"
            CSmartPropAttributeVector m_InputVectorA; // 0x_            
            // metadata: MPropertyFriendlyName "Vector B"
            CSmartPropAttributeVector m_InputVectorB; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_ComputeCrossProduct3D because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_ComputeCrossProduct3D) == 0x_);
    };
};
