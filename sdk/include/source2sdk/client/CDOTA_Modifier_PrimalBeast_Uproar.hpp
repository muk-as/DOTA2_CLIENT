#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Stacking_Base.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Uproar : public source2sdk::client::CDOTA_Modifier_Stacking_Base
        {
        public:
            std::int32_t stack_limit; // 0x17f8            
            std::int32_t damage_limit; // 0x17fc            
            std::int32_t stack_count_increase_on_disable; // 0x1800            
            float stack_duration; // 0x1804            
            float damage_min; // 0x1808            
            float damage_max; // 0x180c            
            std::int32_t bonus_damage_per_stack; // 0x1810            
            source2sdk::client::ParticleIndex_t m_nFxIndexA; // 0x1814            
            std::int32_t iCur_stack; // 0x1818            
            float slow_duration; // 0x181c            
            uint8_t _pad1820[0x18]; // 0x1820
            float m_fTotalDamage; // 0x1838            
            source2sdk::entity2::GameTime_t m_flLastStackTime; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Uproar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PrimalBeast_Uproar) == 0x1840);
    };
};
