#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x798
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerVolume : public server::CBaseModelEntity
    {
    public:
        CUtlSymbolLarge m_iFilterName; // 0x788        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x790        
        [[maybe_unused]] std::uint8_t pad_0x794[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerVolume because it is not a standard-layout class
    static_assert(sizeof(CTriggerVolume) == 0x798);
};
