#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xe0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorMoveTo
        {
        public:
            uint8_t _pad0000[0xb8]; // 0x0
            source2sdk::server::CountdownTimer m_repathTimer; // 0xb8            
            bool m_bSetAnimation; // 0xd0            
            bool m_bUseSwimAnimations; // 0xd1            
            uint8_t _pad00d2[0x2]; // 0xd2
            std::int32_t m_nRunActivity; // 0xd4            
            float m_flTargetDist; // 0xd8            
            bool m_bIsDirectional; // 0xdc            
            bool m_bIsRelative; // 0xdd            
            uint8_t _pad00de[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_repathTimer) == 0xb8);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bSetAnimation) == 0xd0);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bUseSwimAnimations) == 0xd1);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_nRunActivity) == 0xd4);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_flTargetDist) == 0xd8);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bIsDirectional) == 0xdc);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bIsRelative) == 0xdd);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorMoveTo) == 0xe0);
    };
};
