#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CModifierParams;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // Is Abstract
    // MDisableDataDescValidation
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_ActionRunner
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkDisable
        client::CModifierParams* m_pEventContext; // 0x8        
        // metadata: MNetworkDisable
        server::CDOTA_BaseNPC* m_pCaster; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_ActionRunner, m_pEventContext) == 0x8);
    static_assert(offsetof(CDOTA_ActionRunner, m_pCaster) == 0x10);
    
    static_assert(sizeof(CDOTA_ActionRunner) == 0x18);
};
