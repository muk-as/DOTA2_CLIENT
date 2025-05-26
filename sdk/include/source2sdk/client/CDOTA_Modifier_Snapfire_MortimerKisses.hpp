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
        // Size: 0x18d8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x1878            
            float m_flFacingTarget; // 0x187c            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1880            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1884            
            float m_flCurDistance; // 0x1888            
            Vector m_vAimTarget; // 0x188c            
            float m_fLastTurnAmount; // 0x1898            
            std::int32_t m_nProjectilesLaunched; // 0x189c            
            bool m_bDestroyOnNextThink; // 0x18a0            
            uint8_t _pad18a1[0x3]; // 0x18a1
            std::int32_t m_nProjectilesToLaunch; // 0x18a4            
            bool m_bHasProjectileTalent; // 0x18a8            
            uint8_t _pad18a9[0x3]; // 0x18a9
            std::int32_t projectile_count; // 0x18ac            
            float projectile_speed; // 0x18b0            
            float projectile_width; // 0x18b4            
            float projectile_vision; // 0x18b8            
            float turn_rate; // 0x18bc            
            float min_range; // 0x18c0            
            float impact_radius; // 0x18c4            
            float min_lob_travel_time; // 0x18c8            
            float max_lob_travel_time; // 0x18cc            
            float delay_after_last_projectile; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x18d8);
    };
};
