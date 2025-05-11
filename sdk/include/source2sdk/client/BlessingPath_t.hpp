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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOutlinerIconExpr "'tools/images/common/icon_edge_generic.png'"
        // static metadata: MVDataAnonymousNode
        #pragma pack(push, 1)
        struct BlessingPath_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessings/*)"
            CUtlString Node1; // 0x8            
            uint8_t _pad0010[0x8]; // 0x10
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessings/*)"
            CUtlString Node2; // 0x18            
            uint8_t _pad0020[0x4]; // 0x20
            // metadata: MPropertyDescription "This edge only allows unlocks in the direction of the arrow."
            bool bOneWay; // 0x24            
            uint8_t _pad0025[0x3]; // 0x25
            // metadata: MPropertyAttributeRange "-1 1"
            // metadata: MPropertyDescription "0 = line, + = curve to the 'right' from node 1 to node 2, - = curve left"
            float flCircleInvRadius; // 0x28            
            // metadata: MPropertyDescription "path particle color"
            Color color; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::BlessingPath_t, Node1) == 0x8);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, Node2) == 0x18);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, bOneWay) == 0x24);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, flCircleInvRadius) == 0x28);
        static_assert(offsetof(source2sdk::client::BlessingPath_t, color) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::BlessingPath_t) == 0x30);
    };
};
