#pragma once
#include "source2sdk/client/EArtyOrderFlag.hpp"
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
    #pragma pack(push, 1)
    struct ArtyEnemyOrder_t
    {
    public:
        float m_flDuration; // 0x0        
        client::EArtyOrderFlag m_unOrders; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ArtyEnemyOrder_t, m_flDuration) == 0x0);
    static_assert(offsetof(ArtyEnemyOrder_t, m_unOrders) == 0x4);
    
    static_assert(sizeof(ArtyEnemyOrder_t) == 0x8);
};
