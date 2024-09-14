#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Luna_Eclipse : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        int32_t radius; // 0x16ec        
        int32_t beams; // 0x16f0        
        int32_t hit_count; // 0x16f4        
        int32_t m_iBeamDamage; // 0x16f8        
        float beam_interval; // 0x16fc        
        float stun_duration; // 0x1700        
        Vector vPosition; // 0x1704        
        bool bAreaTarget; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        int32_t m_iTickCount; // 0x1714        
        client::ParticleIndex_t m_nMoonlightFXIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_HitTargets;
        char m_HitTargets[0x18]; // 0x1720        
        float m_flBeamStun; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Luna_Eclipse) == 0x1740);
};
