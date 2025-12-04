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
        // static metadata: MPropertyFriendlyName "Count Envelope"
        #pragma pack(push, 1)
        class CSosGroupActionMemberCountEnvelopeSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Min Threshold Count"
            std::int32_t m_nBaseCount; // 0x_            
            // metadata: MPropertyFriendlyName "Max Target Count"
            std::int32_t m_nTargetCount; // 0x_            
            // metadata: MPropertyFriendlyName "Threshold Value"
            float m_flBaseValue; // 0x_            
            // metadata: MPropertyFriendlyName "Target Value"
            float m_flTargetValue; // 0x_            
            // metadata: MPropertyFriendlyName "Attack"
            float m_flAttack; // 0x_            
            // metadata: MPropertyFriendlyName "Decay"
            float m_flDecay; // 0x_            
            // metadata: MPropertyFriendlyName "Result Variable Name"
            CUtlString m_resultVarName; // 0x_            
            // metadata: MPropertyFriendlyName "Save Result to Group"
            bool m_bSaveToGroup; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionMemberCountEnvelopeSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionMemberCountEnvelopeSchema) == 0x_);
    };
};
