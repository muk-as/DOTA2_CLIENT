#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPointAngularVelocitySensor : public server::CPointEntity
    {
    public:
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x4e0        
        float m_flThreshold; // 0x4e4        
        int32_t m_nLastCompareResult; // 0x4e8        
        int32_t m_nLastFireResult; // 0x4ec        
        entity2::GameTime_t m_flFireTime; // 0x4f0        
        float m_flFireInterval; // 0x4f4        
        float m_flLastAngVelocity; // 0x4f8        
        QAngle m_lastOrientation; // 0x4fc        
        Vector m_vecAxis; // 0x508        
        bool m_bUseHelper; // 0x514        
        [[maybe_unused]] std::uint8_t pad_0x515[0x3]; // 0x515
        // m_AngularVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_AngularVelocity;
        char m_AngularVelocity[0x28]; // 0x518        
        entity2::CEntityIOOutput m_OnLessThan; // 0x540        
        entity2::CEntityIOOutput m_OnLessThanOrEqualTo; // 0x568        
        entity2::CEntityIOOutput m_OnGreaterThan; // 0x590        
        entity2::CEntityIOOutput m_OnGreaterThanOrEqualTo; // 0x5b8        
        entity2::CEntityIOOutput m_OnEqualTo; // 0x5e0        
        
        // Datamap fields:
        // void InputTest; // 0x0
        // void InputTestWithInterval; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointAngularVelocitySensor because it is not a standard-layout class
    static_assert(sizeof(CPointAngularVelocitySensor) == 0x608);
};
