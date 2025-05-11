#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Float"
        #pragma pack(push, 1)
        class CSmartPropVariable_Float : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            float m_DefaultValue; // 0x28            
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyReadonlyExpr
            float m_flParamaterMinValue; // 0x2c            
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyReadonlyExpr
            float m_flParamaterMaxValue; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_Float because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_Float) == 0x38);
    };
};
