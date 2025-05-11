#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemy.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x360
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsUnit_Snotty : public source2sdk::client::CSurvivorsEnemy
        {
        public:
            float m_flRotationSpeedDeg; // 0x338            
            float m_flRotationDist; // 0x33c            
            float m_flDegCur; // 0x340            
            float m_flLastPickupRadius; // 0x344            
            uint8_t _pad0348[0x10]; // 0x348
            source2sdk::client::SurvivorsPowerUpID_t m_nPowerUpID; // 0x358            
            uint8_t _pad035c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsUnit_Snotty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsUnit_Snotty) == 0x360);
    };
};
