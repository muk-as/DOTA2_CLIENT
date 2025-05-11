#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_Move_t.hpp"
#include "source2sdk/server/CFuncMover_OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa30
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x7a8            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x7b0            
            uint8_t _pad07b4[0x4]; // 0x7b4
            CUtlSymbolLarge m_iszPathNodeStart; // 0x7b8            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x7c0            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x7c8            
            bool m_bIsReversing; // 0x7cc            
            uint8_t _pad07cd[0x3]; // 0x7cd
            Vector m_vTarget; // 0x7d0            
            float m_flStartSpeed; // 0x7dc            
            float m_flPathLocation; // 0x7e0            
            float m_flT; // 0x7e4            
            std::int32_t m_nCurrentNodeIndex; // 0x7e8            
            std::int32_t m_nPreviousNodeIndex; // 0x7ec            
            source2sdk::client::SolidType_t m_eSolidType; // 0x7f0            
            bool m_bIsMoving; // 0x7f1            
            uint8_t _pad07f2[0x2]; // 0x7f2
            float m_flTimeToReachMaxSpeed; // 0x7f4            
            float m_flDistanceToReachMaxSpeed; // 0x7f8            
            float m_flTimeToReachZeroSpeed; // 0x7fc            
            float m_flDistanceToReachZeroSpeed; // 0x800            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x804            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x808            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x80c            
            float m_flPathLocationToBeginStop; // 0x810            
            uint8_t _pad0814[0x4]; // 0x814
            CUtlSymbolLarge m_iszStartForwardSound; // 0x818            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x820            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x828            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x830            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x838            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x840            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x848            
            uint8_t _pad0850[0x8]; // 0x850
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x858            
            bool m_bStartAtClosestPoint; // 0x880            
            bool m_bStartAtEnd; // 0x881            
            uint8_t _pad0882[0x2]; // 0x882
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x884            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x888            
            float m_flTimeToBlendToNewOrientation; // 0x88c            
            float m_flDurationBlendToNewOrientationRan; // 0x890            
            uint8_t _pad0894[0xc]; // 0x894
            Quaternion m_qOriginalOrientation; // 0x8a0            
            bool m_bCreateMovableNavMesh; // 0x8b0            
            uint8_t _pad08b1[0x7]; // 0x8b1
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x8b8            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8e0            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x8e8            
            float m_flTimeToTraverseToNextNode; // 0x8ec            
            Vector m_vLerpToNewPositionStart; // 0x8f0            
            Vector m_vLerpToNewPositionEnd; // 0x8fc            
            float m_flLerpToPositionT; // 0x908            
            float m_flLerpToPositionDeltaT; // 0x90c            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x910            
            bool m_bIsPaused; // 0x938            
            uint8_t _pad0939[0x3]; // 0x939
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x93c            
            std::int32_t m_nDelayedTeleportToNode; // 0x940            
            bool m_bIsVerboseLogging; // 0x944            
            uint8_t _pad0945[0x3]; // 0x945
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x948            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x970            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x998            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0x9c0            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x9e8            
            uint8_t _pad0a10[0x20];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleDirection; // 0x0
            // void InputPause; // 0x0
            // void InputUnpause; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedImmediate; // 0x0
            // float InputSetTimeToReachMaxSpeed; // 0x0
            // float InputSetTimeToBlendToNewOrientation; // 0x0
            // int32_t InputSetOrientationMode; // 0x0
            // void CFuncMoverMoveThink; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xa30);
    };
};
