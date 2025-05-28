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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_ExplosiveBarrel : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nPreviewFX; // 0x1888            
            std::int32_t radius; // 0x188c            
            std::int32_t damage; // 0x1890            
            std::int32_t vision_radius; // 0x1894            
            float vision_duration; // 0x1898            
            std::int32_t model_scale; // 0x189c            
            bool bExploding; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            float stun_duration; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ExplosiveBarrel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_ExplosiveBarrel) == 0x18a8);
    };
};
