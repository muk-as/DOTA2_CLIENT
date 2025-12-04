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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nInitiatingPlayerID; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_PingWheelMessageID; // 0x_            
            // metadata: MNetworkEnable
            float m_flActiveUntilTime; // 0x_            
            // metadata: MNetworkEnable
            Vector2D m_vLocation; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nPingedEntityEntIndex; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nID; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PingConfirmationIconType m_IconType; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nAgreeState[24]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nInitiatingPlayerID) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_PingWheelMessageID) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_flActiveUntilTime) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_vLocation) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nPingedEntityEntIndex) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nID) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_IconType) == 0x_);
        static_assert(offsetof(source2sdk::server::PingConfirmationState_t, m_nAgreeState) == 0x_);
        
        static_assert(sizeof(source2sdk::server::PingConfirmationState_t) == 0x_);
    };
};
