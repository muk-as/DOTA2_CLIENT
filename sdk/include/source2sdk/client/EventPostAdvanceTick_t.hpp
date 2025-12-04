#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EventSimulate_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventPostAdvanceTick_t : public source2sdk::client::EventSimulate_t
        {
        public:
            std::int32_t m_nCurrentTick; // 0x_            
            std::int32_t m_nCurrentTickThisFrame; // 0x_            
            std::int32_t m_nTotalTicksThisFrame; // 0x_            
            std::int32_t m_nTotalTicks; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in EventPostAdvanceTick_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::EventPostAdvanceTick_t) == 0x_);
    };
};
