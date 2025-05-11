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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyGameObjectInstance_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_szName; // 0x8            
            CUtlString m_szGameObject; // 0x10            
            uint8_t _pad0018[0x4]; // 0x18
            Vector2D m_vPosition; // 0x1c            
            float m_flRotation; // 0x24            
            Vector2D m_vScale; // 0x28            
            bool m_bFacingLeft; // 0x30            
            uint8_t _pad0031[0x3]; // 0x31
            float m_flYawOffset; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_szName) == 0x8);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_szGameObject) == 0x10);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_vPosition) == 0x1c);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_flRotation) == 0x24);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_vScale) == 0x28);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_bFacingLeft) == 0x30);
        static_assert(offsetof(source2sdk::client::ArtyGameObjectInstance_t, m_flYawOffset) == 0x34);
        
        static_assert(sizeof(source2sdk::client::ArtyGameObjectInstance_t) == 0x38);
    };
};
