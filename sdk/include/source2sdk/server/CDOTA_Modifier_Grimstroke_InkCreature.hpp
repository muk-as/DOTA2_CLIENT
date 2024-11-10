#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_InkCreature : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x170c        
        int32_t m_nAttackCount; // 0x1710        
        bool m_bIsLatched; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        server::CountdownTimer m_EnemyVision; // 0x1720        
        float latch_duration; // 0x1738        
        float speed; // 0x173c        
        int32_t destroy_attacks; // 0x1740        
        int32_t hero_attack_multiplier; // 0x1744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_InkCreature) == 0x1748);
};
