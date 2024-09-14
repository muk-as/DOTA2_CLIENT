#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Juggernaut_Omnislash : public client::CDOTA_Buff
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16e8        
        // m_hLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastTarget;
        char m_hLastTarget[0x4]; // 0x16ec        
        int32_t m_nJumps; // 0x16f0        
        int32_t bonus_damage; // 0x16f4        
        int32_t bonus_attack_speed; // 0x16f8        
        float omni_slash_radius; // 0x16fc        
        float attack_rate_multiplier; // 0x1700        
        bool m_bFirstHit; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1705[0x3]; // 0x1705
        int32_t m_iTotalDamage; // 0x1708        
        int32_t m_iHeroDamage; // 0x170c        
        int32_t m_iKilledHeroes; // 0x1710        
        entity2::GameTime_t m_fNextAttackTime; // 0x1714        
        bool m_bScepterCast; // 0x1718        
        bool m_bReflection; // 0x1719        
        bool m_bEndNext; // 0x171a        
        [[maybe_unused]] std::uint8_t pad_0x171b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Omnislash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Juggernaut_Omnislash) == 0x1720);
};
