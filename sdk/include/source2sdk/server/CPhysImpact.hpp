#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysImpact : public source2sdk::server::CPointEntity
        {
        public:
            float m_damage; // 0x_            
            float m_distance; // 0x_            
            CUtlSymbolLarge m_directionEntityName; // 0x_            
            
            // Datamap fields:
            // void CPhysImpactPointAtEntity; // 0x_
            // void InputImpact; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysImpact because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysImpact) == 0x_);
    };
};
