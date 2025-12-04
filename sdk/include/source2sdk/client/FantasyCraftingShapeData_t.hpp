#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFantasyShapeBehavior.hpp"
#include "source2sdk/client/FantasyGemShape_t.hpp"

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
        struct FantasyCraftingShapeData_t
        {
        public:
            // metadata: MPropertyDescription "Unique identifier for the Shape"
            source2sdk::client::FantasyGemShape_t m_unShapeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Maps the shape to it's code behavior."
            source2sdk::client::EFantasyShapeBehavior m_eShapeBehavior; // 0x_            
            // metadata: MPropertyDescription "Localization token for the name of the shape"
            CUtlString m_sLocName; // 0x_            
            // metadata: MPropertyDescription "Localization token for explaining what the shape does"
            CUtlString m_sLocExplanation; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyCraftingShapeData_t, m_unShapeID) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingShapeData_t, m_eShapeBehavior) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingShapeData_t, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::FantasyCraftingShapeData_t, m_sLocExplanation) == 0x_);
        
        static_assert(sizeof(source2sdk::client::FantasyCraftingShapeData_t) == 0x_);
    };
};
