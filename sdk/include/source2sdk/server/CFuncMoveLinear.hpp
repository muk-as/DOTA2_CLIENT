#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/MoveLinearAuthoredPos_t.hpp"

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
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecVelocity"
        // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
        #pragma pack(push, 1)
        class CFuncMoveLinear : public source2sdk::server::CBaseToggle
        {
        public:
            source2sdk::server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x_            
            QAngle m_angMoveEntitySpace; // 0x_            
            Vector m_vecMoveDirParentSpace; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_soundStart; // 0x_            
            CUtlSymbolLarge m_soundStop; // 0x_            
            CUtlSymbolLarge m_currentSound; // 0x_            
            float m_flBlockDamage; // 0x_            
            float m_flStartPosition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x_            
            bool m_bCreateMovableNavMesh; // 0x_            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x_            
            bool m_bCreateNavObstacle; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x_
            // void CFuncMoveLinearNavObstacleThink; // 0x_
            // void CFuncMoveLinearNavMovableThink; // 0x_
            // void InputOpen; // 0x_
            // void InputClose; // 0x_
            // float InputSetPosition; // 0x_
            // float InputSetSpeed; // 0x_
            // CUtlSymbolLarge InputTeleportToTarget; // 0x_
            // float InputResetPosition; // 0x_
            // float InputSetMoveDistanceFromStart; // 0x_
            // float InputSetMoveDistanceFromEnd; // 0x_
            // void CFuncMoveLinearStopMoveSound; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMoveLinear) == 0x_);
    };
};
