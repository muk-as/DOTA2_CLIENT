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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_Frogstomp_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_stomp; // 0x_            
            std::int32_t total_ticks; // 0x_            
            float radius; // 0x_            
            float stun_duration; // 0x_            
            float stomp_interval; // 0x_            
            float delay; // 0x_            
            bool m_bStarted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            std::int32_t nNumTicks; // 0x_            
            bool m_bGrantedGem; // 0x_            
            bool m_bPendingDestroy; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitHeroes;
            char m_hHitHeroes[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_Frogstomp_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_Frogstomp_Thinker) == 0x_);
    };
};
