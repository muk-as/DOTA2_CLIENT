#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcefile/CExampleSchemaVData_PolymorphicBase.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CExampleSchemaVData_PolymorphicDerivedA : public source2sdk::resourcefile::CExampleSchemaVData_PolymorphicBase
        {
        public:
            std::int32_t m_nDerivedA; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CExampleSchemaVData_PolymorphicDerivedA because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::resourcefile::CExampleSchemaVData_PolymorphicDerivedA) == 0x_);
    };
};
