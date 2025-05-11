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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventMinMaxValuesSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Public field name to query."
            CUtlString m_strQueryPublicFieldName; // 0x18            
            // metadata: MPropertyFriendlyName "Public field 'delay' name."
            CUtlString m_strDelayPublicFieldName; // 0x20            
            // metadata: MPropertyFriendlyName "Exclude stopped sounds from evaluation"
            bool m_bExcludeStoppedSounds; // 0x28            
            // metadata: MPropertyFriendlyName "Exclude delayed sounds from evaluation"
            bool m_bExcludeDelayedSounds; // 0x29            
            // metadata: MPropertyFriendlyName "Exclude sounds from evaluation less than or equal to a min value threshold."
            bool m_bExcludeSoundsBelowThreshold; // 0x2a            
            uint8_t _pad002b[0x1]; // 0x2b
            // metadata: MPropertyFriendlyName "The minimum threshold value to exclude sounds."
            float m_flExcludeSoundsMinThresholdValue; // 0x2c            
            // metadata: MPropertyFriendlyName "Exclude sounds from evaluation greater than or equal to a max value threshold."
            bool m_bExcludSoundsAboveThreshold; // 0x30            
            uint8_t _pad0031[0x3]; // 0x31
            // metadata: MPropertyFriendlyName "The maximum threshold value to exclude sounds."
            float m_flExcludeSoundsMaxThresholdValue; // 0x34            
            // metadata: MPropertyFriendlyName "Min value property name"
            CUtlString m_strMinValueName; // 0x38            
            // metadata: MPropertyFriendlyName "Max value property name"
            CUtlString m_strMaxValueName; // 0x40            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventMinMaxValuesSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventMinMaxValuesSchema) == 0x48);
    };
};
