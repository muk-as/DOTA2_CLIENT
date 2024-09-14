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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Clinkz_Strafe_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t blind_pct; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4]; // 0x16ec
        // m_hAppliers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAppliers;
        char m_hAppliers[0x18]; // 0x16f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Clinkz_Strafe_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Clinkz_Strafe_Debuff) == 0x1708);
};
