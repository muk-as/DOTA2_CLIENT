#pragma once
#include "source2sdk/client/CDestructiblePartRuntimeData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDestructiblePartRuntimeDataVector
    {
    public:
        // m_DestructiblePartsRuntimeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDestructiblePartRuntimeData> m_DestructiblePartsRuntimeData;
        char m_DestructiblePartsRuntimeData[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDestructiblePartRuntimeDataVector, m_DestructiblePartsRuntimeData) == 0x0);
    
    static_assert(sizeof(CDestructiblePartRuntimeDataVector) == 0x18);
};
