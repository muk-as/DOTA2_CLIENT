#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDamage; // 0x1888            
            float m_fLastRadius; // 0x188c            
            float m_fCurRadius; // 0x1890            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1894            
            bool m_bContracting; // 0x1898            
            uint8_t _pad1899[0x7]; // 0x1899
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x18a0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x18c0            
            std::int32_t speed; // 0x18d8            
            std::int32_t radius; // 0x18dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x18e0);
    };
};
