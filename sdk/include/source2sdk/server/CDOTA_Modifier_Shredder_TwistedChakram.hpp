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
        // Size: 0x1960
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_TwistedChakram : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vControlOne; // 0x1888            
            Vector m_vControlTwo; // 0x1894            
            Vector m_vControlThree; // 0x18a0            
            Vector m_vControlFour; // 0x18ac            
            Vector m_vTargetLoc; // 0x18b8            
            Vector m_vOriginalTargetLoc; // 0x18c4            
            Vector m_vSourceLoc; // 0x18d0            
            Vector m_vMidPoint; // 0x18dc            
            Vector m_vEndPoint; // 0x18e8            
            std::int32_t m_nCurrentLeg; // 0x18f4            
            float m_flTravelDuration; // 0x18f8            
            source2sdk::entity2::GameTime_t m_flBoomerangDieTime; // 0x18fc            
            bool m_bReturning; // 0x1900            
            uint8_t _pad1901[0x3]; // 0x1901
            std::int32_t m_nFramesToWait; // 0x1904            
            // m_hChakram has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChakram;
            char m_hChakram[0x4]; // 0x1908            
            source2sdk::client::ParticleIndex_t m_nChakramFXIndex; // 0x190c            
            source2sdk::client::ParticleIndex_t m_nOldChakramFXindex; // 0x1910            
            uint8_t _pad1914[0x4]; // 0x1914
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0x1918            
            float radius; // 0x1930            
            float spread; // 0x1934            
            float damage; // 0x1938            
            float pass_slow_duration; // 0x193c            
            float min_throw_duration; // 0x1940            
            float max_throw_duration; // 0x1944            
            uint8_t _pad1948[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_TwistedChakram because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shredder_TwistedChakram) == 0x1960);
    };
};
