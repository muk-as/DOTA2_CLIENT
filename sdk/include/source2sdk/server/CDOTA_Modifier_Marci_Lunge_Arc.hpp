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
        // Size: 0x1900
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Lunge_Arc : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1878            
            Vector m_vStartPosition; // 0x187c            
            float m_flCurrentTimeHoriz; // 0x1888            
            float m_flCurrentTimeVert; // 0x188c            
            bool m_bDamageApplied; // 0x1890            
            bool m_bTargetTeleported; // 0x1891            
            uint8_t _pad1892[0x2]; // 0x1892
            Vector m_vHorizontalVelocity; // 0x1894            
            Vector m_vLastKnownTargetPosition; // 0x18a0            
            float m_flInitialVelocityZ; // 0x18ac            
            float m_fClampedProjectileSpeed; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b4            
            float m_fAcceleration; // 0x18b8            
            bool m_bTriggeredLandingAnim; // 0x18bc            
            uint8_t _pad18bd[0x3]; // 0x18bd
            std::int32_t m_nMaxJumpDistance; // 0x18c0            
            std::int32_t min_jump_distance; // 0x18c4            
            std::int32_t max_jump_distance; // 0x18c8            
            float min_lob_travel_time; // 0x18cc            
            float max_lob_travel_time; // 0x18d0            
            float landing_radius; // 0x18d4            
            float debuff_duration; // 0x18d8            
            float min_height_above_lowest; // 0x18dc            
            float min_height_above_highest; // 0x18e0            
            float min_acceleration; // 0x18e4            
            float max_acceleration; // 0x18e8            
            float impact_damage; // 0x18ec            
            std::int32_t impact_position_offset; // 0x18f0            
            std::int32_t ally_impact_damage_pct; // 0x18f4            
            float ally_buff_duration; // 0x18f8            
            // m_hBounceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBounceEntity;
            char m_hBounceEntity[0x4]; // 0x18fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Lunge_Arc) == 0x1900);
    };
};
