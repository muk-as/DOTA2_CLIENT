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
        // Size: 0x3e94c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDebugHistory : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04e0[0x3e8040]; // 0x4e0
            std::int32_t m_nNpcEvents; // 0x3e8520            
            uint8_t _pad3e8524[0xfa4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDebugHistory because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDebugHistory) == 0x3e94c8);
    };
};
