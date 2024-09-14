#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CIngameEvent_MuertaReleaseSpring2023;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_MuertaReleaseEvent : public client::CDOTA_Buff
    {
    public:
        // m_hEvent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CIngameEvent_MuertaReleaseSpring2023> m_hEvent;
        char m_hEvent[0x4]; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_MuertaReleaseEvent because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_MuertaReleaseEvent) == 0x16f0);
};
