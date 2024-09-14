#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Stacking_Base.hpp"
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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PrimalBeast_Uproar : public server::CDOTA_Modifier_Stacking_Base
    {
    public:
        int32_t stack_limit; // 0x1708        
        int32_t damage_limit; // 0x170c        
        float stack_duration; // 0x1710        
        float damage_min; // 0x1714        
        float damage_max; // 0x1718        
        int32_t bonus_damage_per_stack; // 0x171c        
        client::ParticleIndex_t m_nFxIndexA; // 0x1720        
        int32_t iCur_stack; // 0x1724        
        int32_t bonus_damage; // 0x1728        
        float slow_duration; // 0x172c        
        [[maybe_unused]] std::uint8_t pad_0x1730[0x18]; // 0x1730
        float m_fTotalDamage; // 0x1748        
        entity2::GameTime_t m_flLastStackTime; // 0x174c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Uproar because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Uproar) == 0x1750);
};
