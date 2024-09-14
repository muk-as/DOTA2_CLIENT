#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_Firefly : public client::CDOTA_Buff
    {
    public:
        float pool_duration; // 0x16e8        
        int32_t radius; // 0x16ec        
        int32_t m_ifirefly_Active; // 0x16f0        
        int32_t tree_radius; // 0x16f4        
        int32_t damage_pct_per_second; // 0x16f8        
        int32_t movement_speed; // 0x16fc        
        float trail_placement_duration; // 0x1700        
        float burn_linger_duration; // 0x1704        
        bool m_bActive; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        client::ParticleIndex_t m_nFXIndex; // 0x170c        
        client::ParticleIndex_t m_nFXIndexB; // 0x1710        
        entity2::GameTime_t m_flStartTime; // 0x1714        
        Vector m_vLastFirePoolLoc; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // m_vFirePoolLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vFirePoolLocations;
        char m_vFirePoolLocations[0x18]; // 0x1728        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Firefly because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_Firefly) == 0x1740);
};
