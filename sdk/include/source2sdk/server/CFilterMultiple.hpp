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
    // Size: 0x598
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFilterMultiple : public server::CBaseFilter
    {
    public:
        server::filter_t m_nFilterType; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4]; // 0x514
        CUtlSymbolLarge m_iFilterName[10]; // 0x518        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter[10];
        char m_hFilter[0x28]; // 0x568        
        int32_t m_nFilterCount; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFilterMultiple because it is not a standard-layout class
    static_assert(sizeof(CFilterMultiple) == 0x598);
};
