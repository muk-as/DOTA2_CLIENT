#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPrimary"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hSecondary"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTertiary"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hFourth"
        #pragma pack(push, 1)
        class CDOTA_Ability_Brewmaster_PrimalSplit : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hPrimary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimary;
            char m_hPrimary[0x4]; // 0x5b8            
            // metadata: MNetworkEnable
            // m_hSecondary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecondary;
            char m_hSecondary[0x4]; // 0x5bc            
            // metadata: MNetworkEnable
            // m_hTertiary has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTertiary;
            char m_hTertiary[0x4]; // 0x5c0            
            // metadata: MNetworkEnable
            // m_hFourth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFourth;
            char m_hFourth[0x4]; // 0x5c4            
            source2sdk::entity2::GameTime_t m_fHurlBoulder_CooldownTime; // 0x5c8            
            source2sdk::entity2::GameTime_t m_fHDispelMagic_CooldownTime; // 0x5cc            
            source2sdk::entity2::GameTime_t m_fCyclone_CooldownTime; // 0x5d0            
            source2sdk::entity2::GameTime_t m_fWindWalk_CooldownTime; // 0x5d4            
            source2sdk::entity2::GameTime_t m_fAstralPulse_CooldownTime; // 0x5d8            
            uint8_t _pad05dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_PrimalSplit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Brewmaster_PrimalSplit) == 0x5e0);
    };
};
