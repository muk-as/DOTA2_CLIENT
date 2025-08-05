#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSplineConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0550[0x50]; // 0x550
            Vector m_vAnchorOffsetRestore; // 0x5a0            
            // m_hSplineEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSplineEntity;
            char m_hSplineEntity[0x4]; // 0x5ac            
            bool m_bEnableLateralConstraint; // 0x5b0            
            bool m_bEnableVerticalConstraint; // 0x5b1            
            bool m_bEnableAngularConstraint; // 0x5b2            
            bool m_bEnableLimit; // 0x5b3            
            bool m_bFireEventsOnPath; // 0x5b4            
            uint8_t _pad05b5[0x3]; // 0x5b5
            float m_flLinearFrequency; // 0x5b8            
            float m_flLinarDampingRatio; // 0x5bc            
            float m_flJointFriction; // 0x5c0            
            uint8_t _pad05c4[0x24]; // 0x5c4
            Vector m_vPreSolveAnchorPos; // 0x5e8            
            uint8_t _pad05f4[0x4];
            
            // Datamap fields:
            // void CSplineConstraintUpdateThink; // 0x0
            // CUtlSymbolLarge InputSetSplineEntity; // 0x0
            // void InputEnableLimit; // 0x0
            // void InputDisableLimit; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSplineConstraint) == 0x5f8);
    };
};
