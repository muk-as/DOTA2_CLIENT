#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPrimary"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSecondary"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTertiary"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hFourth"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Brewmaster_PrimalSplit : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hPrimary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPrimary;
        char m_hPrimary[0x4]; // 0x600        
        // metadata: MNetworkEnable
        // m_hSecondary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSecondary;
        char m_hSecondary[0x4]; // 0x604        
        // metadata: MNetworkEnable
        // m_hTertiary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTertiary;
        char m_hTertiary[0x4]; // 0x608        
        // metadata: MNetworkEnable
        // m_hFourth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFourth;
        char m_hFourth[0x4]; // 0x60c        
        entity2::GameTime_t m_fHurlBoulder_CooldownTime; // 0x610        
        entity2::GameTime_t m_fHDispelMagic_CooldownTime; // 0x614        
        entity2::GameTime_t m_fCyclone_CooldownTime; // 0x618        
        entity2::GameTime_t m_fWindWalk_CooldownTime; // 0x61c        
        entity2::GameTime_t m_fAstralPulse_CooldownTime; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Brewmaster_PrimalSplit because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Brewmaster_PrimalSplit) == 0x628);
};
