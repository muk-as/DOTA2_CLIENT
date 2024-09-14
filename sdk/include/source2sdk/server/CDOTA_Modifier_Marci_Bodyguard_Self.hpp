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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Bodyguard_Self : public client::CDOTA_Buff
    {
    public:
        float lifesteal_pct; // 0x16e8        
        int32_t bonus_damage; // 0x16ec        
        int32_t creep_lifesteal_reduction_pct; // 0x16f0        
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguard_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Bodyguard_Self) == 0x16f8);
};
