#pragma once
#include "source2sdk/client/CDOTA_Modifier_Stacking_Base.hpp"
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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PrimalBeast_Uproar : public client::CDOTA_Modifier_Stacking_Base
    {
    public:
        int32_t stack_limit; // 0x16e8        
        int32_t damage_limit; // 0x16ec        
        float stack_duration; // 0x16f0        
        float damage_min; // 0x16f4        
        float damage_max; // 0x16f8        
        int32_t bonus_damage_per_stack; // 0x16fc        
        client::ParticleIndex_t m_nFxIndexA; // 0x1700        
        int32_t iCur_stack; // 0x1704        
        int32_t bonus_damage; // 0x1708        
        float slow_duration; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x1710[0x18]; // 0x1710
        float m_fTotalDamage; // 0x1728        
        entity2::GameTime_t m_flLastStackTime; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Uproar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Uproar) == 0x1730);
};
