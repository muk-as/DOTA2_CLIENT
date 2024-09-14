#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeTraceNoHit.hpp"
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x310
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSmartPropOperation_Trace : public smartprops::CSmartPropTransformOperation
    {
    public:
        // metadata: MPropertyStartGroup "+Origin"
        // metadata: MPropertyDescription "Specifies the origin point for the start of the trace. To trace from the current position, set to < 0, 0, 0 > and set the coordinate space to Element Space"
        CSmartPropAttributeVector m_Origin; // 0x50        
        // metadata: MPropertyDescription "Coordinate space the origin is specified in. Using Element space allows specifying a value relative to the current position. However, world space should generally be used when for variable values."
        smartprops::CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x90        
        // metadata: MPropertyDescription "Offset to apply to the specified origin along the trace direction to compute the starting point of the trace."
        CSmartPropAttributeFloat m_flOriginOffset; // 0xd0        
        // metadata: MPropertyStartGroup "+Result"
        // metadata: MPropertySortPriority "-1"
        // metadata: MPropertyDescription "How much should the surface normal up direction influence the final orientation. [ 0, 1 ] where 0 = don't modify the orientation, 1 = completely re-orient to match the surface."
        CSmartPropAttributeFloat m_flSurfaceUpInfluence; // 0x110        
        // metadata: MPropertySortPriority "-1"
        // metadata: MPropertyFriendlyName "If No Surface Hit"
        // metadata: MPropertyDescription "Specifies the behavior when the trace does not hit a surface."
        smartprops::CSmartPropAttributeTraceNoHit m_nNoHitResult; // 0x150        
        // metadata: MPropertyStartGroup "Trace filtering"
        // metadata: MPropertySortPriority "-2"
        // metadata: MPropertyDescription "Do not trace against tool materials (attribute 'tools.toolsmaterial')."
        CSmartPropAttributeBool m_bIgnoreToolMaterials; // 0x190        
        // metadata: MPropertySortPriority "-2"
        // metadata: MPropertyDescription "Do not trace against sky materials (attribute 'mapbuilder.sky')."
        CSmartPropAttributeBool m_bIgnoreSky; // 0x1d0        
        // metadata: MPropertySortPriority "-2"
        // metadata: MPropertyDescription "Do not trace against no draw materials (material attribute 'mapbuilder.nodraw')."
        CSmartPropAttributeBool m_bIgnoreNoDraw; // 0x210        
        // metadata: MPropertySortPriority "-2"
        // metadata: MPropertyDescription "Do not trace against translucent materials (materials with 'alphatest' or 'translucent' attributes)."
        CSmartPropAttributeBool m_bIgnoreTranslucent; // 0x250        
        // metadata: MPropertySortPriority "-2"
        // metadata: MPropertyDescription "Do not trace against any models (only hit world geometry)."
        CSmartPropAttributeBool m_bIgnoreModels; // 0x290        
        // metadata: MPropertySortPriority "-2"
        // metadata: MPropertyDescription "Do not trace against dynamic entities which may move in game."
        CSmartPropAttributeBool m_bIgnoreEntities; // 0x2d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_Trace because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_Trace) == 0x310);
};
