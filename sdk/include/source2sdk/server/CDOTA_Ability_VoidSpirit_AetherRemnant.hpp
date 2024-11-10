#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_AetherRemnant : public server::CDOTABaseAbility
    {
    public:
        int32_t start_radius; // 0x5c8        
        int32_t end_radius; // 0x5cc        
        int32_t remnant_watch_distance; // 0x5d0        
        int32_t projectile_speed; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d8[0x8]; // 0x5d8
        Vector m_vDashPosition; // 0x5e0        
        Vector m_vFacePosition; // 0x5ec        
        Vector m_vEndpoint; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_AetherRemnant because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_AetherRemnant) == 0x608);
};
