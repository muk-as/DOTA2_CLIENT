#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Watch_Tower : public client::CDOTA_Buff
    {
    public:
        int32_t m_nTeamNumber; // 0x16e8        
        int32_t m_iCapturingTeam; // 0x16ec        
        float m_flCaptureProgress; // 0x16f0        
        float m_flBonusTime; // 0x16f4        
        bool m_bInitialSetupDone; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        int32_t m_iOriginalTeam; // 0x16fc        
        // m_hPreviousHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPreviousHero;
        char m_hPreviousHero[0x4]; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_vecLastCreditedPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerID_t> m_vecLastCreditedPlayerIDs;
        char m_vecLastCreditedPlayerIDs[0x18]; // 0x1708        
        float m_flAccumulatedCaptureTime; // 0x1720        
        int32_t m_iBonusCount; // 0x1724        
        client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1728        
        client::ParticleIndex_t m_nFxOutpostInitialAmbient; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Watch_Tower) == 0x1730);
};
