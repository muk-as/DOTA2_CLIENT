#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EShmupPathEventType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupPathEvent
        {
        public:
            source2sdk::client::EShmupPathEventType m_type; // 0x0            
            std::int32_t m_nBulletPatternIndex; // 0x4            
            float m_flTime; // 0x8            
            // metadata: MPropertySuppressExpr "m_type != k_eShmupPathEventType_Speed"
            float m_flSpeed; // 0xc            
            uint8_t _pad0010[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_type) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_nBulletPatternIndex) == 0x4);
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_flTime) == 0x8);
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_flSpeed) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CShmupPathEvent) == 0x18);
    };
};
