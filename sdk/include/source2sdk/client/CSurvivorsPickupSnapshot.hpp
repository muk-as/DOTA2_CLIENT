#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SurvivorsPickupID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPickupSnapshot
        {
        public:
            source2sdk::client::SurvivorsPickupID_t m_pickupID; // 0x_            
            std::int32_t m_nExperienceReward; // 0x_            
            Vector m_vOrigin; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupSnapshot, m_pickupID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupSnapshot, m_nExperienceReward) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPickupSnapshot, m_vOrigin) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPickupSnapshot) == 0x_);
    };
};
