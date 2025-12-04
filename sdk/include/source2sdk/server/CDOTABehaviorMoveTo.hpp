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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorMoveTo
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_repathTimer; // 0x_            
            bool m_bSetAnimation; // 0x_            
            bool m_bUseSwimAnimations; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nRunActivity; // 0x_            
            float m_flTargetDist; // 0x_            
            bool m_bIsDirectional; // 0x_            
            bool m_bIsRelative; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_repathTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bSetAnimation) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bUseSwimAnimations) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_nRunActivity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_flTargetDist) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bIsDirectional) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorMoveTo, m_bIsRelative) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorMoveTo) == 0x_);
    };
};
