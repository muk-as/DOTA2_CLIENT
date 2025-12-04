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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CPhysConstraint : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_nameAttach1; // 0x_            
            CUtlSymbolLarge m_nameAttach2; // 0x_            
            // m_hAttach1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttach1;
            char m_hAttach1[0x_]; // 0x_            
            // m_hAttach2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttach2;
            char m_hAttach2[0x_]; // 0x_            
            CUtlSymbolLarge m_nameAttachment1; // 0x_            
            CUtlSymbolLarge m_nameAttachment2; // 0x_            
            CUtlSymbolLarge m_breakSound; // 0x_            
            float m_forceLimit; // 0x_            
            float m_torqueLimit; // 0x_            
            float m_minTeleportDistance; // 0x_            
            bool m_bSnapObjectPositions; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x_            
            
            // Datamap fields:
            // void m_hJoint; // 0x_
            // void InputBreak; // 0x_
            // void InputOnBreak; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputEnableLinearConstraint; // 0x_
            // void InputDisableLinearConstraint; // 0x_
            // void InputEnableAngularConstraint; // 0x_
            // void InputDisableAngularConstraint; // 0x_
            // void InputTurnMotorOn; // 0x_
            // void InputTurnMotorOff; // 0x_
            // float InputSetMotorTorqueFactor; // 0x_
            // float InputSetMotorTargetVelocity; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysConstraint) == 0x_);
    };
};
