#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDestructiblePartsSystemData_PartData;
};

namespace source2sdk::client
{
    class CDestructiblePartsSystemData_PartRuntimeData;
};

namespace source2sdk::client
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
    class CDestructiblePartsSystemData_PartDataProxy
    {
    public:
        client::CDestructiblePartsSystemData_PartData* m_pModelAndDefaultRuntimeData; // 0x0        
        client::CDestructiblePartsSystemData_PartRuntimeData* m_pOverrideRuntimeData; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDestructiblePartsSystemData_PartDataProxy, m_pModelAndDefaultRuntimeData) == 0x0);
    static_assert(offsetof(CDestructiblePartsSystemData_PartDataProxy, m_pOverrideRuntimeData) == 0x8);
    
    static_assert(sizeof(CDestructiblePartsSystemData_PartDataProxy) == 0x10);
};
