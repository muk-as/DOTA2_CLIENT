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
        // Size: 0x1850
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Luna_Eclipse : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17f8            
            float radius; // 0x17fc            
            std::int32_t beams; // 0x1800            
            std::int32_t hit_count; // 0x1804            
            std::int32_t m_iBeamDamage; // 0x1808            
            float beam_interval; // 0x180c            
            float stun_duration; // 0x1810            
            Vector vPosition; // 0x1814            
            bool bAreaTarget; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            std::int32_t m_iTickCount; // 0x1824            
            source2sdk::client::ParticleIndex_t m_nMoonlightFXIndex; // 0x1828            
            uint8_t _pad182c[0x4]; // 0x182c
            // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_HitTargets;
            char m_HitTargets[0x18]; // 0x1830            
            float m_flBeamStun; // 0x1848            
            uint8_t _pad184c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Luna_Eclipse) == 0x1850);
    };
};
