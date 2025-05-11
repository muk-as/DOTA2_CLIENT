#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"

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
        // Size: 0xb38
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysicsPropRespawnable : public source2sdk::server::CPhysicsProp
        {
        public:
            Vector m_vOriginalSpawnOrigin; // 0xb00            
            QAngle m_vOriginalSpawnAngles; // 0xb0c            
            Vector m_vOriginalMins; // 0xb18            
            Vector m_vOriginalMaxs; // 0xb24            
            float m_flRespawnDuration; // 0xb30            
            uint8_t _pad0b34[0x4];
            
            // Datamap fields:
            // void CPhysicsPropRespawnableMaterialize; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsPropRespawnable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsPropRespawnable) == 0xb38);
    };
};
