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
    // Size: 0x360
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsUnit_Snotty : public client::CSurvivorsEnemy
    {
    public:
        float m_flRotationSpeedDeg; // 0x338        
        float m_flRotationDist; // 0x33c        
        float m_flDegCur; // 0x340        
        float m_flLastPickupRadius; // 0x344        
        [[maybe_unused]] std::uint8_t pad_0x348[0x10]; // 0x348
        client::SurvivorsPowerUpID_t m_nPowerUpID; // 0x358        
        [[maybe_unused]] std::uint8_t pad_0x35c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsUnit_Snotty because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsUnit_Snotty) == 0x360);
};
