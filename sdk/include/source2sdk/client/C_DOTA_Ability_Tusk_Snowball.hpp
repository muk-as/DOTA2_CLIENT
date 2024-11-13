#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Tusk_Snowball : public client::C_DOTABaseAbility
    {
    public:
        float snowball_windup_radius; // 0x600        
        float snowball_radius; // 0x604        
        int32_t snowball_grow_rate; // 0x608        
        int32_t snowball_damage; // 0x60c        
        int32_t snowball_damage_bonus; // 0x610        
        float stun_duration; // 0x614        
        float stun_duration_bonus; // 0x618        
        int32_t bonus_damage; // 0x61c        
        float bonus_stun; // 0x620        
        int32_t snowball_speed; // 0x624        
        int32_t snowball_speed_bonus; // 0x628        
        float snowball_duration; // 0x62c        
        Vector m_vProjectileLocation; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4]; // 0x63c
        // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hSnowballedUnits;
        char m_hSnowballedUnits[0x18]; // 0x640        
        client::ParticleIndex_t m_nFXIndex; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x65c[0x4]; // 0x65c
        client::CountdownTimer ctSnowball; // 0x660        
        bool m_bSpeakAlly; // 0x678        
        bool m_bIsExpired; // 0x679        
        bool m_bInWindup; // 0x67a        
        [[maybe_unused]] std::uint8_t pad_0x67b[0x1]; // 0x67b
        // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPrimaryTarget;
        char m_hPrimaryTarget[0x4]; // 0x67c        
        int32_t m_nContainedValidUnits; // 0x680        
        bool m_bEndingSnowball; // 0x684        
        [[maybe_unused]] std::uint8_t pad_0x685[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Tusk_Snowball because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Tusk_Snowball) == 0x688);
};
