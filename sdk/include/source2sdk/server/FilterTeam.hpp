#pragma once
#include "source2sdk/server/CBaseFilter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class FilterTeam : public server::CBaseFilter
    {
    public:
        int32_t m_iFilterTeam; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FilterTeam because it is not a standard-layout class
    static_assert(sizeof(FilterTeam) == 0x540);
};
