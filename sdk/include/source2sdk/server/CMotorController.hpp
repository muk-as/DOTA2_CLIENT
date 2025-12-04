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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CMotorController
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_speed; // 0x_            
            float m_maxTorque; // 0x_            
            Vector m_axis; // 0x_            
            float m_inertiaFactor; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CMotorController, m_speed) == 0x_);
        static_assert(offsetof(source2sdk::server::CMotorController, m_maxTorque) == 0x_);
        static_assert(offsetof(source2sdk::server::CMotorController, m_axis) == 0x_);
        static_assert(offsetof(source2sdk::server::CMotorController, m_inertiaFactor) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CMotorController) == 0x_);
    };
};
