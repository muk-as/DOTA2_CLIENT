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
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dazzle_Poison_Touch_Split : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nAttacksLanded; // 0x17f8            
            std::int32_t attacks_to_split; // 0x17fc            
            std::int32_t split_radius; // 0x1800            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dazzle_Poison_Touch_Split because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dazzle_Poison_Touch_Split) == 0x1808);
    };
};
