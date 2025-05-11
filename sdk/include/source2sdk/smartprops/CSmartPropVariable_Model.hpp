#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/smartprops/CSmartPropVariable.hpp"

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
        // Size: 0x108
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Model"
        // static metadata: MPropertyDescription "Model Asset Variable"
        #pragma pack(push, 1)
        class CSmartPropVariable_Model : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            // metadata: MPropertyFriendlyName "Default Model"
            // m_DefaultValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_DefaultValue;
            char m_DefaultValue[0xe0]; // 0x28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_Model because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_Model) == 0x108);
    };
};
