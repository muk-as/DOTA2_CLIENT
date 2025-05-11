#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

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
        // Size: 0x538
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterTeam : public source2sdk::server::CBaseFilter
        {
        public:
            std::int32_t m_iFilterTeam; // 0x530            
            uint8_t _pad0534[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterTeam) == 0x538);
    };
};
