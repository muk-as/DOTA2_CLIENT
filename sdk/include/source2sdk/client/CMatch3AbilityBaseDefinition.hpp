#pragma once
#include "source2sdk/client/CMatch3AbilityParamDefinition.hpp"
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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMatch3AbilityBaseDefinition
    {
    public:
        CUtlString m_sLocName; // 0x0        
        CUtlString m_sLocDescription; // 0x8        
        CPanoramaImageName m_sImage; // 0x10        
        // m_vecParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CMatch3AbilityParamDefinition> m_vecParams;
        char m_vecParams[0x18]; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMatch3AbilityBaseDefinition, m_sLocName) == 0x0);
    static_assert(offsetof(CMatch3AbilityBaseDefinition, m_sLocDescription) == 0x8);
    static_assert(offsetof(CMatch3AbilityBaseDefinition, m_sImage) == 0x10);
    static_assert(offsetof(CMatch3AbilityBaseDefinition, m_vecParams) == 0x20);
    
    static_assert(sizeof(CMatch3AbilityBaseDefinition) == 0x38);
};
