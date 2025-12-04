#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct NodeData_t
        {
        public:
            std::int32_t m_nParent; // 0x_            
            Vector m_vOrigin; // 0x_            
            Vector m_vMinBounds; // 0x_            
            Vector m_vMaxBounds; // 0x_            
            float m_flMinimumDistance; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ChildNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ChildNodeIndices;
            char m_ChildNodeIndices[0x_]; // 0x_            
            CUtlString m_worldNodePrefix; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_nParent) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_vOrigin) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_vMinBounds) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_vMaxBounds) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_flMinimumDistance) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_ChildNodeIndices) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::NodeData_t, m_worldNodePrefix) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::NodeData_t) == 0x_);
    };
};
