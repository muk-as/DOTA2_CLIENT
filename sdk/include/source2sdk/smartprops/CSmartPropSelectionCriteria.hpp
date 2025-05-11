#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataBase
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataAnonymousNode
        #pragma pack(push, 1)
        class CSmartPropSelectionCriteria
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MVDataEnableKey
            CSmartPropAttributeBool m_bEnabled; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::smartprops::CSmartPropSelectionCriteria, m_bEnabled) == 0x8);
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropSelectionCriteria) == 0x48);
    };
};
