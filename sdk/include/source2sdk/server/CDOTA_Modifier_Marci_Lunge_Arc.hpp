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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Marci_Lunge_Arc : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x17f8            
            Vector m_vStartPosition; // 0x17fc            
            float m_flCurrentTimeHoriz; // 0x1808            
            float m_flCurrentTimeVert; // 0x180c            
            bool m_bDamageApplied; // 0x1810            
            bool m_bTargetTeleported; // 0x1811            
            uint8_t _pad1812[0x2]; // 0x1812
            Vector m_vHorizontalVelocity; // 0x1814            
            Vector m_vLastKnownTargetPosition; // 0x1820            
            float m_flInitialVelocityZ; // 0x182c            
            float m_fClampedProjectileSpeed; // 0x1830            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1834            
            float m_fAcceleration; // 0x1838            
            bool m_bTriggeredLandingAnim; // 0x183c            
            uint8_t _pad183d[0x3]; // 0x183d
            std::int32_t m_nMaxJumpDistance; // 0x1840            
            std::int32_t min_jump_distance; // 0x1844            
            std::int32_t max_jump_distance; // 0x1848            
            float min_lob_travel_time; // 0x184c            
            float max_lob_travel_time; // 0x1850            
            float landing_radius; // 0x1854            
            float debuff_duration; // 0x1858            
            float min_height_above_lowest; // 0x185c            
            float min_height_above_highest; // 0x1860            
            float min_acceleration; // 0x1864            
            float max_acceleration; // 0x1868            
            float impact_damage; // 0x186c            
            std::int32_t impact_position_offset; // 0x1870            
            std::int32_t ally_impact_damage_pct; // 0x1874            
            float ally_buff_duration; // 0x1878            
            // m_hBounceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBounceEntity;
            char m_hBounceEntity[0x4]; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_Arc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Marci_Lunge_Arc) == 0x1880);
    };
};
