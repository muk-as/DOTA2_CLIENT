#pragma once
#include "source2sdk/client/FantasyGemSlot_t.hpp"
#include "source2sdk/client/Fantasy_Gem_Type.hpp"
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
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct FantasyCraftingGemSlotData_t
    {
    public:
        // metadata: MPropertyDescription "Gem Slot"
        client::FantasyGemSlot_t m_unGemSlot; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        // metadata: MPropertyDescription "Gem Type"
        client::Fantasy_Gem_Type m_eGemType; // 0x4        
        // metadata: MPropertyDescription "Minimum tablet level to unlock this type of gem, -1 or 0 for always unlocked"
        int32_t m_nRequiredTabletLevel; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FantasyCraftingGemSlotData_t, m_unGemSlot) == 0x0);
    static_assert(offsetof(FantasyCraftingGemSlotData_t, m_eGemType) == 0x4);
    static_assert(offsetof(FantasyCraftingGemSlotData_t, m_nRequiredTabletLevel) == 0x8);
    
    static_assert(sizeof(FantasyCraftingGemSlotData_t) == 0xc);
};
