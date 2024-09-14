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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Warlock_Imp_AutoAttack : public client::CDOTA_Buff
    {
    public:
        // m_hBestTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBestTarget;
        char m_hBestTarget[0x4]; // 0x16e8        
        float bonus_hp; // 0x16ec        
        float bonus_dmg; // 0x16f0        
        float bonus_movespeed; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Imp_AutoAttack because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Warlock_Imp_AutoAttack) == 0x16f8);
};
