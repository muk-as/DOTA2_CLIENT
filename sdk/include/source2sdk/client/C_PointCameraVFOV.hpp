#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointCamera.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x580
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointCameraVFOV : public source2sdk::client::C_PointCamera
        {
        public:
            float m_flVerticalFOV; // 0x578            
            uint8_t _pad057c[0x4];
            
            // Datamap fields:
            // float m_flDofFarCrisp; // 0x558
            // float m_flDofFarBlurry; // 0x55c
            // float m_flDofTiltToGround; // 0x560
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointCameraVFOV because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCameraVFOV) == 0x580);
    };
};
