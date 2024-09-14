#pragma once
#include "source2sdk/server/CDOTA_DataNonSpectator.hpp"
#include "source2sdk/server/DOTAThreatLevelInfo_t.hpp"
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
    // Size: 0x14e0
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
    // static metadata: MNetworkVarNames "DOTAThreatLevelInfo_t m_ThreatLevelInfos"
    #pragma pack(push, 1)
    class CDOTA_DataSpectator : public server::CDOTA_DataNonSpectator
    {
    public:
        // metadata: MNetworkEnable
        // m_hPowerupRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPowerupRune_1;
        char m_hPowerupRune_1[0x4]; // 0x1408        
        // metadata: MNetworkEnable
        // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPowerupRune_2;
        char m_hPowerupRune_2[0x4]; // 0x140c        
        // metadata: MNetworkEnable
        // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBountyRune_1;
        char m_hBountyRune_1[0x4]; // 0x1410        
        // metadata: MNetworkEnable
        // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBountyRune_2;
        char m_hBountyRune_2[0x4]; // 0x1414        
        // metadata: MNetworkEnable
        // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBountyRune_3;
        char m_hBountyRune_3[0x4]; // 0x1418        
        // metadata: MNetworkEnable
        // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBountyRune_4;
        char m_hBountyRune_4[0x4]; // 0x141c        
        // metadata: MNetworkEnable
        // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hXPRune_1;
        char m_hXPRune_1[0x4]; // 0x1420        
        // metadata: MNetworkEnable
        // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hXPRune_2;
        char m_hXPRune_2[0x4]; // 0x1424        
        // metadata: MNetworkEnable
        int32_t m_iNetWorth[24]; // 0x1428        
        // metadata: MNetworkEnable
        float m_fRadiantWinProbability; // 0x1488        
        [[maybe_unused]] std::uint8_t pad_0x148c[0x4]; // 0x148c
        // metadata: MNetworkEnable
        // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
        char m_ThreatLevelInfos[0x50]; // 0x1490        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_DataSpectator because it is not a standard-layout class
    static_assert(sizeof(CDOTA_DataSpectator) == 0x14e0);
};
