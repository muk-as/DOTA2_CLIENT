#pragma once
#include "source2sdk/server/CConstantForceController.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CPhysForce : public server::CPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        CUtlSymbolLarge m_nameAttach; // 0x4e8        
        float m_force; // 0x4f0        
        float m_forceTime; // 0x4f4        
        // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_attachedObject;
        char m_attachedObject[0x4]; // 0x4f8        
        bool m_wasRestored; // 0x4fc        
        [[maybe_unused]] std::uint8_t pad_0x4fd[0x3]; // 0x4fd
        server::CConstantForceController m_integrator; // 0x500        
        
        // Datamap fields:
        // void m_pController; // 0x4e0
        // void InputActivate; // 0x0
        // void InputDeactivate; // 0x0
        // float InputForceScale; // 0x0
        // void CPhysForceForceOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
    static_assert(sizeof(CPhysForce) == 0x540);
};
