#pragma once
#include "source2sdk/server/CPhysicsProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb50
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysicsPropRespawnable : public server::CPhysicsProp
    {
    public:
        Vector m_vOriginalSpawnOrigin; // 0xb18        
        QAngle m_vOriginalSpawnAngles; // 0xb24        
        Vector m_vOriginalMins; // 0xb30        
        Vector m_vOriginalMaxs; // 0xb3c        
        float m_flRespawnDuration; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x4];
        
        // Datamap fields:
        // void CPhysicsPropRespawnableMaterialize; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsPropRespawnable because it is not a standard-layout class
    static_assert(sizeof(CPhysicsPropRespawnable) == 0xb50);
};
