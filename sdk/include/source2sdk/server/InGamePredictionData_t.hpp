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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
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
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            std::uint32_t m_nID; // 0x30            
            // metadata: MNetworkEnable
            std::uint32_t m_nValue; // 0x34            
            // metadata: MNetworkEnable
            std::uint32_t m_nRawValue; // 0x38            
            // metadata: MNetworkEnable
            std::uint8_t m_nValueState; // 0x3c            
            // metadata: MNetworkEnable
            bool m_bValueIsMask; // 0x3d            
            uint8_t _pad003e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nID) == 0x30);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nValue) == 0x34);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nRawValue) == 0x38);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_nValueState) == 0x3c);
        static_assert(offsetof(source2sdk::server::InGamePredictionData_t, m_bValueIsMask) == 0x3d);
        
        static_assert(sizeof(source2sdk::server::InGamePredictionData_t) == 0x40);
    };
};
