#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CandyShopRewardOption_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct CandyShopRewardSlot_t
        {
        public:
            // metadata: MPropertyDescription "A CSS class to assign to this slot"
            CUtlString m_sSlotClass; // 0x_            
            // m_vecSlotRewardOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CandyShopRewardOption_t> m_vecSlotRewardOptions;
            char m_vecSlotRewardOptions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopRewardSlot_t, m_sSlotClass) == 0x_);
        static_assert(offsetof(source2sdk::client::CandyShopRewardSlot_t, m_vecSlotRewardOptions) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CandyShopRewardSlot_t) == 0x_);
    };
};
