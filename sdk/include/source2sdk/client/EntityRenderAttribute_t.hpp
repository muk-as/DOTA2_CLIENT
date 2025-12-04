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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlStringToken m_ID"
        // static metadata: MNetworkVarNames "Vector4D m_Values"
        #pragma pack(push, 1)
        struct EntityRenderAttribute_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlStringToken m_ID; // 0x_            
            // metadata: MNetworkEnable
            Vector4D m_Values; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EntityRenderAttribute_t, m_ID) == 0x_);
        static_assert(offsetof(source2sdk::client::EntityRenderAttribute_t, m_Values) == 0x_);
        
        static_assert(sizeof(source2sdk::client::EntityRenderAttribute_t) == 0x_);
    };
};
