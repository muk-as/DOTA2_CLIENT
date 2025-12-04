#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropElement_ModelEntity.hpp"

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
        // static metadata: MPropertyFriendlyName "Prop Physics"
        // static metadata: MPropertyDescription "Places a prop physics entity."
        #pragma pack(push, 1)
        class CSmartPropElement_PropPhysics : public source2sdk::smartprops::CSmartPropElement_ModelEntity
        {
        public:
            // metadata: MPropertyDescription "Should this physics prop start in a sleeping (non-simulating) state such that it won't update until it is woken up by an external event."
            CSmartPropAttributeBool m_bStartAsleep; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropElement_PropPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropElement_PropPhysics) == 0x_);
    };
};
