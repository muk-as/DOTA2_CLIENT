#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Abaddon_AphoticShield : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        float damage_absorb; // 0x16ec        
        int32_t regen; // 0x16f0        
        int32_t m_nDamageAbsorbed; // 0x16f4        
        float absorb_to_damage; // 0x16f8        
        float absorb_damage_aoe; // 0x16fc        
        entity2::GameTime_t m_flLastTickTime; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_AphoticShield because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Abaddon_AphoticShield) == 0x1708);
};