#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPrimary"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSecondary"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTertiary"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hFourth"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Brewmaster_PrimalSplit : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hPrimary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrimary;
            char m_hPrimary[0x4]; // 0x680            
            // metadata: MNetworkEnable
            // m_hSecondary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecondary;
            char m_hSecondary[0x4]; // 0x684            
            // metadata: MNetworkEnable
            // m_hTertiary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTertiary;
            char m_hTertiary[0x4]; // 0x688            
            // metadata: MNetworkEnable
            // m_hFourth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hFourth;
            char m_hFourth[0x4]; // 0x68c            
            source2sdk::entity2::GameTime_t m_fHurlBoulder_CooldownTime; // 0x690            
            source2sdk::entity2::GameTime_t m_fHDispelMagic_CooldownTime; // 0x694            
            source2sdk::entity2::GameTime_t m_fCyclone_CooldownTime; // 0x698            
            source2sdk::entity2::GameTime_t m_fWindWalk_CooldownTime; // 0x69c            
            source2sdk::entity2::GameTime_t m_fAstralPulse_CooldownTime; // 0x6a0            
            uint8_t _pad06a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Brewmaster_PrimalSplit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Brewmaster_PrimalSplit) == 0x6a8);
    };
};
