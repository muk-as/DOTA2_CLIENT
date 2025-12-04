#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        class C_SpeechBubbleInfo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            char m_LocalizationStr[256]; // 0x_            
            // metadata: MNetworkEnable
            // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hNPC;
            char m_hNPC[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flDuration; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unOffsetX; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_unOffsetY; // 0x_            
            // metadata: MNetworkEnable
            std::uint16_t m_unCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_LocalizationStr) == 0x_);
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_hNPC) == 0x_);
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_unOffsetX) == 0x_);
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_unOffsetY) == 0x_);
        static_assert(offsetof(source2sdk::client::C_SpeechBubbleInfo, m_unCount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::C_SpeechBubbleInfo) == 0x_);
    };
};
