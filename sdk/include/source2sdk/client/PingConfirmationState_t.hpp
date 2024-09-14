#pragma once
#include "source2sdk/client/PingConfirmationIconType.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_nInitiatingPlayerID; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_PingWheelMessageID; // 0x34        
        // metadata: MNetworkEnable
        float m_flActiveUntilTime; // 0x38        
        // metadata: MNetworkEnable
        Vector2D m_vLocation; // 0x3c        
        // metadata: MNetworkEnable
        int32_t m_nPingedEntityEntIndex; // 0x44        
        // metadata: MNetworkEnable
        int32_t m_nID; // 0x48        
        // metadata: MNetworkEnable
        client::PingConfirmationIconType m_IconType; // 0x4c        
        // metadata: MNetworkEnable
        int32_t m_nAgreeState[24]; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PingConfirmationState_t, m_nInitiatingPlayerID) == 0x30);
    static_assert(offsetof(PingConfirmationState_t, m_PingWheelMessageID) == 0x34);
    static_assert(offsetof(PingConfirmationState_t, m_flActiveUntilTime) == 0x38);
    static_assert(offsetof(PingConfirmationState_t, m_vLocation) == 0x3c);
    static_assert(offsetof(PingConfirmationState_t, m_nPingedEntityEntIndex) == 0x44);
    static_assert(offsetof(PingConfirmationState_t, m_nID) == 0x48);
    static_assert(offsetof(PingConfirmationState_t, m_IconType) == 0x4c);
    static_assert(offsetof(PingConfirmationState_t, m_nAgreeState) == 0x50);
    
    static_assert(sizeof(PingConfirmationState_t) == 0xb0);
};
