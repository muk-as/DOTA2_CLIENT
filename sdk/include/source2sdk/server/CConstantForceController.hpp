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
        class CConstantForceController
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_linear; // 0x_            
            RotationVector m_angular; // 0x_            
            Vector m_linearSave; // 0x_            
            RotationVector m_angularSave; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool m_bLocalSpace; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_linear) == 0x_);
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_angular) == 0x_);
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_linearSave) == 0x_);
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_angularSave) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CConstantForceController) == 0x_);
    };
};
