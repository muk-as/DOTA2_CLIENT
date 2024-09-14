#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Grimstroke_InkCreature : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        client::ParticleIndex_t m_nAmbientFXIndex; // 0x16ec        
        int32_t m_nAttackCount; // 0x16f0        
        bool m_bIsLatched; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        client::CountdownTimer m_EnemyVision; // 0x1700        
        float latch_duration; // 0x1718        
        float speed; // 0x171c        
        int32_t destroy_attacks; // 0x1720        
        int32_t hero_attack_multiplier; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Grimstroke_InkCreature) == 0x1728);
};
