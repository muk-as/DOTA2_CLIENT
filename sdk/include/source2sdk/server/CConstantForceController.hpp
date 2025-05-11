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
        // Size: 0x40
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CConstantForceController
        {
        public:
            uint8_t _pad0000[0xc]; // 0x0
            Vector m_linear; // 0xc            
            RotationVector m_angular; // 0x18            
            Vector m_linearSave; // 0x24            
            RotationVector m_angularSave; // 0x30            
            uint8_t _pad003c[0x4];
            
            // Datamap fields:
            // bool m_bLocalSpace; // 0x8
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_linear) == 0xc);
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_angular) == 0x18);
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_linearSave) == 0x24);
        static_assert(offsetof(source2sdk::server::CConstantForceController, m_angularSave) == 0x30);
        
        static_assert(sizeof(source2sdk::server::CConstantForceController) == 0x40);
    };
};
