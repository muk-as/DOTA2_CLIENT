#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BlessingID_t.hpp"

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
        // static metadata: MVDataOutlinerIconExpr "'tools/images/common/icon_node_generic.png'"
        #pragma pack(push, 1)
        struct Blessing_t
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "m_nNextBlessingID"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::BlessingID_t nID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
            CUtlString BlessingType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "fragment cost"
            std::int32_t nCost; // 0x_            
            // metadata: MPropertyDescription "number of grants of action to give"
            std::int32_t nValue; // 0x_            
            // metadata: MPropertyDescription "can you unlock this node without owning any connected nodes?"
            bool bStartNode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D vecPos; // 0x_            
            // metadata: MPropertyAttributeRange "0 10"
            float flSize; // 0x_            
            // metadata: MPropertyDescription "node color"
            Color color; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::Blessing_t, nID) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, BlessingType) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, nCost) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, nValue) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, bStartNode) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, vecPos) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, flSize) == 0x_);
        static_assert(offsetof(source2sdk::client::Blessing_t, color) == 0x_);
        
        static_assert(sizeof(source2sdk::client::Blessing_t) == 0x_);
    };
};
