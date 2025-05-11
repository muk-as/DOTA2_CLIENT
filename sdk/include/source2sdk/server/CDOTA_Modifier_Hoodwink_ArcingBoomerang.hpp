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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_ArcingBoomerang : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vLeftControl; // 0x17f8            
            Vector m_vRightControl; // 0x1804            
            Vector m_vTargetLoc; // 0x1810            
            Vector m_vOriginalTargetLoc; // 0x181c            
            Vector m_vSourceLoc; // 0x1828            
            bool m_bGroundTargeted; // 0x1834            
            uint8_t _pad1835[0x3]; // 0x1835
            float m_flTravelDuration; // 0x1838            
            source2sdk::entity2::GameTime_t m_flBoomerangDieTime; // 0x183c            
            bool m_bReturning; // 0x1840            
            bool m_bCatchingBoomerang; // 0x1841            
            bool m_bDisjointed; // 0x1842            
            uint8_t _pad1843[0x1]; // 0x1843
            std::int32_t m_nFramesToWait; // 0x1844            
            // m_hBoomerang has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBoomerang;
            char m_hBoomerang[0x4]; // 0x1848            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x184c            
            source2sdk::client::ParticleIndex_t m_nBoomerangFXIndex; // 0x1850            
            source2sdk::client::ParticleIndex_t m_nOldBoomerangFXindex; // 0x1854            
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1858            
            float radius; // 0x1870            
            float spread; // 0x1874            
            float damage; // 0x1878            
            float mark_duration; // 0x187c            
            float min_throw_duration; // 0x1880            
            float max_throw_duration; // 0x1884            
            uint8_t _pad1888[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_ArcingBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_ArcingBoomerang) == 0x1890);
    };
};
