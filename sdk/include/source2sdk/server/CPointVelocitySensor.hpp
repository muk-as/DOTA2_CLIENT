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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointVelocitySensor : public source2sdk::server::CPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x_]; // 0x_            
            Vector m_vecAxis; // 0x_            
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fPrevVelocity; // 0x_            
            float m_flAvgInterval; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Velocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Velocity;
            char m_Velocity[0x_]; // 0x_            
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointVelocitySensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointVelocitySensor) == 0x_);
    };
};
