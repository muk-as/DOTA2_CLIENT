#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ForcedCrouchState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGameScriptedMoveData
        {
        public:
            Vector m_vAccumulatedRootMotion; // 0x_            
            QAngle m_angAccumulatedRootMotionRotation; // 0x_            
            Vector m_vSrc; // 0x_            
            QAngle m_angSrc; // 0x_            
            QAngle m_angCurrent; // 0x_            
            float m_flLockedSpeed; // 0x_            
            float m_flAngRate; // 0x_            
            float m_flDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            bool m_bActive; // 0x_            
            bool m_bTeleportOnEnd; // 0x_            
            bool m_bIgnoreRotation; // 0x_            
            bool m_bSuccess; // 0x_            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x_            
            bool m_bIgnoreCollisions; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vDest; // 0x_            
            QAngle m_angDst; // 0x_            
            // m_hDestEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDestEntity;
            char m_hDestEntity[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_vAccumulatedRootMotion) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angAccumulatedRootMotionRotation) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_vSrc) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angSrc) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angCurrent) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flLockedSpeed) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flAngRate) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flStartTime) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bActive) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bTeleportOnEnd) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bIgnoreRotation) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bSuccess) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_nForcedCrouchState) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bIgnoreCollisions) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_vDest) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angDst) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_hDestEntity) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CGameScriptedMoveData) == 0x_);
    };
};
