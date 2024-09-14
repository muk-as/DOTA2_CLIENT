#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Watch_Tower : public client::CDOTA_Buff
    {
    public:
        int32_t m_iCapturingTeam; // 0x16e8        
        float m_flCaptureProgress; // 0x16ec        
        float m_flBonusTime; // 0x16f0        
        bool m_bInitialSetupDone; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f5[0x3]; // 0x16f5
        int32_t m_iOriginalTeam; // 0x16f8        
        // m_hPreviousHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviousHero;
        char m_hPreviousHero[0x4]; // 0x16fc        
        // m_vecLastCreditedPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerID_t> m_vecLastCreditedPlayerIDs;
        char m_vecLastCreditedPlayerIDs[0x18]; // 0x1700        
        float m_flAccumulatedCaptureTime; // 0x1718        
        int32_t m_iBonusCount; // 0x171c        
        client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1720        
        client::ParticleIndex_t m_nFxOutpostInitialAmbient; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Watch_Tower) == 0x1728);
};
