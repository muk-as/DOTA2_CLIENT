#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/MoveLinearAuthoredPos_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
    #pragma pack(push, 1)
    class CFuncMoveLinear : public server::CBaseToggle
    {
    public:
        server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x830        
        QAngle m_angMoveEntitySpace; // 0x834        
        Vector m_vecMoveDirParentSpace; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4]; // 0x84c
        CUtlSymbolLarge m_soundStart; // 0x850        
        CUtlSymbolLarge m_soundStop; // 0x858        
        CUtlSymbolLarge m_currentSound; // 0x860        
        float m_flBlockDamage; // 0x868        
        float m_flStartPosition; // 0x86c        
        [[maybe_unused]] std::uint8_t pad_0x870[0x8]; // 0x870
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x878        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x8a0        
        bool m_bCreateMovableNavMesh; // 0x8c8        
        bool m_bCreateNavObstacle; // 0x8c9        
        [[maybe_unused]] std::uint8_t pad_0x8ca[0xe];
        
        // Datamap fields:
        // float m_flMoveDistance; // 0x7b4
        // bool movewithoutpushingblockers; // 0x7fffffff
        // void CFuncMoveLinearNavObstacleThink; // 0x0
        // void CFuncMoveLinearNavMovableThink; // 0x0
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // float InputSetPosition; // 0x0
        // float InputSetSpeed; // 0x0
        // CUtlSymbolLarge InputTeleportToTarget; // 0x0
        // float InputResetPosition; // 0x0
        // float InputSetMoveDistanceFromStart; // 0x0
        // float InputSetMoveDistanceFromEnd; // 0x0
        // void CFuncMoveLinearStopMoveSound; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
    static_assert(sizeof(CFuncMoveLinear) == 0x8d8);
};
