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
    // Size: 0x518
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysForce : public server::CPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x8]; // 0x4b8
        CUtlSymbolLarge m_nameAttach; // 0x4c0        
        float m_force; // 0x4c8        
        float m_forceTime; // 0x4cc        
        // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_attachedObject;
        char m_attachedObject[0x4]; // 0x4d0        
        bool m_wasRestored; // 0x4d4        
        [[maybe_unused]] std::uint8_t pad_0x4d5[0x3]; // 0x4d5
        server::CConstantForceController m_integrator; // 0x4d8        
        
        // Datamap fields:
        // void m_pController; // 0x4b8
        // void InputActivate; // 0x0
        // void InputDeactivate; // 0x0
        // float InputForceScale; // 0x0
        // void CPhysForceForceOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
    static_assert(sizeof(CPhysForce) == 0x518);
};
