#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicGameEvent : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszEventName; // 0x4e0            
            
            // Datamap fields:
            // void InputFireEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicGameEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicGameEvent) == 0x4e8);
    };
};
