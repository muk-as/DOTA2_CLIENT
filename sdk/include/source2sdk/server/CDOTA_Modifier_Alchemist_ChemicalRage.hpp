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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Alchemist_ChemicalRage : public client::CDOTA_Buff
    {
    public:
        float base_attack_time; // 0x1708        
        int32_t bonus_health; // 0x170c        
        int32_t bonus_health_regen; // 0x1710        
        float bonus_mana_regen; // 0x1714        
        int32_t bonus_movespeed; // 0x1718        
        client::ParticleIndex_t m_nFXAlchemistCRIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_ChemicalRage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Alchemist_ChemicalRage) == 0x1720);
};
