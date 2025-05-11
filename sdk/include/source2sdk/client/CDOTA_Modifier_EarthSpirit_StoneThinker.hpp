#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
    };
};

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
        class CDOTA_Modifier_EarthSpirit_StoneThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::particleslib::CNewParticleEffect* m_pVisionRangeFX; // 0x17f8            
            std::int32_t vision_radius; // 0x1800            
            bool m_bHasBeenMagnetized; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_StoneThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_StoneThinker) == 0x1810);
    };
};
