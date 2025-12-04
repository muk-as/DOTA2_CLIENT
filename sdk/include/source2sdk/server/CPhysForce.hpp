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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CPhysForce : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_nameAttach; // 0x_            
            float m_force; // 0x_            
            float m_forceTime; // 0x_            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x_]; // 0x_            
            bool m_wasRestored; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CConstantForceController m_integrator; // 0x_            
            
            // Datamap fields:
            // void m_pController; // 0x_
            // void InputActivate; // 0x_
            // void InputDeactivate; // 0x_
            // float InputForceScale; // 0x_
            // void CPhysForceForceOff; // 0x_
            // void CPhysForceInitialThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysForce) == 0x_);
    };
};
