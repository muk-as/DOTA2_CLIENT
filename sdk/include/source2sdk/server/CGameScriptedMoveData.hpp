#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/ForcedCrouchState_t.hpp"
#include "source2sdk/server/ScriptedMoveType_t.hpp"
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
        float m_flAccumulatedRootMotionRotation; // 0xc        
        Vector m_vSrc; // 0x10        
        QAngle m_angSrc; // 0x1c        
        QAngle m_angDst; // 0x28        
        QAngle m_angCurrent; // 0x34        
        float m_flLockedSpeed; // 0x40        
        float m_flAngRate; // 0x44        
        float m_flDuration; // 0x48        
        entity2::GameTime_t m_flStartTime; // 0x4c        
        bool m_bActive; // 0x50        
        bool m_bTeleportOnEnd; // 0x51        
        bool m_bIgnoreRotation; // 0x52        
        [[maybe_unused]] std::uint8_t pad_0x53[0x1]; // 0x53
        server::ScriptedMoveType_t m_nType; // 0x54        
        bool m_bSuccess; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x3]; // 0x59
        server::ForcedCrouchState_t m_nForcedCrouchState; // 0x5c        
        bool m_bIgnoreCollisions; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x61[0x3]; // 0x61
        Vector m_vDest; // 0x64        
        // m_hDestEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDestEntity;
        char m_hDestEntity[0x4]; // 0x70        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CGameScriptedMoveData, m_vAccumulatedRootMotion) == 0x0);
    static_assert(offsetof(CGameScriptedMoveData, m_flAccumulatedRootMotionRotation) == 0xc);
    static_assert(offsetof(CGameScriptedMoveData, m_vSrc) == 0x10);
    static_assert(offsetof(CGameScriptedMoveData, m_angSrc) == 0x1c);
    static_assert(offsetof(CGameScriptedMoveData, m_angDst) == 0x28);
    static_assert(offsetof(CGameScriptedMoveData, m_angCurrent) == 0x34);
    static_assert(offsetof(CGameScriptedMoveData, m_flLockedSpeed) == 0x40);
    static_assert(offsetof(CGameScriptedMoveData, m_flAngRate) == 0x44);
    static_assert(offsetof(CGameScriptedMoveData, m_flDuration) == 0x48);
    static_assert(offsetof(CGameScriptedMoveData, m_flStartTime) == 0x4c);
    static_assert(offsetof(CGameScriptedMoveData, m_bActive) == 0x50);
    static_assert(offsetof(CGameScriptedMoveData, m_bTeleportOnEnd) == 0x51);
    static_assert(offsetof(CGameScriptedMoveData, m_bIgnoreRotation) == 0x52);
    static_assert(offsetof(CGameScriptedMoveData, m_nType) == 0x54);
    static_assert(offsetof(CGameScriptedMoveData, m_bSuccess) == 0x58);
    static_assert(offsetof(CGameScriptedMoveData, m_nForcedCrouchState) == 0x5c);
    static_assert(offsetof(CGameScriptedMoveData, m_bIgnoreCollisions) == 0x60);
    static_assert(offsetof(CGameScriptedMoveData, m_vDest) == 0x64);
    static_assert(offsetof(CGameScriptedMoveData, m_hDestEntity) == 0x70);
    
    static_assert(sizeof(CGameScriptedMoveData) == 0x74);
};
