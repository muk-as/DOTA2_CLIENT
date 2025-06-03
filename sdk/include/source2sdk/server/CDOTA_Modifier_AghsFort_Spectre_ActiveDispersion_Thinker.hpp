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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDamage; // 0x1878            
            float m_fLastRadius; // 0x187c            
            float m_fCurRadius; // 0x1880            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1884            
            bool m_bContracting; // 0x1888            
            uint8_t _pad1889[0x7]; // 0x1889
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a8            
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x18b0            
            std::int32_t speed; // 0x18c8            
            std::int32_t radius; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x18d0);
    };
};
