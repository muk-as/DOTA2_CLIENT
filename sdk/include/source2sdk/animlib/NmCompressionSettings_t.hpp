#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/NmCompressionSettings_t_QuantizationRange_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NmCompressionSettings_t
        {
        public:
            source2sdk::animlib::NmCompressionSettings_t_QuantizationRange_t m_translationRangeX; // 0x_            
            source2sdk::animlib::NmCompressionSettings_t_QuantizationRange_t m_translationRangeY; // 0x_            
            source2sdk::animlib::NmCompressionSettings_t_QuantizationRange_t m_translationRangeZ; // 0x_            
            source2sdk::animlib::NmCompressionSettings_t_QuantizationRange_t m_scaleRange; // 0x_            
            Quaternion m_constantRotation; // 0x_            
            bool m_bIsRotationStatic; // 0x_            
            bool m_bIsTranslationStatic; // 0x_            
            bool m_bIsScaleStatic; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_translationRangeX) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_translationRangeY) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_translationRangeZ) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_scaleRange) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_constantRotation) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_bIsRotationStatic) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_bIsTranslationStatic) == 0x_);
        static_assert(offsetof(source2sdk::animlib::NmCompressionSettings_t, m_bIsScaleStatic) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::NmCompressionSettings_t) == 0x_);
    };
};
