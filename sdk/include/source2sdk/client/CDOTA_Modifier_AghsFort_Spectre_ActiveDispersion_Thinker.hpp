#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1850
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDamage; // 0x17f8            
            float m_fLastRadius; // 0x17fc            
            float m_fCurRadius; // 0x1800            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1804            
            bool m_bContracting; // 0x1808            
            uint8_t _pad1809[0x7]; // 0x1809
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x1810            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1828            
            uint8_t _pad182c[0x4]; // 0x182c
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x1830            
            std::int32_t speed; // 0x1848            
            std::int32_t radius; // 0x184c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Spectre_ActiveDispersion_Thinker) == 0x1850);
    };
};
