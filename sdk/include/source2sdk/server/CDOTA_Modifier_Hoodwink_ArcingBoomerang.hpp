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
        class CDOTA_Modifier_Hoodwink_ArcingBoomerang : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLeftControl; // 0x1878            
            Vector m_vRightControl; // 0x1884            
            Vector m_vTargetLoc; // 0x1890            
            Vector m_vOriginalTargetLoc; // 0x189c            
            Vector m_vSourceLoc; // 0x18a8            
            bool m_bGroundTargeted; // 0x18b4            
            uint8_t _pad18b5[0x3]; // 0x18b5
            float m_flTravelDuration; // 0x18b8            
            source2sdk::entity2::GameTime_t m_flBoomerangDieTime; // 0x18bc            
            bool m_bReturning; // 0x18c0            
            bool m_bCatchingBoomerang; // 0x18c1            
            bool m_bDisjointed; // 0x18c2            
            uint8_t _pad18c3[0x1]; // 0x18c3
            std::int32_t m_nFramesToWait; // 0x18c4            
            // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBoomerang;
            char m_hBoomerang[0x4]; // 0x18c8            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x18cc            
            source2sdk::client::ParticleIndex_t m_nBoomerangFXIndex; // 0x18d0            
            source2sdk::client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x18d4            
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x18d8            
            float radius; // 0x18f0            
            float spread; // 0x18f4            
            float damage; // 0x18f8            
            float mark_duration; // 0x18fc            
            float min_throw_duration; // 0x1900            
            float max_throw_duration; // 0x1904            
            uint8_t _pad1908[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_ArcingBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_ArcingBoomerang) == 0x1920);
    };
};
