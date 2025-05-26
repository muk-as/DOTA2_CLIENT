#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CConstantForceController.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x540
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CPhysForce : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04e0[0x8]; // 0x4e0
            CUtlSymbolLarge m_nameAttach; // 0x4e8            
            float m_force; // 0x4f0            
            float m_forceTime; // 0x4f4            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x4]; // 0x4f8            
            bool m_wasRestored; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            source2sdk::server::CConstantForceController m_integrator; // 0x500            
            
            // Datamap fields:
            // void m_pController; // 0x4e0
            // void InputActivate; // 0x0
            // void InputDeactivate; // 0x0
            // float InputForceScale; // 0x0
            // void CPhysForceForceOff; // 0x0
            // void CPhysForceInitialThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysForce) == 0x540);
    };
};
