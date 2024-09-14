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
    class CDOTA_Modifier_Grimstroke_InkCreature_Debuff : public client::CDOTA_Buff
    {
    public:
        float m_flCurrentArmorReduction; // 0x16e8        
        // m_hLatchedCreature has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLatchedCreature;
        char m_hLatchedCreature[0x4]; // 0x16ec        
        float tick_interval; // 0x16f0        
        int32_t damage_per_second; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_InkCreature_Debuff) == 0x16f8);
};
