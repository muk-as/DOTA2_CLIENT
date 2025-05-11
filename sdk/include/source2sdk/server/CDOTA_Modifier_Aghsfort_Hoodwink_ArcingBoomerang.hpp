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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLeftControl; // 0x17f8            
            Vector m_vRightControl; // 0x1804            
            Vector m_vTargetLoc; // 0x1810            
            Vector m_vOriginalTargetLoc; // 0x181c            
            Vector m_vSourceLoc; // 0x1828            
            float m_flBuffDuration; // 0x1834            
            source2sdk::entity2::GameTime_t m_flBuffDieTime; // 0x1838            
            bool m_bReturning; // 0x183c            
            uint8_t _pad183d[0x3]; // 0x183d
            std::int32_t m_nFramesToWait; // 0x1840            
            // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBoomerang;
            char m_hBoomerang[0x4]; // 0x1844            
            source2sdk::client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1848            
            source2sdk::client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x184c            
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1850            
            std::int32_t radius; // 0x1868            
            std::int32_t spread; // 0x186c            
            std::int32_t damage; // 0x1870            
            float min_throw_duration; // 0x1874            
            float max_throw_duration; // 0x1878            
            uint8_t _pad187c[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Aghsfort_Hoodwink_ArcingBoomerang) == 0x1888);
    };
};
