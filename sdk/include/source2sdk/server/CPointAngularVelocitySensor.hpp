#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        class CPointAngularVelocitySensor : public source2sdk::server::CPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x_]; // 0x_            
            float m_flThreshold; // 0x_            
            std::int32_t m_nLastCompareResult; // 0x_            
            std::int32_t m_nLastFireResult; // 0x_            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0x_            
            float m_flFireInterval; // 0x_            
            float m_flLastAngVelocity; // 0x_            
            QAngle m_lastOrientation; // 0x_            
            Vector m_vecAxis; // 0x_            
            bool m_bUseHelper; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_AngularVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_AngularVelocity;
            char m_AngularVelocity[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnLessThan; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnLessThanOrEqualTo; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnGreaterThan; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnEqualTo; // 0x_            
            
            // Datamap fields:
            // void InputTest; // 0x_
            // void InputTestWithInterval; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointAngularVelocitySensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointAngularVelocitySensor) == 0x_);
    };
};
