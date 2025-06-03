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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Silencer_GlaivesOfWisdom_SilenceDebuffCounter : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t movement_speed; // 0x1878            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_GlaivesOfWisdom_SilenceDebuffCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Silencer_GlaivesOfWisdom_SilenceDebuffCounter) == 0x1880);
    };
};
