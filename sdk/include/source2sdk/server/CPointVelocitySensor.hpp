#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x520
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointVelocitySensor : public source2sdk::server::CPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x4d8            
            Vector m_vecAxis; // 0x4dc            
            bool m_bEnabled; // 0x4e8            
            uint8_t _pad04e9[0x3]; // 0x4e9
            float m_fPrevVelocity; // 0x4ec            
            float m_flAvgInterval; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            // m_Velocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Velocity;
            char m_Velocity[0x28]; // 0x4f8            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointVelocitySensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointVelocitySensor) == 0x520);
    };
};
