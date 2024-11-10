#pragma once
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
    // Size: 0x528
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPointVelocitySensor : public server::CPointEntity
    {
    public:
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x4e0        
        Vector m_vecAxis; // 0x4e4        
        bool m_bEnabled; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f1[0x3]; // 0x4f1
        float m_fPrevVelocity; // 0x4f4        
        float m_flAvgInterval; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4fc[0x4]; // 0x4fc
        // m_Velocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_Velocity;
        char m_Velocity[0x28]; // 0x500        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointVelocitySensor because it is not a standard-layout class
    static_assert(sizeof(CPointVelocitySensor) == 0x528);
};
