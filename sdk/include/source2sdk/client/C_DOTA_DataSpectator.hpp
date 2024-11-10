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
    // Size: 0x18b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
        char m_hPowerupRune_1[0x4]; // 0x1528        
        // metadata: MNetworkEnable
        // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPowerupRune_2;
        char m_hPowerupRune_2[0x4]; // 0x152c        
        // metadata: MNetworkEnable
        // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_1;
        char m_hBountyRune_1[0x4]; // 0x1530        
        // metadata: MNetworkEnable
        // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_2;
        char m_hBountyRune_2[0x4]; // 0x1534        
        // metadata: MNetworkEnable
        // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_3;
        char m_hBountyRune_3[0x4]; // 0x1538        
        // metadata: MNetworkEnable
        // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBountyRune_4;
        char m_hBountyRune_4[0x4]; // 0x153c        
        // metadata: MNetworkEnable
        // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hXPRune_1;
        char m_hXPRune_1[0x4]; // 0x1540        
        // metadata: MNetworkEnable
        // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hXPRune_2;
        char m_hXPRune_2[0x4]; // 0x1544        
        // metadata: MNetworkEnable
        int32_t m_iNetWorth[24]; // 0x1548        
        // metadata: MNetworkEnable
        float m_fRadiantWinProbability; // 0x15a8        
        // metadata: MNetworkEnable
        int32_t m_iGoldSpentOnSupport[24]; // 0x15ac        
        // metadata: MNetworkEnable
        int32_t m_iHeroDamage[24]; // 0x160c        
        // metadata: MNetworkEnable
        int32_t m_nWardsPurchased[24]; // 0x166c        
        // metadata: MNetworkEnable
        int32_t m_nWardsPlaced[24]; // 0x16cc        
        // metadata: MNetworkEnable
        int32_t m_nWardsDestroyed[24]; // 0x172c        
        // metadata: MNetworkEnable
        int32_t m_nRunesActivated[24]; // 0x178c        
        // metadata: MNetworkEnable
        int32_t m_nCampsStacked[24]; // 0x17ec        
        [[maybe_unused]] std::uint8_t pad_0x184c[0x4]; // 0x184c
        // metadata: MNetworkEnable
        // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
        char m_ThreatLevelInfos[0x68]; // 0x1850        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_DataSpectator because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_DataSpectator) == 0x18b8);
};
