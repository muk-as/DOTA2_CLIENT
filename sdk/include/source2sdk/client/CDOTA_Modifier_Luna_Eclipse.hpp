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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Luna_Eclipse : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1708        
        float radius; // 0x170c        
        int32_t beams; // 0x1710        
        int32_t hit_count; // 0x1714        
        int32_t m_iBeamDamage; // 0x1718        
        float beam_interval; // 0x171c        
        float stun_duration; // 0x1720        
        Vector vPosition; // 0x1724        
        bool bAreaTarget; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        int32_t m_iTickCount; // 0x1734        
        client::ParticleIndex_t m_nMoonlightFXIndex; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4]; // 0x173c
        // m_HitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_HitTargets;
        char m_HitTargets[0x18]; // 0x1740        
        float m_flBeamStun; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x175c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Luna_Eclipse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Luna_Eclipse) == 0x1760);
};
