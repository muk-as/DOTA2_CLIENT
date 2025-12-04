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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_reduction; // 0x_            
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x_            
            float damage; // 0x_            
            std::int32_t m_nDamageAbsorbed; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_VengefulSpirit_Nether_Swap_DamageReduction) == 0x_);
    };
};
