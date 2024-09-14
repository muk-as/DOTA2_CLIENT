#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPrimary"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSecondary"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTertiary"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hFourth"
    #pragma pack(push, 1)
    class CDOTA_Ability_Brewmaster_PrimalSplit : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hPrimary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPrimary;
        char m_hPrimary[0x4]; // 0x5a0        
        // metadata: MNetworkEnable
        // m_hSecondary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSecondary;
        char m_hSecondary[0x4]; // 0x5a4        
        // metadata: MNetworkEnable
        // m_hTertiary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTertiary;
        char m_hTertiary[0x4]; // 0x5a8        
        // metadata: MNetworkEnable
        // m_hFourth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFourth;
        char m_hFourth[0x4]; // 0x5ac        
        entity2::GameTime_t m_fHurlBoulder_CooldownTime; // 0x5b0        
        entity2::GameTime_t m_fHDispelMagic_CooldownTime; // 0x5b4        
        entity2::GameTime_t m_fCyclone_CooldownTime; // 0x5b8        
        entity2::GameTime_t m_fWindWalk_CooldownTime; // 0x5bc        
        entity2::GameTime_t m_fAstralPulse_CooldownTime; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_PrimalSplit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Brewmaster_PrimalSplit) == 0x5c8);
};
