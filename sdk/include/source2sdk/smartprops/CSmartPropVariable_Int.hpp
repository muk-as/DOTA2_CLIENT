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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Integer"
        #pragma pack(push, 1)
        class CSmartPropVariable_Int : public source2sdk::smartprops::CSmartPropVariable
        {
        public:
            std::int32_t m_DefaultValue; // 0x_            
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyReadonlyExpr
            std::int32_t m_nParamaterMinValue; // 0x_            
            // metadata: MPropertySortPriority "-1"
            // metadata: MPropertyReadonlyExpr
            std::int32_t m_nParamaterMaxValue; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropVariable_Int because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropVariable_Int) == 0x_);
    };
};
