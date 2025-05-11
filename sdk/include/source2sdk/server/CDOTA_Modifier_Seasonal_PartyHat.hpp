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
        // Size: 0x1870
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_PartyHat : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t controlled_unit_search_radius; // 0x17f8            
            bool child_modifier; // 0x17fc            
            uint8_t _pad17fd[0x3]; // 0x17fd
            // m_vecParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecParticles;
            char m_vecParticles[0x18]; // 0x1800            
            // m_vecHatColors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecHatColors;
            char m_vecHatColors[0x18]; // 0x1818            
            std::uint32_t m_unVersion; // 0x1830            
            uint8_t _pad1834[0x4]; // 0x1834
            // m_vecNearbyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecNearbyUnits;
            char m_vecNearbyUnits[0x18]; // 0x1838            
            // m_vecUnitIdleStartTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_vecUnitIdleStartTimes;
            char m_vecUnitIdleStartTimes[0x18]; // 0x1850            
            bool m_bPlayEndcapOnNext; // 0x1868            
            uint8_t _pad1869[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_PartyHat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_PartyHat) == 0x1870);
    };
};
