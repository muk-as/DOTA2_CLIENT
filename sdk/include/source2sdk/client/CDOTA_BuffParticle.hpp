#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDOTA_BuffParticle
        {
        public:
            source2sdk::client::ParticleIndex_t m_iIndex; // 0x_            
            std::int32_t m_iPriority; // 0x_            
            bool m_bDestroyImmediatly; // 0x_            
            bool m_bStatusEffect; // 0x_            
            bool m_bHeroEffect; // 0x_            
            bool m_bOverheadEffectOffset; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_iIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_iPriority) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bDestroyImmediatly) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bStatusEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bHeroEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bOverheadEffectOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_BuffParticle) == 0x_);
    };
};
