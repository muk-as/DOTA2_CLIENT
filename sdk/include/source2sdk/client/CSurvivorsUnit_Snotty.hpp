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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsUnit_Snotty : public source2sdk::client::CSurvivorsEnemy
        {
        public:
            float m_flRotationSpeedDeg; // 0x_            
            float m_flRotationDist; // 0x_            
            float m_flDegCur; // 0x_            
            float m_flLastPickupRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::SurvivorsPowerUpID_t m_nPowerUpID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsUnit_Snotty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsUnit_Snotty) == 0x_);
    };
};
