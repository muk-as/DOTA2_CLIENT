#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSplineConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vAnchorOffsetRestore; // 0x_            
            // m_hSplineEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSplineEntity;
            char m_hSplineEntity[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bEnableLateralConstraint; // 0x_            
            bool m_bEnableVerticalConstraint; // 0x_            
            bool m_bEnableAngularConstraint; // 0x_            
            bool m_bEnableLimit; // 0x_            
            bool m_bFireEventsOnPath; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLinearFrequency; // 0x_            
            float m_flLinarDampingRatio; // 0x_            
            float m_flJointFriction; // 0x_            
            float m_flTransitionTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            VectorWS m_vPreSolveAnchorPos; // 0x_            
            source2sdk::entity2::GameTime_t m_StartTransitionTime; // 0x_            
            Vector m_vTangentSpaceAnchorAtTransitionStart; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CSplineConstraintTransitionThink; // 0x_
            // void m_pSplineBody; // 0x_
            // float InputSetTransitionTime; // 0x_
            // CUtlSymbolLarge InputSetSplineEntity; // 0x_
            // void InputEnableLimit; // 0x_
            // void InputDisableLimit; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSplineConstraint) == 0x_);
    };
};
