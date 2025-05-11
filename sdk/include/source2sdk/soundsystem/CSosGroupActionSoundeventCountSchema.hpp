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
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventCountSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Exclude Stopped Sounds from Count"
            bool m_bExcludeStoppedSounds; // 0x18            
            uint8_t _pad0019[0x7]; // 0x19
            // metadata: MPropertyFriendlyName "Result Current Count"
            CUtlString m_strCountKeyName; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventCountSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventCountSchema) == 0x28);
    };
};
