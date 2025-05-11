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
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSosGroupActionMemberCountEnvelopeSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Min Threshold Count"
            std::int32_t m_nBaseCount; // 0x18            
            // metadata: MPropertyFriendlyName "Max Target Count"
            std::int32_t m_nTargetCount; // 0x1c            
            // metadata: MPropertyFriendlyName "Threshold Value"
            float m_flBaseValue; // 0x20            
            // metadata: MPropertyFriendlyName "Target Value"
            float m_flTargetValue; // 0x24            
            // metadata: MPropertyFriendlyName "Attack"
            float m_flAttack; // 0x28            
            // metadata: MPropertyFriendlyName "Decay"
            float m_flDecay; // 0x2c            
            // metadata: MPropertyFriendlyName "Result Variable Name"
            CUtlString m_resultVarName; // 0x30            
            // metadata: MPropertyFriendlyName "Save Result to Group"
            bool m_bSaveToGroup; // 0x38            
            uint8_t _pad0039[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionMemberCountEnvelopeSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionMemberCountEnvelopeSchema) == 0x40);
    };
};
