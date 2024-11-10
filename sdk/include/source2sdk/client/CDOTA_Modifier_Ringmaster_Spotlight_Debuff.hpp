#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Spotlight_Debuff : public client::CDOTA_Buff
    {
    public:
        int32_t miss_chance; // 0x1708        
        int32_t illusion_percent_damage; // 0x170c        
        float pulse_interval; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Debuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Spotlight_Debuff) == 0x1718);
};
