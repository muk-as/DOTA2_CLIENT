#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: resourcefile
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace resourcefile
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CExampleSchemaVData_Monomorphic
        {
        public:
            std::int32_t m_nExample1; // 0x_            
            std::int32_t m_nExample2; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::resourcefile::CExampleSchemaVData_Monomorphic, m_nExample1) == 0x_);
        static_assert(offsetof(source2sdk::resourcefile::CExampleSchemaVData_Monomorphic, m_nExample2) == 0x_);
        
        static_assert(sizeof(source2sdk::resourcefile::CExampleSchemaVData_Monomorphic) == 0x_);
    };
};
