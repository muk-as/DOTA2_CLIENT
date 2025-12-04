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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct HullFlags_t
        {
        public:
            bool m_bHull_Human; // 0x_            
            bool m_bHull_SmallCentered; // 0x_            
            bool m_bHull_WideHuman; // 0x_            
            bool m_bHull_Tiny; // 0x_            
            bool m_bHull_Medium; // 0x_            
            bool m_bHull_TinyCentered; // 0x_            
            bool m_bHull_Large; // 0x_            
            bool m_bHull_LargeCentered; // 0x_            
            bool m_bHull_MediumTall; // 0x_            
            bool m_bHull_Small; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_Human) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_SmallCentered) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_WideHuman) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_Tiny) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_Medium) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_TinyCentered) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_Large) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_LargeCentered) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_MediumTall) == 0x_);
        static_assert(offsetof(source2sdk::client::HullFlags_t, m_bHull_Small) == 0x_);
        
        static_assert(sizeof(source2sdk::client::HullFlags_t) == 0x_);
    };
};
