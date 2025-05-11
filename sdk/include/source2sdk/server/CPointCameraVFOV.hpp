#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointCamera.hpp"

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
        class CPointCameraVFOV : public source2sdk::server::CPointCamera
        {
        public:
            float m_flVerticalFOV; // 0x540            
            uint8_t _pad0544[0x4];
            
            // Datamap fields:
            // float m_flDofFarCrisp; // 0x520
            // float m_flDofFarBlurry; // 0x524
            // float m_flDofTiltToGround; // 0x528
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCameraVFOV because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCameraVFOV) == 0x548);
    };
};
