#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_IcePath_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float path_delay; // 0x1878            
            float path_radius; // 0x187c            
            std::int32_t m_nDamage; // 0x1880            
            float m_flRadius; // 0x1884            
            float stun_duration; // 0x1888            
            std::int32_t detonate_projectile_speed; // 0x188c            
            // m_hUnitsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hUnitsHit;
            char m_hUnitsHit[0x18]; // 0x1890            
            Vector m_vPathStart; // 0x18a8            
            Vector m_vPathEnd; // 0x18b4            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x18c0            
            uint8_t _pad18c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_IcePath_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Jakiro_IcePath_Thinker) == 0x18c8);
    };
};
