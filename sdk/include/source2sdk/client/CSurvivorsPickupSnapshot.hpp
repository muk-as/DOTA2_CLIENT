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
    // Size: 0x14
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPickupSnapshot
    {
    public:
        client::SurvivorsPickupID_t m_pickupID; // 0x0        
        int32_t m_nExperienceReward; // 0x4        
        Vector m_vOrigin; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsPickupSnapshot, m_pickupID) == 0x0);
    static_assert(offsetof(CSurvivorsPickupSnapshot, m_nExperienceReward) == 0x4);
    static_assert(offsetof(CSurvivorsPickupSnapshot, m_vOrigin) == 0x8);
    
    static_assert(sizeof(CSurvivorsPickupSnapshot) == 0x14);
};
