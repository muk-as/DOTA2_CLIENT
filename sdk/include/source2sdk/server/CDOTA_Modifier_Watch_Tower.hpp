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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Watch_Tower : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nTeamNumber; // 0x_            
            std::int32_t m_iCapturingTeam; // 0x_            
            float m_flCaptureProgress; // 0x_            
            float m_flBonusTime; // 0x_            
            bool m_bInitialSetupDone; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iOriginalTeam; // 0x_            
            // m_hPreviousHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviousHero;
            char m_hPreviousHero[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecLastCreditedPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_vecLastCreditedPlayerIDs;
            char m_vecLastCreditedPlayerIDs[0x_]; // 0x_            
            float m_flAccumulatedCaptureTime; // 0x_            
            std::int32_t m_iBonusCount; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFxOutpostAmbient; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFxOutpostInitialAmbient; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Watch_Tower) == 0x_);
    };
};
