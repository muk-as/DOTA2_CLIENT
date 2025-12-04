#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CSmartPropPulse_SelectionLinearLength_Criteria_t
        {
        public:
            // metadata: MPropertyDescription "Specifies the length of the line that will be taken up if this element is selected."
            float m_flLength; // 0x_            
            // metadata: MPropertyDescription "Can this object be scaled. If enabled the minimum and maximum lengths must be set to specify the size range of allowable scale."
            bool m_bAllowScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Minimum length"
            // metadata: MPropertySuppressExpr "m_bAllowScale == false"
            // metadata: MPropertyDescription "Minimum allowable length for the object. Must be <= length. If length is 100 and minimum length is 20, then the object may be assigned a scale in the rage [ 0.2, 1.0 ]."
            float m_flMinLength; // 0x_            
            // metadata: MPropertyFriendlyName "Maximum length"
            // metadata: MPropertySuppressExpr "m_bAllowScale == false"
            // metadata: MPropertyDescription "Maximum allowable length for the object. Must be >= length. If length is 100 and maximum length is 160, then the object may be assigned a scale in the rage [ 1.0, 1.6 ]."
            float m_flMaxLength; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionLinearLength_Criteria_t, m_flLength) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionLinearLength_Criteria_t, m_bAllowScale) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionLinearLength_Criteria_t, m_flMinLength) == 0x_);
        static_assert(offsetof(source2sdk::smartprops::CSmartPropPulse_SelectionLinearLength_Criteria_t, m_flMaxLength) == 0x_);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_SelectionLinearLength_Criteria_t) == 0x_);
    };
};
