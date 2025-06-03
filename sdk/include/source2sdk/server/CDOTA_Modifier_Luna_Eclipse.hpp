#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_Eclipse : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            float radius; // 0x187c            
            std::int32_t beams; // 0x1880            
            std::int32_t hit_count; // 0x1884            
            std::int32_t m_iBeamDamage; // 0x1888            
            float beam_interval; // 0x188c            
            float stun_duration; // 0x1890            
            Vector vPosition; // 0x1894            
            bool bAreaTarget; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            std::int32_t m_iTickCount; // 0x18a4            
            source2sdk::client::ParticleIndex_t m_nMoonlightFXIndex; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_HitTargets;
            char m_HitTargets[0x18]; // 0x18b0            
            float m_flBeamStun; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Luna_Eclipse) == 0x18d0);
    };
};
