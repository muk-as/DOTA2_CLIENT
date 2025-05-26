#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iCapturingTeam; // 0x1878            
            float m_flCaptureProgress; // 0x187c            
            float m_flBonusTime; // 0x1880            
            bool m_bInitialSetupDone; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            std::int32_t m_iOriginalTeam; // 0x1888            
            // m_hPreviousHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousHero;
            char m_hPreviousHero[0x4]; // 0x188c            
            // m_vecLastCreditedPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_vecLastCreditedPlayerIDs;
            char m_vecLastCreditedPlayerIDs[0x18]; // 0x1890            
            float m_flAccumulatedCaptureTime; // 0x18a8            
            std::int32_t m_iBonusCount; // 0x18ac            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nFxOutpostInitialAmbient; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Watch_Tower) == 0x18b8);
    };
};
