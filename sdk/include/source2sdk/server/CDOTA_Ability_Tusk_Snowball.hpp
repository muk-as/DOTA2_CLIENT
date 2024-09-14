#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Tusk_Snowball : public server::CDOTABaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5a0[0x10]; // 0x5a0
        float snowball_windup_radius; // 0x5b0        
        int32_t snowball_radius; // 0x5b4        
        int32_t snowball_grow_rate; // 0x5b8        
        int32_t snowball_damage; // 0x5bc        
        int32_t snowball_damage_bonus; // 0x5c0        
        float stun_duration; // 0x5c4        
        float stun_duration_bonus; // 0x5c8        
        int32_t bonus_damage; // 0x5cc        
        float bonus_stun; // 0x5d0        
        int32_t snowball_speed; // 0x5d4        
        int32_t snowball_speed_bonus; // 0x5d8        
        float snowball_duration; // 0x5dc        
        Vector m_vProjectileLocation; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hSnowballedUnits;
        char m_hSnowballedUnits[0x18]; // 0x5f0        
        client::ParticleIndex_t m_nFXIndex; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4]; // 0x60c
        server::CountdownTimer ctSnowball; // 0x610        
        bool m_bSpeakAlly; // 0x628        
        bool m_bIsExpired; // 0x629        
        bool m_bInWindup; // 0x62a        
        [[maybe_unused]] std::uint8_t pad_0x62b[0x1]; // 0x62b
        // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPrimaryTarget;
        char m_hPrimaryTarget[0x4]; // 0x62c        
        int32_t m_nContainedValidUnits; // 0x630        
        bool m_bEndingSnowball; // 0x634        
        [[maybe_unused]] std::uint8_t pad_0x635[0x9b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tusk_Snowball because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tusk_Snowball) == 0x6d0);
};
