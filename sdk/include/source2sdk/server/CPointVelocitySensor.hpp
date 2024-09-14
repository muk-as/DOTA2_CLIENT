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
    // Size: 0x500
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointVelocitySensor : public server::CPointEntity
    {
    public:
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x4b8        
        Vector m_vecAxis; // 0x4bc        
        bool m_bEnabled; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4c9[0x3]; // 0x4c9
        float m_fPrevVelocity; // 0x4cc        
        float m_flAvgInterval; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        // m_Velocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_Velocity;
        char m_Velocity[0x28]; // 0x4d8        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointVelocitySensor because it is not a standard-layout class
    static_assert(sizeof(CPointVelocitySensor) == 0x500);
};
