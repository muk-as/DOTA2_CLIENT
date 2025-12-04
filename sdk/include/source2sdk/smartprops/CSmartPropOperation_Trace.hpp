#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeTraceNoHit.hpp"
#include "source2sdk/smartprops/CSmartPropTransformOperation.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSmartPropOperation_Trace : public source2sdk::smartprops::CSmartPropTransformOperation
        {
        public:
            // metadata: MPropertyStartGroup "+Origin"
            // metadata: MPropertyDescription "Specifies the origin point for the start of the trace. To trace from the current position, set to < 0, 0, 0 > and set the coordinate space to Element Space"
            CSmartPropAttributeVector m_Origin; // 0x_            
            // metadata: MPropertyDescription "Coordinate space the origin is specified in. Using Element space allows specifying a value relative to the current position. However, world space should generally be used when for variable values."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x_            
            // metadata: MPropertyDescription "Offset to apply to the specified origin along the trace direction to compute the starting point of the trace."
            CSmartPropAttributeFloat m_flOriginOffset; // 0x_            
            // metadata: MPropertyStartGroup "+Result"
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyDescription "How much should the surface normal up direction influence the final orientation. [ 0, 1 ] where 0 = don't modify the orientation, 1 = completely re-orient to match the surface."
            CSmartPropAttributeFloat m_flSurfaceUpInfluence; // 0x_            
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyFriendlyName "If No Surface Hit"
            // metadata: MPropertyDescription "Specifies the behavior when the trace does not hit a surface."
            source2sdk::smartprops::CSmartPropAttributeTraceNoHit m_nNoHitResult; // 0x_            
            // metadata: MPropertyStartGroup "Trace filtering"
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against tool materials (attribute 'tools.toolsmaterial')."
            CSmartPropAttributeBool m_bIgnoreToolMaterials; // 0x_            
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against sky materials (attribute 'mapbuilder.sky')."
            CSmartPropAttributeBool m_bIgnoreSky; // 0x_            
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against no draw materials (material attribute 'mapbuilder.nodraw')."
            CSmartPropAttributeBool m_bIgnoreNoDraw; // 0x_            
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against translucent materials (materials with 'alphatest' or 'translucent' attributes)."
            CSmartPropAttributeBool m_bIgnoreTranslucent; // 0x_            
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against any models (only hit world geometry)."
            CSmartPropAttributeBool m_bIgnoreModels; // 0x_            
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against dynamic entities which may move in game."
            CSmartPropAttributeBool m_bIgnoreEntities; // 0x_            
            // metadata: MPropertySortPriority "-2"
            // metadata: MPropertyDescription "Do not trace against cable geometry."
            CSmartPropAttributeBool m_bIgnoreCables; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_Trace because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_Trace) == 0x_);
    };
};
