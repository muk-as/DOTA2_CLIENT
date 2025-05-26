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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Ascension_PlasmaField_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fLastRadius; // 0x1878            
            float m_fCurRadius; // 0x187c            
            source2sdk::entity2::GameTime_t m_fLastThink; // 0x1880            
            bool m_bWindingUp; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x18a0            
            uint8_t _pad18a4[0x4]; // 0x18a4
            // m_EntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_EntitiesHit;
            char m_EntitiesHit[0x18]; // 0x18a8            
            std::int32_t speed; // 0x18c0            
            std::int32_t radius; // 0x18c4            
            std::int32_t damage_min; // 0x18c8            
            std::int32_t damage_max; // 0x18cc            
            std::int32_t slow_min; // 0x18d0            
            std::int32_t slow_max; // 0x18d4            
            float slow_duration; // 0x18d8            
            float windup_time; // 0x18dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Ascension_PlasmaField_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Ascension_PlasmaField_Thinker) == 0x18e0);
    };
};
