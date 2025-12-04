#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EArtyOrderFlag.hpp"

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
        #pragma pack(push, 1)
        struct ArtyEnemyOrder_t
        {
        public:
            float m_flDuration; // 0x_            
            source2sdk::client::EArtyOrderFlag m_unOrders; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyEnemyOrder_t, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyEnemyOrder_t, m_unOrders) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyEnemyOrder_t) == 0x_);
    };
};
