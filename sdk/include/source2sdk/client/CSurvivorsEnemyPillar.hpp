#pragma once
#include "source2sdk/client/CSurvivorsEnemy.hpp"
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
    // Standard-layout class: false
    // Size: 0x330
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEnemyPillar : public client::CSurvivorsEnemy
    {
    public:
        bool m_bDestroyed; // 0x328        
        [[maybe_unused]] std::uint8_t pad_0x329[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyPillar because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyPillar) == 0x330);
};
