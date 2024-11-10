#pragma once
#include "source2sdk/client/SurvivorsAttributeType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsAttributeValue
    {
    public:
        client::SurvivorsAttributeType_t m_eType; // 0x0        
        float m_flValue; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsAttributeValue, m_eType) == 0x0);
    static_assert(offsetof(CSurvivorsAttributeValue, m_flValue) == 0x4);
    
    static_assert(sizeof(CSurvivorsAttributeValue) == 0x8);
};
