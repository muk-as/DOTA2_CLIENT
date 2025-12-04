#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        struct BoneDemoCaptureSettings_t
        {
        public:
            // metadata: MPropertyFriendlyName "Bone"
            // metadata: MPropertyAttributeChoiceName "Bone"
            CUtlString m_boneName; // 0x_            
            // metadata: MPropertySuppressField
            float m_flErrorSplineRotationMax; // 0x_            
            // metadata: MPropertySuppressField
            float m_flErrorSplineTranslationMax; // 0x_            
            // metadata: MPropertySuppressField
            float m_flErrorSplineScaleMax; // 0x_            
            // metadata: MPropertySuppressField
            float m_flErrorQuantizationRotationMax; // 0x_            
            // metadata: MPropertySuppressField
            float m_flErrorQuantizationTranslationMax; // 0x_            
            // metadata: MPropertySuppressField
            float m_flErrorQuantizationScaleMax; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_boneName) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_flErrorSplineRotationMax) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_flErrorSplineTranslationMax) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_flErrorSplineScaleMax) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_flErrorQuantizationRotationMax) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_flErrorQuantizationTranslationMax) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t, m_flErrorQuantizationScaleMax) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::BoneDemoCaptureSettings_t) == 0x_);
    };
};
