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
        // Size: 0x18c0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_TwistedChakram : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vControlOne; // 0x17f8            
            Vector m_vControlTwo; // 0x1804            
            Vector m_vControlThree; // 0x1810            
            Vector m_vControlFour; // 0x181c            
            Vector m_vTargetLoc; // 0x1828            
            Vector m_vOriginalTargetLoc; // 0x1834            
            Vector m_vSourceLoc; // 0x1840            
            Vector m_vMidPoint; // 0x184c            
            Vector m_vEndPoint; // 0x1858            
            std::int32_t m_nCurrentLeg; // 0x1864            
            float m_flTravelDuration; // 0x1868            
            source2sdk::entity2::GameTime_t m_flBoomerangDieTime; // 0x186c            
            bool m_bReturning; // 0x1870            
            uint8_t _pad1871[0x3]; // 0x1871
            std::int32_t m_nFramesToWait; // 0x1874            
            // m_hChakram has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChakram;
            char m_hChakram[0x4]; // 0x1878            
            source2sdk::client::ParticleIndex_t m_nChakramFXIndex; // 0x187c            
            source2sdk::client::ParticleIndex_t m_nOldChakramFXindex; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1888            
            float radius; // 0x18a0            
            float spread; // 0x18a4            
            float damage; // 0x18a8            
            float pass_slow_duration; // 0x18ac            
            float min_throw_duration; // 0x18b0            
            float max_throw_duration; // 0x18b4            
            uint8_t _pad18b8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_TwistedChakram because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_TwistedChakram) == 0x18c0);
    };
};
