#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Creature.hpp"
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
    // Size: 0x1a00
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Trap_Ward : public server::CDOTA_BaseNPC_Creature
    {
    public:
        CUtlSymbolLarge m_iszDefaultAnim; // 0x19e8        
        Vector m_vTrapTargetLocal; // 0x19f0        
        [[maybe_unused]] std::uint8_t pad_0x19fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Trap_Ward because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Trap_Ward) == 0x1a00);
};
