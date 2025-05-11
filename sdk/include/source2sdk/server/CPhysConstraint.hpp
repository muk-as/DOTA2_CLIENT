#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
        // Size: 0x550
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CPhysConstraint : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04d8[0x8]; // 0x4d8
            CUtlSymbolLarge m_nameAttach1; // 0x4e0            
            CUtlSymbolLarge m_nameAttach2; // 0x4e8            
            // m_hAttach1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttach1;
            char m_hAttach1[0x4]; // 0x4f0            
            // m_hAttach2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttach2;
            char m_hAttach2[0x4]; // 0x4f4            
            CUtlSymbolLarge m_nameAttachment1; // 0x4f8            
            CUtlSymbolLarge m_nameAttachment2; // 0x500            
            CUtlSymbolLarge m_breakSound; // 0x508            
            float m_forceLimit; // 0x510            
            float m_torqueLimit; // 0x514            
            std::uint32_t m_teleportTick; // 0x518            
            float m_minTeleportDistance; // 0x51c            
            bool m_bSnapObjectPositions; // 0x520            
            uint8_t _pad0521[0x7]; // 0x521
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x528            
            
            // Datamap fields:
            // void m_hJoint; // 0x4d8
            // void InputBreak; // 0x0
            // void InputOnBreak; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnableLinearConstraint; // 0x0
            // void InputDisableLinearConstraint; // 0x0
            // void InputEnableAngularConstraint; // 0x0
            // void InputDisableAngularConstraint; // 0x0
            // void InputTurnMotorOn; // 0x0
            // void InputTurnMotorOff; // 0x0
            // float InputSetMotorTorqueFactor; // 0x0
            // float InputSetMotorTargetVelocity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysConstraint) == 0x550);
    };
};
