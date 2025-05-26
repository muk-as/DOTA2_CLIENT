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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x74
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CGameScriptedMoveData
        {
        public:
            Vector m_vAccumulatedRootMotion; // 0x0            
            QAngle m_angAccumulatedRootMotionRotation; // 0xc            
            Vector m_vSrc; // 0x18            
            QAngle m_angSrc; // 0x24            
            QAngle m_angCurrent; // 0x30            
            float m_flLockedSpeed; // 0x3c            
            float m_flAngRate; // 0x40            
            float m_flDuration; // 0x44            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x48            
            bool m_bActive; // 0x4c            
            bool m_bTeleportOnEnd; // 0x4d            
            bool m_bIgnoreRotation; // 0x4e            
            bool m_bSuccess; // 0x4f            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x50            
            bool m_bIgnoreCollisions; // 0x54            
            uint8_t _pad0055[0x3]; // 0x55
            Vector m_vDest; // 0x58            
            QAngle m_angDst; // 0x64            
            // m_hDestEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDestEntity;
            char m_hDestEntity[0x4]; // 0x70            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_vAccumulatedRootMotion) == 0x0);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angAccumulatedRootMotionRotation) == 0xc);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_vSrc) == 0x18);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angSrc) == 0x24);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angCurrent) == 0x30);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flLockedSpeed) == 0x3c);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flAngRate) == 0x40);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flDuration) == 0x44);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_flStartTime) == 0x48);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bActive) == 0x4c);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bTeleportOnEnd) == 0x4d);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bIgnoreRotation) == 0x4e);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bSuccess) == 0x4f);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_nForcedCrouchState) == 0x50);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_bIgnoreCollisions) == 0x54);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_vDest) == 0x58);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_angDst) == 0x64);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveData, m_hDestEntity) == 0x70);
        
        static_assert(sizeof(source2sdk::server::CGameScriptedMoveData) == 0x74);
    };
};
