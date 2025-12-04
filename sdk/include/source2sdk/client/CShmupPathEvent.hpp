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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupPathEvent
        {
        public:
            source2sdk::client::EShmupPathEventType m_type; // 0x_            
            std::int32_t m_nBulletPatternIndex; // 0x_            
            float m_flTime; // 0x_            
            // metadata: MPropertySuppressExpr "m_type != k_eShmupPathEventType_Speed"
            float m_flSpeed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_type) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_nBulletPatternIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_flTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPathEvent, m_flSpeed) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupPathEvent) == 0x_);
    };
};
