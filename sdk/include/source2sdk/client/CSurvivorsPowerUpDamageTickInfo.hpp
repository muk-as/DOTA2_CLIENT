#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x40
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDamageTickInfo
    {
    public:
        Vector vOrigin; // 0x0        
        Vector vFacing; // 0xc        
        float flTimeLeft; // 0x18        
        float flMagicalDamage; // 0x1c        
        float flPhysicalDamage; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        // vDirections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> vDirections;
        char vDirections[0x18]; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsPowerUpDamageTickInfo, vOrigin) == 0x0);
    static_assert(offsetof(CSurvivorsPowerUpDamageTickInfo, vFacing) == 0xc);
    static_assert(offsetof(CSurvivorsPowerUpDamageTickInfo, flTimeLeft) == 0x18);
    static_assert(offsetof(CSurvivorsPowerUpDamageTickInfo, flMagicalDamage) == 0x1c);
    static_assert(offsetof(CSurvivorsPowerUpDamageTickInfo, flPhysicalDamage) == 0x20);
    static_assert(offsetof(CSurvivorsPowerUpDamageTickInfo, vDirections) == 0x28);
    
    static_assert(sizeof(CSurvivorsPowerUpDamageTickInfo) == 0x40);
};
