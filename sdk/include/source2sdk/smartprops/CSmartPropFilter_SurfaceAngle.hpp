#pragma once
#include "source2sdk/smartprops/CSmartPropFilter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Filter: Surface Angles"
    // static metadata: MPropertyDescription "Allows the parent element to be conditionally evaluated base on the current surface angle. The surface angle is set based on the initial placement of the smart prop object, but can also be updated by the Trace to Surface modifier."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropFilter_SurfaceAngle : public smartprops::CSmartPropFilter
    {
    public:
        // metadata: MPropertyDescription "Minimum slope on which the target will be placed. Slope is a [ 0, 180 ] value of the surface normal rotation from up such that 0 is a horizontal surface (floor), 90 is a vertical surface (wall), 180 is horizontal upside down surface (ceiling)."
        CSmartPropAttributeFloat m_flSurfaceSlopeMin; // 0x50        
        // metadata: MPropertyDescription "Maximum slope on which the target will be placed."
        CSmartPropAttributeFloat m_flSurfaceSlopeMax; // 0x90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropFilter_SurfaceAngle because it is not a standard-layout class
    static_assert(sizeof(CSmartPropFilter_SurfaceAngle) == 0xd0);
};
