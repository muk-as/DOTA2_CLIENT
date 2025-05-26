#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PingParticleInfo_t
        {
        public:
            float m_flDuration; // 0x0            
            float m_flRadius; // 0x4            
            float m_flVerticalOffset; // 0x8            
            float m_flBonusVerticalOffsetFromTargetEntity; // 0xc            
            bool m_bShowDotaPlusBadge; // 0x10            
            uint8_t _pad0011[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flDuration) == 0x0);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flRadius) == 0x4);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flVerticalOffset) == 0x8);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flBonusVerticalOffsetFromTargetEntity) == 0xc);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_bShowDotaPlusBadge) == 0x10);
        
        static_assert(sizeof(source2sdk::client::PingParticleInfo_t) == 0x14);
    };
};
