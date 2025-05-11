#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysForce.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x548
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysTorque : public source2sdk::server::CPhysForce
        {
        public:
            Vector m_axis; // 0x538            
            uint8_t _pad0544[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysTorque because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysTorque) == 0x548);
    };
};
