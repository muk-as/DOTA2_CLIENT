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
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropChoiceSelectionMode_t)"
        #pragma pack(push, 1)
        class CSmartPropAttributeChoiceSelectionMode
        {
        public:
            uint8_t _pad0000[0x40];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropAttributeChoiceSelectionMode) == 0x40);
    };
};
