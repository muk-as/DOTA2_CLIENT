#pragma once
#include "source2sdk/animlib/NmCompressionSettings_t__QuantizationRange_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NmCompressionSettings_t
    {
    public:
        animlib::NmCompressionSettings_t__QuantizationRange_t m_translationRangeX; // 0x0        
        animlib::NmCompressionSettings_t__QuantizationRange_t m_translationRangeY; // 0x8        
        animlib::NmCompressionSettings_t__QuantizationRange_t m_translationRangeZ; // 0x10        
        animlib::NmCompressionSettings_t__QuantizationRange_t m_scaleRange; // 0x18        
        Quaternion m_constantRotation; // 0x20        
        bool m_bIsRotationStatic; // 0x30        
        bool m_bIsTranslationStatic; // 0x31        
        bool m_bIsScaleStatic; // 0x32        
        [[maybe_unused]] std::uint8_t pad_0x33[0xd];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NmCompressionSettings_t, m_translationRangeX) == 0x0);
    static_assert(offsetof(NmCompressionSettings_t, m_translationRangeY) == 0x8);
    static_assert(offsetof(NmCompressionSettings_t, m_translationRangeZ) == 0x10);
    static_assert(offsetof(NmCompressionSettings_t, m_scaleRange) == 0x18);
    static_assert(offsetof(NmCompressionSettings_t, m_constantRotation) == 0x20);
    static_assert(offsetof(NmCompressionSettings_t, m_bIsRotationStatic) == 0x30);
    static_assert(offsetof(NmCompressionSettings_t, m_bIsTranslationStatic) == 0x31);
    static_assert(offsetof(NmCompressionSettings_t, m_bIsScaleStatic) == 0x32);
    
    static_assert(sizeof(NmCompressionSettings_t) == 0x40);
};
