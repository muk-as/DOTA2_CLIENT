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
    // Size: 0x1750
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_ArenaOfBlood : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        int32_t width; // 0x16ec        
        int32_t spear_damage; // 0x16f0        
        int32_t spear_distance_from_wall; // 0x16f4        
        float spear_attack_interval; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x34]; // 0x16fc
        int32_t m_hObstruction; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        // m_vecAvoidLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecAvoidLocations;
        char m_vecAvoidLocations[0x18]; // 0x1738        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_ArenaOfBlood) == 0x1750);
};
