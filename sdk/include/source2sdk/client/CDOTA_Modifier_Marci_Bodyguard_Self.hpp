#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Bodyguard_Self : public client::CDOTA_Buff
    {
    public:
        float lifesteal_pct; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        int32_t creep_lifesteal_reduction_pct; // 0x1710        
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguard_Self because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Bodyguard_Self) == 0x1718);
};
