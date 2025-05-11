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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_ExplosiveBarrel : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nPreviewFX; // 0x17f8            
            std::int32_t radius; // 0x17fc            
            std::int32_t damage; // 0x1800            
            std::int32_t vision_radius; // 0x1804            
            float vision_duration; // 0x1808            
            std::int32_t model_scale; // 0x180c            
            bool bExploding; // 0x1810            
            uint8_t _pad1811[0x3]; // 0x1811
            float stun_duration; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ExplosiveBarrel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_ExplosiveBarrel) == 0x1818);
    };
};
