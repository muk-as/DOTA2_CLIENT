#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoGameEventProxy : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszEventName; // 0x4e0            
            float m_flRange; // 0x4e8            
            uint8_t _pad04ec[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge InputGenerateGameEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoGameEventProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoGameEventProxy) == 0x4f0);
    };
};
