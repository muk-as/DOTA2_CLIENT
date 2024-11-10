#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_ArenaOfBlood : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        int32_t width; // 0x170c        
        int32_t spear_damage; // 0x1710        
        int32_t spear_distance_from_wall; // 0x1714        
        float spear_attack_interval; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x34]; // 0x171c
        int32_t m_hObstruction; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4]; // 0x1754
        // m_vecAvoidLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecAvoidLocations;
        char m_vecAvoidLocations[0x18]; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_ArenaOfBlood) == 0x1770);
};
