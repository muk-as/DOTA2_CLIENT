#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTA_Modifier_FacelessVoid_TimeDilation_Slow : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        int32_t m_nAffectedAbilities; // 0x16ec        
        entity2::GameTime_t m_flLastDamageTime; // 0x16f0        
        int32_t slow; // 0x16f4        
        int32_t cooldown_percentage; // 0x16f8        
        int32_t damage_per_stack; // 0x16fc        
        int32_t base_damage; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeDilation_Slow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_TimeDilation_Slow) == 0x1708);
};
