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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTimescale : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flDesiredTimescale; // 0x_            
            float m_flAcceleration; // 0x_            
            float m_flMinBlendRate; // 0x_            
            float m_flBlendDeltaMultiplier; // 0x_            
            bool m_isStarted; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputStart; // 0x_
            // void InputStop; // 0x_
            // void InputReset; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTimescale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTimescale) == 0x_);
    };
};
