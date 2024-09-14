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
    // Size: 0x80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Filter: Surface Properties"
    // static metadata: MPropertyDescription "Allows the parent element to be conditionally evaluated based on surface properties."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropFilter_SurfaceProperties : public smartprops::CSmartPropFilter
    {
    public:
        // metadata: MPropertyDescription "List of surface properties on which this element is valid. If empty element is not restricted to any specific surfaces."
        // m_AllowedSurfaceProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_AllowedSurfaceProperties;
        char m_AllowedSurfaceProperties[0x18]; // 0x50        
        // metadata: MPropertyDescription "List of surface properties on which this element is not valid. If empty element is not restricted to any specific surfaces."
        // m_DisallowedSurfaceProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_DisallowedSurfaceProperties;
        char m_DisallowedSurfaceProperties[0x18]; // 0x68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropFilter_SurfaceProperties because it is not a standard-layout class
    static_assert(sizeof(CSmartPropFilter_SurfaceProperties) == 0x80);
};
