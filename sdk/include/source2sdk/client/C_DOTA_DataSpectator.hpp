#pragma once
#include "source2sdk/client/C_DOTA_DataNonSpectator.hpp"
#include "source2sdk/client/DOTAThreatLevelInfo_t.hpp"
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
    // Size: 0x1800
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPowerupRune_1"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPowerupRune_2"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_1"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_2"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_3"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_4"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hXPRune_1"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hXPRune_2"
    // static metadata: MNetworkVarNames "int m_iNetWorth"
    // static metadata: MNetworkVarNames "float m_fRadiantWinProbability"
    // static metadata: MNetworkVarNames "int m_iGoldSpentOnSupport"
    // static metadata: MNetworkVarNames "int m_iHeroDamage"
    // static metadata: MNetworkVarNames "int m_nWardsPurchased"
    // static metadata: MNetworkVarNames "int m_nWardsPlaced"
    // static metadata: MNetworkVarNames "int m_nWardsDestroyed"
    // static metadata: MNetworkVarNames "int m_nRunesActivated"
    // static metadata: MNetworkVarNames "int m_nCampsStacked"
    // static metadata: MNetworkVarNames "DOTAThreatLevelInfo_t m_ThreatLevelInfos"
    #pragma pack(push, 1)
    class C_DOTA_DataSpectator : public client::C_DOTA_DataNonSpectator
    {
    public:
        // metadata: MNetworkEnable
        // m_hPowerupRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPowerupRune_1;
        char m_hPowerupRune_1[0x4]; // 0x1488        
        // metadata: MNetworkEnable
        // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPowerupRune_2;
        char m_hPowerupRune_2[0x4]; // 0x148c        
        // metadata: MNetworkEnable
        // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_1;
        char m_hBountyRune_1[0x4]; // 0x1490        
        // metadata: MNetworkEnable
        // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_2;
        char m_hBountyRune_2[0x4]; // 0x1494        
        // metadata: MNetworkEnable
        // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_3;
        char m_hBountyRune_3[0x4]; // 0x1498        
        // metadata: MNetworkEnable
        // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_4;
        char m_hBountyRune_4[0x4]; // 0x149c        
        // metadata: MNetworkEnable
        // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hXPRune_1;
        char m_hXPRune_1[0x4]; // 0x14a0        
        // metadata: MNetworkEnable
        // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hXPRune_2;
        char m_hXPRune_2[0x4]; // 0x14a4        
        // metadata: MNetworkEnable
        int32_t m_iNetWorth[24]; // 0x14a8        
        // metadata: MNetworkEnable
        float m_fRadiantWinProbability; // 0x1508        
        // metadata: MNetworkEnable
        int32_t m_iGoldSpentOnSupport[24]; // 0x150c        
        // metadata: MNetworkEnable
        int32_t m_iHeroDamage[24]; // 0x156c        
        // metadata: MNetworkEnable
        int32_t m_nWardsPurchased[24]; // 0x15cc        
        // metadata: MNetworkEnable
        int32_t m_nWardsPlaced[24]; // 0x162c        
        // metadata: MNetworkEnable
        int32_t m_nWardsDestroyed[24]; // 0x168c        
        // metadata: MNetworkEnable
        int32_t m_nRunesActivated[24]; // 0x16ec        
        // metadata: MNetworkEnable
        int32_t m_nCampsStacked[24]; // 0x174c        
        [[maybe_unused]] std::uint8_t pad_0x17ac[0x4]; // 0x17ac
        // metadata: MNetworkEnable
        // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
        char m_ThreatLevelInfos[0x50]; // 0x17b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_DataSpectator because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_DataSpectator) == 0x1800);
};
