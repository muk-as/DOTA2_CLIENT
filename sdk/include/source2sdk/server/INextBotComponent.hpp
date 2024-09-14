#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/INextBotEventResponder.hpp"
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
    // Size: 0x20
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class INextBotComponent : public server::INextBotEventResponder
    {
    public:
        entity2::GameTime_t m_lastUpdateTime; // 0x8        
        float m_curInterval; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x10[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in INextBotComponent because it is not a standard-layout class
    static_assert(sizeof(INextBotComponent) == 0x20);
};
