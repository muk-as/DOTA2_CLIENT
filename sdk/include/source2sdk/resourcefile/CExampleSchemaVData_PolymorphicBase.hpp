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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CExampleSchemaVData_PolymorphicBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nBase; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::resourcefile::CExampleSchemaVData_PolymorphicBase, m_nBase) == 0x_);
        
        static_assert(sizeof(source2sdk::resourcefile::CExampleSchemaVData_PolymorphicBase) == 0x_);
    };
};
