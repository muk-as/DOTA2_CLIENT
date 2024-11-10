#pragma once
#include "source2sdk/server/CBaseFilter.hpp"
#include "source2sdk/server/filter_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CFilterMultiple : public server::CBaseFilter
    {
    public:
        server::filter_t m_nFilterType; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4]; // 0x53c
        CUtlSymbolLarge m_iFilterName[10]; // 0x540        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter[10];
        char m_hFilter[0x28]; // 0x590        
        int32_t m_nFilterCount; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterMultiple because it is not a standard-layout class
    static_assert(sizeof(CFilterMultiple) == 0x5c0);
};
