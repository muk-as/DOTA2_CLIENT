#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "HSequence m_hSequence"
        // static metadata: MNetworkVarNames "float32 m_flPrevCycle"
        // static metadata: MNetworkVarNames "float32 m_flCycle"
        #pragma pack(push, 1)
        class CNetworkedSequenceOperation
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "sequenceOpSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkUserGroup "m_flCycle"
            float m_flPrevCycle; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "15"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "8"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkUserGroup "m_flCycle"
            float m_flCycle; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "0"
            CNetworkedQuantizedFloat m_flWeight; // 0x_            
            bool m_bSequenceChangeNetworked; // 0x_            
            bool m_bDiscontinuity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flPrevCycleFromDiscontinuity; // 0x_            
            float m_flPrevCycleForAnimEventDetection; // 0x_            
            
            // Datamap fields:
            // CUtlString sequenceName; // 0x_
            // int32_t sequence; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_hSequence) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flPrevCycle) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flCycle) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flWeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_bSequenceChangeNetworked) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_bDiscontinuity) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flPrevCycleFromDiscontinuity) == 0x_);
        static_assert(offsetof(source2sdk::client::CNetworkedSequenceOperation, m_flPrevCycleForAnimEventDetection) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CNetworkedSequenceOperation) == 0x_);
    };
};
