#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: resourcefile
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::resourcefile
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CExampleSchemaVData_Monomorphic
    {
    public:
        int32_t m_nExample1; // 0x0        
        int32_t m_nExample2; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CExampleSchemaVData_Monomorphic, m_nExample1) == 0x0);
    static_assert(offsetof(CExampleSchemaVData_Monomorphic, m_nExample2) == 0x4);
    
    static_assert(sizeof(CExampleSchemaVData_Monomorphic) == 0x8);
};
