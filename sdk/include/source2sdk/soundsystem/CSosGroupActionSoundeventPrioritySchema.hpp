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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventPrioritySchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Priority Value, typically 0.0 to 1.0"
            CUtlString m_priorityValue; // 0x18            
            // metadata: MPropertyFriendlyName "Priority-Based Volume Multiplier, 0.0 to 1.0"
            CUtlString m_priorityVolumeScalar; // 0x20            
            // metadata: MPropertyFriendlyName "Contribute to the priority system, but volume is unaffected by it (bool)"
            CUtlString m_priorityContributeButDontRead; // 0x28            
            // metadata: MPropertyFriendlyName "Don't contribute to the priority system, but volume is affected by it (bool)"
            CUtlString m_bPriorityReadButDontContribute; // 0x30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventPrioritySchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventPrioritySchema) == 0x38);
    };
};
