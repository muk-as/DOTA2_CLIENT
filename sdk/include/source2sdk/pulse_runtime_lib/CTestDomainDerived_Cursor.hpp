#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseExecCursor.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseInternal_IsCursor
    #pragma pack(push, 1)
    class CTestDomainDerived_Cursor : public pulse_runtime_lib::CPulseExecCursor
    {
    public:
        int32_t m_nCursorValueA; // 0xa8        
        int32_t m_nCursorValueB; // 0xac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTestDomainDerived_Cursor because it is not a standard-layout class
    static_assert(sizeof(CTestDomainDerived_Cursor) == 0xb0);
};
