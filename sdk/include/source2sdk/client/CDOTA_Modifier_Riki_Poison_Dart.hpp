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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Riki_Poison_Dart : public client::CDOTA_Buff
    {
    public:
        int32_t wake_damage_limit; // 0x16e8        
        float m_flDamageTaken; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Riki_Poison_Dart because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Riki_Poison_Dart) == 0x16f0);
};
