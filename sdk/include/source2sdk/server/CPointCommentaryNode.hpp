#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
        // 
        // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
        // static metadata: MNetworkVarNames "string_t m_iszTitle"
        // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
        // static metadata: MNetworkVarNames "int m_iNodeNumber"
        // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
        // static metadata: MNetworkVarNames "bool m_bListenedTo"
        #pragma pack(push, 1)
        class CPointCommentaryNode : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            CUtlSymbolLarge m_iszPreCommands; // 0x_            
            CUtlSymbolLarge m_iszPostCommands; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0x_            
            CUtlSymbolLarge m_iszViewTarget; // 0x_            
            // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTarget;
            char m_hViewTarget[0x_]; // 0x_            
            // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTargetAngles;
            char m_hViewTargetAngles[0x_]; // 0x_            
            CUtlSymbolLarge m_iszViewPosition; // 0x_            
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPosition;
            char m_hViewPosition[0x_]; // 0x_            
            // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPositionMover;
            char m_hViewPositionMover[0x_]; // 0x_            
            bool m_bPreventMovement; // 0x_            
            bool m_bUnderCrosshair; // 0x_            
            bool m_bUnstoppable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flFinishedTime; // 0x_            
            Vector m_vecFinishOrigin; // 0x_            
            QAngle m_vecOriginalAngles; // 0x_            
            QAngle m_vecFinishAngles; // 0x_            
            bool m_bPreventChangesWhileMoving; // 0x_            
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            VectorWS m_vecTeleportOrigin; // 0x_            
            source2sdk::entity2::GameTime_t m_flAbortedPlaybackAt; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0x_            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0x_            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputStartCommentary; // 0x_
            // void InputStartUnstoppableCommentary; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void CPointCommentaryNodeSpinThink; // 0x_
            // void CPointCommentaryNodeUpdateViewThink; // 0x_
            // void CPointCommentaryNodeUpdateViewPostThink; // 0x_
            // void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCommentaryNode) == 0x_);
    };
};
