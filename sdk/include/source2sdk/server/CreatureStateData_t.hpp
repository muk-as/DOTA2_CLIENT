#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CreatureStateData_t
        {
        public:
            char* pszName; // 0x_            
            float flAggression; // 0x_            
            float flAvoidance; // 0x_            
            float flSupport; // 0x_            
            float flRoamDistance; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CreatureStateData_t, pszName) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureStateData_t, flAggression) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureStateData_t, flAvoidance) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureStateData_t, flSupport) == 0x_);
        static_assert(offsetof(source2sdk::server::CreatureStateData_t, flRoamDistance) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CreatureStateData_t) == 0x_);
    };
};
