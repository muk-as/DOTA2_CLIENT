#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PingConfirmationIconType.hpp"

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
        // Size: 0xb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nInitiatingPlayerID"
        // static metadata: MNetworkVarNames "int m_PingWheelMessageID"
        // static metadata: MNetworkVarNames "float m_flActiveUntilTime"
        // static metadata: MNetworkVarNames "Vector2D m_vLocation"
        // static metadata: MNetworkVarNames "int m_nPingedEntityEntIndex"
        // static metadata: MNetworkVarNames "int m_nID"
        // static metadata: MNetworkVarNames "PingConfirmationIconType m_IconType"
        // static metadata: MNetworkVarNames "int m_nAgreeState"
        #pragma pack(push, 1)
        struct PingConfirmationState_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            std::int32_t m_nInitiatingPlayerID; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t m_PingWheelMessageID; // 0x34            
            // metadata: MNetworkEnable
            float m_flActiveUntilTime; // 0x38            
            // metadata: MNetworkEnable
            Vector2D m_vLocation; // 0x3c            
            // metadata: MNetworkEnable
            std::int32_t m_nPingedEntityEntIndex; // 0x44            
            // metadata: MNetworkEnable
            std::int32_t m_nID; // 0x48            
            // metadata: MNetworkEnable
            source2sdk::client::PingConfirmationIconType m_IconType; // 0x4c            
            // metadata: MNetworkEnable
            std::int32_t m_nAgreeState[24]; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nInitiatingPlayerID) == 0x30);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_PingWheelMessageID) == 0x34);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_flActiveUntilTime) == 0x38);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_vLocation) == 0x3c);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nPingedEntityEntIndex) == 0x44);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nID) == 0x48);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_IconType) == 0x4c);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nAgreeState) == 0x50);
        
        static_assert(sizeof(source2sdk::server::PingConfirmationState_t) == 0xb0);
    };
};
