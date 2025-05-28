#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DrowRanger_FrostArrows_Hypothermia : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t shard_regen_reduction_pct_per_stack; // 0x1888            
            float shard_burst_radius; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_FrostArrows_Hypothermia because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DrowRanger_FrostArrows_Hypothermia) == 0x1898);
    };
};
