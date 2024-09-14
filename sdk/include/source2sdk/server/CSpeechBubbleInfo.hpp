#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x148
    // Has VTable
    // MNetworkNoBase
    // 
    // static metadata: MNetworkVarNames "char m_LocalizationStr"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hNPC"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float m_flDuration"
    // static metadata: MNetworkVarNames "uint32 m_unOffsetX"
    // static metadata: MNetworkVarNames "uint32 m_unOffsetY"
    // static metadata: MNetworkVarNames "uint16 m_unCount"
    #pragma pack(push, 1)
    class CSpeechBubbleInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        char m_LocalizationStr[256]; // 0x30        
        // metadata: MNetworkEnable
        // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hNPC;
        char m_hNPC[0x4]; // 0x130        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x134        
        // metadata: MNetworkEnable
        float m_flDuration; // 0x138        
        // metadata: MNetworkEnable
        uint32_t m_unOffsetX; // 0x13c        
        // metadata: MNetworkEnable
        uint32_t m_unOffsetY; // 0x140        
        // metadata: MNetworkEnable
        uint16_t m_unCount; // 0x144        
        [[maybe_unused]] std::uint8_t pad_0x146[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSpeechBubbleInfo, m_LocalizationStr) == 0x30);
    static_assert(offsetof(CSpeechBubbleInfo, m_hNPC) == 0x130);
    static_assert(offsetof(CSpeechBubbleInfo, m_flStartTime) == 0x134);
    static_assert(offsetof(CSpeechBubbleInfo, m_flDuration) == 0x138);
    static_assert(offsetof(CSpeechBubbleInfo, m_unOffsetX) == 0x13c);
    static_assert(offsetof(CSpeechBubbleInfo, m_unOffsetY) == 0x140);
    static_assert(offsetof(CSpeechBubbleInfo, m_unCount) == 0x144);
    
    static_assert(sizeof(CSpeechBubbleInfo) == 0x148);
};
