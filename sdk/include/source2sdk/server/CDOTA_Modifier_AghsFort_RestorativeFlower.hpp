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
        class CDOTA_Modifier_AghsFort_RestorativeFlower : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1878            
            std::int32_t heal; // 0x187c            
            std::int32_t vision_radius; // 0x1880            
            float vision_duration; // 0x1884            
            std::int32_t model_scale; // 0x1888            
            bool bExploding; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            float stun_duration; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXAmbient; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_RestorativeFlower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_RestorativeFlower) == 0x1898);
    };
};
