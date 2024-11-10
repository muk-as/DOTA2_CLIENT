#pragma once
#include "source2sdk/client/CDestructiblePartsSystemData_PartDataProxy.hpp"
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
    class CDestructiblePartsSystemData_PartDataProxyVector
    {
    public:
        // m_Proxies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDestructiblePartsSystemData_PartDataProxy> m_Proxies;
        char m_Proxies[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDestructiblePartsSystemData_PartDataProxyVector, m_Proxies) == 0x0);
    
    static_assert(sizeof(CDestructiblePartsSystemData_PartDataProxyVector) == 0x18);
};
