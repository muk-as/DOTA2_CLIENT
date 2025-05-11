#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1858
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_IcePath_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float path_delay; // 0x17f8            
            float path_radius; // 0x17fc            
            std::int32_t m_nDamage; // 0x1800            
            float m_flRadius; // 0x1804            
            float stun_duration; // 0x1808            
            std::int32_t detonate_projectile_speed; // 0x180c            
            // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hUnitsHit;
            char m_hUnitsHit[0x18]; // 0x1810            
            Vector m_vPathStart; // 0x1828            
            Vector m_vPathEnd; // 0x1834            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1840            
            source2sdk::client::ParticleIndex_t m_nPathEffectIndexa; // 0x1844            
            source2sdk::client::ParticleIndex_t m_nPathEffectIndexb; // 0x1848            
            uint8_t _pad184c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_IcePath_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Jakiro_IcePath_Thinker) == 0x1858);
    };
};
