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
        class CDOTA_Modifier_Underlord_Portal_Warp_Channel : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nfxTargetTp; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nfxTargetTp2; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nfxAmbientFx; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nfxPortal1; // 0x1894            
            source2sdk::client::ParticleIndex_t m_nfxPortal2; // 0x1898            
            float animation_rate; // 0x189c            
            std::int32_t stop_distance; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Underlord_Portal_Warp_Channel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Underlord_Portal_Warp_Channel) == 0x18a8);
    };
};
