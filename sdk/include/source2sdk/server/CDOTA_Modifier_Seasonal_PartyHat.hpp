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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_PartyHat : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t controlled_unit_search_radius; // 0x_            
            bool child_modifier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecParticles;
            char m_vecParticles[0x_]; // 0x_            
            // m_vecHatColors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecHatColors;
            char m_vecHatColors[0x_]; // 0x_            
            std::uint32_t m_unVersion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecNearbyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecNearbyUnits;
            char m_vecNearbyUnits[0x_]; // 0x_            
            // m_vecUnitIdleStartTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_vecUnitIdleStartTimes;
            char m_vecUnitIdleStartTimes[0x_]; // 0x_            
            bool m_bPlayEndcapOnNext; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_PartyHat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_PartyHat) == 0x_);
    };
};
