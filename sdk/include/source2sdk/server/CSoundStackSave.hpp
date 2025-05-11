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
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundStackSave : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszStackName; // 0x4d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundStackSave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundStackSave) == 0x4e0);
    };
};
