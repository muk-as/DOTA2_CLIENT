#pragma once
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
    // Standard-layout class: true
    // Size: 0x38
    // 
    // static metadata: MNetworkVarNames "uint32 m_nID"
    // static metadata: MNetworkVarNames "uint32 m_nValue"
    // static metadata: MNetworkVarNames "uint32 m_nRawValue"
    // static metadata: MNetworkVarNames "uint8 m_nValueState"
    // static metadata: MNetworkVarNames "bool m_bValueIsMask"
    #pragma pack(push, 1)
    struct InGamePredictionData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        // metadata: MNetworkEnable
        uint32_t m_nID; // 0x28        
        // metadata: MNetworkEnable
        uint32_t m_nValue; // 0x2c        
        // metadata: MNetworkEnable
        uint32_t m_nRawValue; // 0x30        
        // metadata: MNetworkEnable
        uint8_t m_nValueState; // 0x34        
        // metadata: MNetworkEnable
        bool m_bValueIsMask; // 0x35        
        [[maybe_unused]] std::uint8_t pad_0x36[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(InGamePredictionData_t, m_nID) == 0x28);
    static_assert(offsetof(InGamePredictionData_t, m_nValue) == 0x2c);
    static_assert(offsetof(InGamePredictionData_t, m_nRawValue) == 0x30);
    static_assert(offsetof(InGamePredictionData_t, m_nValueState) == 0x34);
    static_assert(offsetof(InGamePredictionData_t, m_bValueIsMask) == 0x35);
    
    static_assert(sizeof(InGamePredictionData_t) == 0x38);
};
