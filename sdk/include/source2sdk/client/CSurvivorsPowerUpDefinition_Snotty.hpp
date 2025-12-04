#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUpDefinition_AreaAttack_Circle.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPowerUpDefinition_Snotty : public source2sdk::client::CSurvivorsPowerUpDefinition_AreaAttack_Circle
        {
        public:
            float m_flRotationSpeedDeg; // 0x_            
            float m_flRotationDist; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_Snotty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUpDefinition_Snotty) == 0x_);
    };
};
