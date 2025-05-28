#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_Eclipse : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1888            
            float radius; // 0x188c            
            std::int32_t beams; // 0x1890            
            std::int32_t hit_count; // 0x1894            
            std::int32_t m_iBeamDamage; // 0x1898            
            float beam_interval; // 0x189c            
            float stun_duration; // 0x18a0            
            Vector vPosition; // 0x18a4            
            bool bAreaTarget; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            std::int32_t m_iTickCount; // 0x18b4            
            source2sdk::client::ParticleIndex_t m_nMoonlightFXIndex; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_HitTargets;
            char m_HitTargets[0x18]; // 0x18c0            
            float m_flBeamStun; // 0x18d8            
            uint8_t _pad18dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Luna_Eclipse) == 0x18e0);
    };
};
