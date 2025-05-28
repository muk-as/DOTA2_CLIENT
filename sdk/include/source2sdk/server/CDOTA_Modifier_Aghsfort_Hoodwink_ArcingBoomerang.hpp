#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1920
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLeftControl; // 0x1888            
            Vector m_vRightControl; // 0x1894            
            Vector m_vTargetLoc; // 0x18a0            
            Vector m_vOriginalTargetLoc; // 0x18ac            
            Vector m_vSourceLoc; // 0x18b8            
            float m_flBuffDuration; // 0x18c4            
            source2sdk::entity2::GameTime_t m_flBuffDieTime; // 0x18c8            
            bool m_bReturning; // 0x18cc            
            uint8_t _pad18cd[0x3]; // 0x18cd
            std::int32_t m_nFramesToWait; // 0x18d0            
            // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBoomerang;
            char m_hBoomerang[0x4]; // 0x18d4            
            source2sdk::client::ParticleIndex_t m_nBoomerangFXIndex; // 0x18d8            
            source2sdk::client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x18dc            
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x18e0            
            std::int32_t radius; // 0x18f8            
            std::int32_t spread; // 0x18fc            
            std::int32_t damage; // 0x1900            
            float min_throw_duration; // 0x1904            
            float max_throw_duration; // 0x1908            
            uint8_t _pad190c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang) == 0x1920);
    };
};
