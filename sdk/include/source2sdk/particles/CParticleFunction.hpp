#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleEndcapMode_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
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
        class CParticleFunction
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "operator strength"
            // metadata: MPropertySortPriority "-100"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOpStrength; // 0x_            
            // metadata: MPropertyFriendlyName "operator end cap state"
            // metadata: MPropertySortPriority "-100"
            source2sdk::particles::ParticleEndcapMode_t m_nOpEndCapState; // 0x_            
            // metadata: MPropertyStartGroup "Operator Fade"
            // metadata: MPropertyFriendlyName "operator start fadein"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpStartFadeInTime; // 0x_            
            // metadata: MPropertyFriendlyName "operator end fadein"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpEndFadeInTime; // 0x_            
            // metadata: MPropertyFriendlyName "operator start fadeout"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpStartFadeOutTime; // 0x_            
            // metadata: MPropertyFriendlyName "operator end fadeout"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpEndFadeOutTime; // 0x_            
            // metadata: MPropertyFriendlyName "operator fade oscillate"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpFadeOscillatePeriod; // 0x_            
            // metadata: MPropertyFriendlyName "normalize fade times to endcap"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            bool m_bNormalizeToStopTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup "Operator Fade Time Offset"
            // metadata: MPropertyFriendlyName "operator fade time offset min"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeOffsetMin; // 0x_            
            // metadata: MPropertyFriendlyName "operator fade time offset max"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeOffsetMax; // 0x_            
            // metadata: MPropertyFriendlyName "operator fade time offset seed"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            std::int32_t m_nOpTimeOffsetSeed; // 0x_            
            // metadata: MPropertyStartGroup "Operator Fade Timescale Modifiers"
            // metadata: MPropertyFriendlyName "operator fade time scale seed"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            std::int32_t m_nOpTimeScaleSeed; // 0x_            
            // metadata: MPropertyFriendlyName "operator fade time scale min"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeScaleMin; // 0x_            
            // metadata: MPropertyFriendlyName "operator fade time scale max"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeScaleMax; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyStartGroup
            // metadata: MPropertySuppressField
            bool m_bDisableOperator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "operator help and notes"
            // metadata: MParticleHelpField
            // metadata: MPropertySortPriority "-100"
            CUtlString m_Notes; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleFunction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CParticleFunction) == 0x_);
    };
};
