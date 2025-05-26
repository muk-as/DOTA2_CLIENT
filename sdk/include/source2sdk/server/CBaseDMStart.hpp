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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseDMStart : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_Master; // 0x4e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDMStart because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseDMStart) == 0x4e8);
    };
};
