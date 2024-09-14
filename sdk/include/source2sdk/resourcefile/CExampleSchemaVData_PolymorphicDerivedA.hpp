#pragma once
#include "source2sdk/resourcefile/CExampleSchemaVData_PolymorphicBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: resourcefile
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::resourcefile
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
    class CExampleSchemaVData_PolymorphicDerivedA : public resourcefile::CExampleSchemaVData_PolymorphicBase
    {
    public:
        int32_t m_nDerivedA; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CExampleSchemaVData_PolymorphicDerivedA because it is not a standard-layout class
    static_assert(sizeof(CExampleSchemaVData_PolymorphicDerivedA) == 0x18);
};
