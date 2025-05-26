#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Stacking_Base.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Uproar : public source2sdk::server::CDOTA_Modifier_Stacking_Base
        {
        public:
            std::int32_t stack_limit; // 0x1898            
            std::int32_t damage_limit; // 0x189c            
            std::int32_t stack_count_increase_on_disable; // 0x18a0            
            float stack_duration; // 0x18a4            
            float damage_min; // 0x18a8            
            float damage_max; // 0x18ac            
            std::int32_t bonus_damage_per_stack; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nFxIndexA; // 0x18b4            
            std::int32_t iCur_stack; // 0x18b8            
            float slow_duration; // 0x18bc            
            uint8_t _pad18c0[0x18]; // 0x18c0
            float m_fTotalDamage; // 0x18d8            
            source2sdk::entity2::GameTime_t m_flLastStackTime; // 0x18dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Uproar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Uproar) == 0x18e0);
    };
};
