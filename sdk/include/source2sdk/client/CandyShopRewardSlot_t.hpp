#pragma once
#include "source2sdk/client/CandyShopRewardOption_t.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct CandyShopRewardSlot_t
    {
    public:
        // metadata: MPropertyDescription "A CSS class to assign to this slot"
        CUtlString m_sSlotClass; // 0x0        
        // m_vecSlotRewardOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CandyShopRewardOption_t> m_vecSlotRewardOptions;
        char m_vecSlotRewardOptions[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CandyShopRewardSlot_t, m_sSlotClass) == 0x0);
    static_assert(offsetof(CandyShopRewardSlot_t, m_vecSlotRewardOptions) == 0x8);
    
    static_assert(sizeof(CandyShopRewardSlot_t) == 0x20);
};
