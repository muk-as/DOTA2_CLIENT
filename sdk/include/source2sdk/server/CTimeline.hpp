#pragma once
#include "source2sdk/client/TimelineCompression_t.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x228
    // Has VTable
    // Has Trivial Destructor
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "float m_flValues"
    // static metadata: MNetworkVarNames "int m_nValueCounts"
    // static metadata: MNetworkVarNames "int m_nBucketCount"
    // static metadata: MNetworkVarNames "float m_flInterval"
    // static metadata: MNetworkVarNames "float m_flFinalValue"
    // static metadata: MNetworkVarNames "TimelineCompression_t m_nCompressionType"
    // static metadata: MNetworkVarNames "bool m_bStopped"
    #pragma pack(push, 1)
    class CTimeline : public server::IntervalTimer
    {
    public:
        // metadata: MNetworkEnable
        float m_flValues[64]; // 0x10        
        // metadata: MNetworkEnable
        int32_t m_nValueCounts[64]; // 0x110        
        // metadata: MNetworkEnable
        int32_t m_nBucketCount; // 0x210        
        // metadata: MNetworkEnable
        float m_flInterval; // 0x214        
        // metadata: MNetworkEnable
        float m_flFinalValue; // 0x218        
        // metadata: MNetworkEnable
        client::TimelineCompression_t m_nCompressionType; // 0x21c        
        // metadata: MNetworkEnable
        bool m_bStopped; // 0x220        
        [[maybe_unused]] std::uint8_t pad_0x221[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTimeline because it is not a standard-layout class
    static_assert(sizeof(CTimeline) == 0x228);
};
