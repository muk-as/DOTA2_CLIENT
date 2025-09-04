#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/PulseSelectorOutflowList_t.hpp"
#include "source2sdk/smartprops/CSmartPropPulse_BaseQueryableFlow.hpp"

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
        // Size: 0x68
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "SmartPropEval"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo " hô&û"
        // static metadata: MPropertyFriendlyName "Place On Path"
        // static metadata: MPulseCell_WithNoDefaultOutflow
        // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/requirements.png"
        // static metadata: MPulseEditorCanvasItemSpecKV3
        // static metadata: MPulseSelectorAllowRequirementCriteria
        // static metadata: MPulseSelectorAllowRequirementCriteria
        #pragma pack(push, 1)
        class CSmartPropPulse_PlaceOnPath : public source2sdk::smartprops::CSmartPropPulse_BaseQueryableFlow
        {
        public:
            source2sdk::pulse_runtime_lib::PulseSelectorOutflowList_t m_OutflowList; // 0x48            
            // metadata: MPropertyDescription "Name of the path to use. This path name will show up in the property editor when selecting a placement of this smart prop in Hammer, allowing selection of a path object in the map to use."
            CUtlString m_PathName; // 0x60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropPulse_PlaceOnPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_PlaceOnPath) == 0x68);
    };
};
