#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncPlat.hpp"

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
        // Size: 0x8b8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncPlatRot : public source2sdk::server::CFuncPlat
        {
        public:
            QAngle m_end; // 0x8a0            
            QAngle m_start; // 0x8ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncPlatRot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncPlatRot) == 0x8b8);
    };
};
