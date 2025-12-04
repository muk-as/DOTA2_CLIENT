#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_FollowEntityDirection_t.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x_            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x_]; // 0x_            
            // m_hPrevPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPrevPathMover;
            char m_hPrevPathMover[0x_]; // 0x_            
            CUtlSymbolLarge m_iszPathNodeStart; // 0x_            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x_            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x_            
            bool m_bIsReversing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vTarget; // 0x_            
            float m_flStartSpeed; // 0x_            
            float m_flPathLocation; // 0x_            
            float m_flT; // 0x_            
            std::int32_t m_nCurrentNodeIndex; // 0x_            
            std::int32_t m_nPreviousNodeIndex; // 0x_            
            source2sdk::client::SolidType_t m_eSolidType; // 0x_            
            bool m_bIsMoving; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTimeToReachMaxSpeed; // 0x_            
            float m_flDistanceToReachMaxSpeed; // 0x_            
            float m_flTimeToReachZeroSpeed; // 0x_            
            float m_flDistanceToReachZeroSpeed; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x_            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x_]; // 0x_            
            float m_flPathLocationToBeginStop; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszStartForwardSound; // 0x_            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x_            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x_            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x_            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x_            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x_            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x_            
            bool m_bStartAtClosestPoint; // 0x_            
            bool m_bStartAtEnd; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x_            
            float m_flTimeToBlendToNewOrientation; // 0x_            
            float m_flDurationBlendToNewOrientationRan; // 0x_            
            std::int32_t m_nOriginalOrientationIndex; // 0x_            
            bool m_bCreateMovableNavMesh; // 0x_            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x_            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x_            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x_]; // 0x_            
            float m_flTimeToTraverseToNextNode; // 0x_            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x_            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x_            
            float m_flLerpToPositionT; // 0x_            
            float m_flLerpToPositionDeltaT; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x_            
            bool m_bIsPaused; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x_            
            std::int32_t m_nDelayedTeleportToNode; // 0x_            
            bool m_bIsVerboseLogging; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x_]; // 0x_            
            float m_flFollowDistance; // 0x_            
            float m_flFollowMinimumSpeed; // 0x_            
            float m_flCurFollowEntityT; // 0x_            
            float m_flCurFollowSpeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x_            
            // m_hOrientationFaceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationFaceEntity;
            char m_hOrientationFaceEntity[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x_            
            bool m_bNextNodeReturnsCurrent; // 0x_            
            bool m_bStartedMoving; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CFuncMover_FollowEntityDirection_t m_eFollowEntityDirection; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputStart; // 0x_
            // void InputStartForward; // 0x_
            // void InputStartReverse; // 0x_
            // void InputStop; // 0x_
            // void InputToggle; // 0x_
            // void InputToggleDirection; // 0x_
            // void InputPause; // 0x_
            // void InputUnpause; // 0x_
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x_
            // CUtlSymbolLarge InputMoveToPathNode; // 0x_
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x_
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x_
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x_
            // float InputSetSpeed; // 0x_
            // float InputSetSpeedImmediate; // 0x_
            // float InputSetTimeToReachMaxSpeed; // 0x_
            // float InputSetTimeToBlendToNewOrientation; // 0x_
            // int32_t InputSetOrientationMode; // 0x_
            // CUtlSymbolLarge InputSetFollowEntity; // 0x_
            // CUtlSymbolLarge InputSetFollowEntityForward; // 0x_
            // CUtlSymbolLarge InputSetFollowEntityReverse; // 0x_
            // CUtlSymbolLarge InputSetFaceEntity; // 0x_
            // float InputSetFollowDistance; // 0x_
            // float InputSetFollowMinimumSpeed; // 0x_
            // float InputSetTimeToTraverseToNextNode; // 0x_
            // int32_t InputSetMoveType; // 0x_
            // void CFuncMoverLerpToNewPosition; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0x_);
    };
};
