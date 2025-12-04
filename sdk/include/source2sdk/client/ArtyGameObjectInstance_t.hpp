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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyGameObjectInstance_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szName; // 0x_            
            CUtlString m_szGameObject; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector2D m_vPosition; // 0x_            
            float m_flRotation; // 0x_            
            Vector2D m_vScale; // 0x_            
            bool m_bFacingLeft; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flYawOffset; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_szName) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_szGameObject) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_vPosition) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_flRotation) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_vScale) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_bFacingLeft) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_flYawOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyGameObjectInstance_t) == 0x_);
    };
};
