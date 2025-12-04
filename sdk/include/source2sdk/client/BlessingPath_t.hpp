#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // static metadata: MVDataOutlinerIconExpr "'tools/images/common/icon_edge_generic.png'"
        // static metadata: MVDataAnonymousNode
        #pragma pack(push, 1)
        struct BlessingPath_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessings/*)"
            CUtlString Node1; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessings/*)"
            CUtlString Node2; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "This edge only allows unlocks in the direction of the arrow."
            bool bOneWay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeRange "-1 1"
            // metadata: MPropertyDescription "0 = line, + = curve to the 'right' from node 1 to node 2, - = curve left"
            float flCircleInvRadius; // 0x_            
            // metadata: MPropertyDescription "path particle color"
            Color color; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::BlessingPath_t, Node1) == 0x_);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, Node2) == 0x_);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, bOneWay) == 0x_);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, flCircleInvRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, color) == 0x_);
        
        static_assert(sizeof(source2sdk::client::BlessingPath_t) == 0x_);
    };
};
