#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/INextBotEventResponder.hpp"

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
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class INextBotComponent : public source2sdk::server::INextBotEventResponder
        {
        public:
            source2sdk::entity2::GameTime_t m_lastUpdateTime; // 0x8            
            float m_curInterval; // 0xc            
            uint8_t _pad0010[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in INextBotComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::INextBotComponent) == 0x20);
    };
};
