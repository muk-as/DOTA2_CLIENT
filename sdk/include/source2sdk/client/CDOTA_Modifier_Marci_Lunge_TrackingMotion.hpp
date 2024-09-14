#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Lunge_TrackingMotion : public client::CDOTA_Buff
    {
    public:
        int32_t m_nProjectileID; // 0x16e8        
        int32_t m_nMaxJumpDistance; // 0x16ec        
        int32_t landing_radius; // 0x16f0        
        int32_t max_jump_distance; // 0x16f4        
        int32_t min_jump_distance; // 0x16f8        
        int32_t target_abort_distance; // 0x16fc        
        int32_t impact_position_offset; // 0x1700        
        float m_flCastDistance; // 0x1704        
        client::ParticleIndex_t m_nAoEFXIndex; // 0x1708        
        Vector m_vDestination; // 0x170c        
        // m_hBounceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBounceEntity;
        char m_hBounceEntity[0x4]; // 0x1718        
        // m_hBounceEntityClient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBounceEntityClient;
        char m_hBounceEntityClient[0x4]; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Lunge_TrackingMotion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Lunge_TrackingMotion) == 0x1720);
};
