#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::uint32_t m_nID; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nValue; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nRawValue; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nValueState; // 0x_            
            // metadata: MNetworkEnable
            bool m_bValueIsMask; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nID) == 0x_);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nValue) == 0x_);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nRawValue) == 0x_);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nValueState) == 0x_);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_bValueIsMask) == 0x_);
        
        static_assert(sizeof(source2sdk::server::InGamePredictionData_t) == 0x_);
    };
};
