#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Firefly : public source2sdk::client::CDOTA_Buff
        {
        public:
            float pool_duration; // 0x1878            
            std::int32_t radius; // 0x187c            
            std::int32_t m_ifirefly_Active; // 0x1880            
            std::int32_t tree_radius; // 0x1884            
            std::int32_t damage_pct_per_second; // 0x1888            
            std::int32_t movement_speed; // 0x188c            
            float trail_placement_duration; // 0x1890            
            float burn_linger_duration; // 0x1894            
            bool m_bActive; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x189c            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x18a0            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x18a4            
            Vector m_vLastFirePoolLoc; // 0x18a8            
            uint8_t _pad18b4[0x4]; // 0x18b4
            // m_vFirePoolLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_vFirePoolLocations;
            char m_vFirePoolLocations[0x18]; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Firefly because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Firefly) == 0x18d0);
    };
};
