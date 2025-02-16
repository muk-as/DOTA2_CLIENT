#pragma once
#include "source2sdk/client/SurvivorsPickupID_t.hpp"
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
    // Size: 0xc
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSurvivorsLootTable__CLootEntry
    {
    public:
        client::SurvivorsPickupID_t m_unPickupID; // 0x0        
        int32_t m_nMinAmount; // 0x4        
        int32_t m_nMaxAmount; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsLootTable__CLootEntry, m_unPickupID) == 0x0);
    static_assert(offsetof(CSurvivorsLootTable__CLootEntry, m_nMinAmount) == 0x4);
    static_assert(offsetof(CSurvivorsLootTable__CLootEntry, m_nMaxAmount) == 0x8);
    
    static_assert(sizeof(CSurvivorsLootTable__CLootEntry) == 0xc);
};
