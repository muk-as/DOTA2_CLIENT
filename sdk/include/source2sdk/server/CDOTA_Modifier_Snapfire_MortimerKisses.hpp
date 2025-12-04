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
        class CDOTA_Modifier_Snapfire_MortimerKisses : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fIntervalPerRocket; // 0x_            
            float m_flFacingTarget; // 0x_            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x_            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x_]; // 0x_            
            float m_flCurDistance; // 0x_            
            Vector m_vAimTarget; // 0x_            
            float m_fLastTurnAmount; // 0x_            
            std::int32_t m_nProjectilesLaunched; // 0x_            
            bool m_bDestroyOnNextThink; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nProjectilesToLaunch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool has_bonus_projectile; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t projectile_count; // 0x_            
            float projectile_speed; // 0x_            
            float projectile_width; // 0x_            
            float projectile_vision; // 0x_            
            float turn_rate; // 0x_            
            float min_range; // 0x_            
            float impact_radius; // 0x_            
            float min_lob_travel_time; // 0x_            
            float max_lob_travel_time; // 0x_            
            float delay_after_last_projectile; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_MortimerKisses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_MortimerKisses) == 0x_);
    };
};
