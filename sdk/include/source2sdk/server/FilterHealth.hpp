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
    // Size: 0x548
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class FilterHealth : public server::CBaseFilter
    {
    public:
        bool m_bAdrenalineActive; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x3]; // 0x539
        int32_t m_iHealthMin; // 0x53c        
        int32_t m_iHealthMax; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in FilterHealth because it is not a standard-layout class
    static_assert(sizeof(FilterHealth) == 0x548);
};
