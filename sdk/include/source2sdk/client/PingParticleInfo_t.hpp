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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PingParticleInfo_t
        {
        public:
            float m_flDuration; // 0x_            
            float m_flRadius; // 0x_            
            float m_flVerticalOffset; // 0x_            
            float m_flBonusVerticalOffsetFromTargetEntity; // 0x_            
            bool m_bShowDotaPlusBadge; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flVerticalOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_flBonusVerticalOffsetFromTargetEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::PingParticleInfo_t, m_bShowDotaPlusBadge) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PingParticleInfo_t) == 0x_);
    };
};
