#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct MovementGaitId_t
        {
        public:
            CGlobalSymbol m_sId; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::MovementGaitId_t, m_sId) == 0x0);
        
        static_assert(sizeof(source2sdk::modellib::MovementGaitId_t) == 0x8);
    };
};
