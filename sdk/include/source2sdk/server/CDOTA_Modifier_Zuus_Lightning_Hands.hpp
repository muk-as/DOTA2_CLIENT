#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Zuus_Lightning_Hands : public client::CDOTA_Buff
    {
    public:
        // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_InFlightAttackRecords;
        char m_InFlightAttackRecords[0x18]; // 0x1708        
        client::ParticleIndex_t m_nFXIndex; // 0x1720        
        int32_t arc_lightning_damage_pct; // 0x1724        
        int32_t arc_lightning_damage_illusion_pct; // 0x1728        
        int32_t attack_speed_bonus; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_Lightning_Hands because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Zuus_Lightning_Hands) == 0x1730);
};
