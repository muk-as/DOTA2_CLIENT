#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1780
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_PartyHat : public client::CDOTA_Buff
    {
    public:
        int32_t controlled_unit_search_radius; // 0x1708        
        bool child_modifier; // 0x170c        
        [[maybe_unused]] std::uint8_t pad_0x170d[0x3]; // 0x170d
        // m_vecParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_vecParticles;
        char m_vecParticles[0x18]; // 0x1710        
        // m_vecHatColors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vecHatColors;
        char m_vecHatColors[0x18]; // 0x1728        
        uint32_t m_unVersion; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4]; // 0x1744
        // m_vecNearbyUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecNearbyUnits;
        char m_vecNearbyUnits[0x18]; // 0x1748        
        // m_vecUnitIdleStartTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_vecUnitIdleStartTimes;
        char m_vecUnitIdleStartTimes[0x18]; // 0x1760        
        bool m_bPlayEndcapOnNext; // 0x1778        
        [[maybe_unused]] std::uint8_t pad_0x1779[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_PartyHat because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_PartyHat) == 0x1780);
};
