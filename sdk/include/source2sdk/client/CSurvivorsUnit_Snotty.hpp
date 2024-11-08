#pragma once
#include "source2sdk/client/CSurvivorsEnemy.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"
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
    // Size: 0x350
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsUnit_Snotty : public client::CSurvivorsEnemy
    {
    public:
        float m_flRotationSpeedDeg; // 0x328        
        float m_flRotationDist; // 0x32c        
        float m_flDegCur; // 0x330        
        float m_flLastPickupRadius; // 0x334        
        [[maybe_unused]] std::uint8_t pad_0x338[0x10]; // 0x338
        client::SurvivorsPowerUpID_t m_nPowerUpID; // 0x348        
        [[maybe_unused]] std::uint8_t pad_0x34c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsUnit_Snotty because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsUnit_Snotty) == 0x350);
};
