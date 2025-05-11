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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CExampleSchemaVData_PolymorphicDerivedB : public source2sdk::resourcefile::CExampleSchemaVData_PolymorphicBase
        {
        public:
            std::int32_t m_nDerivedB; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CExampleSchemaVData_PolymorphicDerivedB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::resourcefile::CExampleSchemaVData_PolymorphicDerivedB) == 0x18);
    };
};
