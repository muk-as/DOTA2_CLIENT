#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicNPCCounter.hpp"

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
        class CLogicNPCCounterAABB : public source2sdk::server::CLogicNPCCounter
        {
        public:
            Vector m_vDistanceOuterMins; // 0x_            
            Vector m_vDistanceOuterMaxs; // 0x_            
            Vector m_vOuterMins; // 0x_            
            Vector m_vOuterMaxs; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNPCCounterAABB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNPCCounterAABB) == 0x_);
    };
};
