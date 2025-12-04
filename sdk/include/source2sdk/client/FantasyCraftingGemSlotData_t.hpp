#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyGemSlot_t.hpp"
#include "source2sdk/client/Fantasy_Gem_Type.hpp"

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
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyCraftingGemSlotData_t
        {
        public:
            // metadata: MPropertyDescription "Gem Slot"
            source2sdk::client::FantasyGemSlot_t m_unGemSlot; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Gem Type"
            source2sdk::client::Fantasy_Gem_Type m_eGemType; // 0x_            
            // metadata: MPropertyDescription "Minimum tablet level to unlock this type of gem, -1 or 0 for always unlocked"
            std::int32_t m_nRequiredTabletLevel; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemSlotData_t, m_unGemSlot) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemSlotData_t, m_eGemType) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingGemSlotData_t, m_nRequiredTabletLevel) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingGemSlotData_t) == 0x_);
    };
};
