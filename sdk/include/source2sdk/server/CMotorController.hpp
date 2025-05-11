#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CMotorController
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_speed; // 0x8            
            float m_maxTorque; // 0xc            
            Vector m_axis; // 0x10            
            float m_inertiaFactor; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CMotorController, m_speed) == 0x8);
        static_assert(offsetof(source2sdk::server::CMotorController, m_maxTorque) == 0xc);
        static_assert(offsetof(source2sdk::server::CMotorController, m_axis) == 0x10);
        static_assert(offsetof(source2sdk::server::CMotorController, m_inertiaFactor) == 0x1c);
        
        static_assert(sizeof(source2sdk::server::CMotorController) == 0x20);
    };
};
