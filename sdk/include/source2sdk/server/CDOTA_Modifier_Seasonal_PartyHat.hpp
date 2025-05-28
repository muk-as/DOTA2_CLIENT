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
        // Size: 0x1900
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_PartyHat : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t controlled_unit_search_radius; // 0x1888            
            bool child_modifier; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            // m_vecParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecParticles;
            char m_vecParticles[0x18]; // 0x1890            
            // m_vecHatColors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecHatColors;
            char m_vecHatColors[0x18]; // 0x18a8            
            std::uint32_t m_unVersion; // 0x18c0            
            uint8_t _pad18c4[0x4]; // 0x18c4
            // m_vecNearbyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecNearbyUnits;
            char m_vecNearbyUnits[0x18]; // 0x18c8            
            // m_vecUnitIdleStartTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_vecUnitIdleStartTimes;
            char m_vecUnitIdleStartTimes[0x18]; // 0x18e0            
            bool m_bPlayEndcapOnNext; // 0x18f8            
            uint8_t _pad18f9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_PartyHat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_PartyHat) == 0x1900);
    };
};
