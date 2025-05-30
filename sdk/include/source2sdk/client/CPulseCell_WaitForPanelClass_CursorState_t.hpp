#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_WaitForPanelClass_CursorState_t
        {
        public:
            panorama_CPanelPtr m_hPanel; // 0x0            
            CGlobalSymbol m_Class; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CPulseCell_WaitForPanelClass_CursorState_t, m_hPanel) == 0x0);
        static_assert(offsetof(source2sdk::client::CPulseCell_WaitForPanelClass_CursorState_t, m_Class) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CPulseCell_WaitForPanelClass_CursorState_t) == 0x10);
    };
};
