#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stack_damage; // 0x17f8            
            float bonus_stack_damage; // 0x17fc            
            std::int32_t max_multiply_stacks; // 0x1800            
            std::int32_t release_at_max_stacks; // 0x1804            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Shadow_Demon_Shadow_Poison) == 0x1810);
    };
};
