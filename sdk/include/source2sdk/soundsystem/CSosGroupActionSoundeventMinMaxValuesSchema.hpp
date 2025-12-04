#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Soundevent Min/Max Values"
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventMinMaxValuesSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Public field name to query."
            CUtlString m_strQueryPublicFieldName; // 0x_            
            // metadata: MPropertyFriendlyName "Public field 'delay' name."
            CUtlString m_strDelayPublicFieldName; // 0x_            
            // metadata: MPropertyFriendlyName "Exclude stopped sounds from evaluation"
            bool m_bExcludeStoppedSounds; // 0x_            
            // metadata: MPropertyFriendlyName "Exclude delayed sounds from evaluation"
            bool m_bExcludeDelayedSounds; // 0x_            
            // metadata: MPropertyFriendlyName "Exclude sounds from evaluation less than or equal to a min value threshold."
            bool m_bExcludeSoundsBelowThreshold; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "The minimum threshold value to exclude sounds."
            float m_flExcludeSoundsMinThresholdValue; // 0x_            
            // metadata: MPropertyFriendlyName "Exclude sounds from evaluation greater than or equal to a max value threshold."
            bool m_bExcludSoundsAboveThreshold; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "The maximum threshold value to exclude sounds."
            float m_flExcludeSoundsMaxThresholdValue; // 0x_            
            // metadata: MPropertyFriendlyName "Min value property name"
            CUtlString m_strMinValueName; // 0x_            
            // metadata: MPropertyFriendlyName "Max value property name"
            CUtlString m_strMaxValueName; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventMinMaxValuesSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema) == 0x_);
    };
};
