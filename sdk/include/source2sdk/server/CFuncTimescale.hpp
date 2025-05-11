#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CFuncTimescale : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flDesiredTimescale; // 0x4d8            
            float m_flAcceleration; // 0x4dc            
            float m_flMinBlendRate; // 0x4e0            
            float m_flBlendDeltaMultiplier; // 0x4e4            
            bool m_isStarted; // 0x4e8            
            uint8_t _pad04e9[0x7];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputReset; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTimescale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTimescale) == 0x4f0);
    };
};
