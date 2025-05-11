#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nTeamNumber; // 0x17f8            
            std::int32_t m_iCapturingTeam; // 0x17fc            
            float m_flCaptureProgress; // 0x1800            
            float m_flBonusTime; // 0x1804            
            bool m_bInitialSetupDone; // 0x1808            
            uint8_t _pad1809[0x3]; // 0x1809
            std::int32_t m_iOriginalTeam; // 0x180c            
            // m_hPreviousHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviousHero;
            char m_hPreviousHero[0x4]; // 0x1810            
            uint8_t _pad1814[0x4]; // 0x1814
            // m_vecLastCreditedPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_vecLastCreditedPlayerIDs;
            char m_vecLastCreditedPlayerIDs[0x18]; // 0x1818            
            float m_flAccumulatedCaptureTime; // 0x1830            
            std::int32_t m_iBonusCount; // 0x1834            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x1838            
            source2sdk::client::ParticleIndex_t m_nFxOutpostInitialAmbient; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Watch_Tower) == 0x1840);
    };
};
