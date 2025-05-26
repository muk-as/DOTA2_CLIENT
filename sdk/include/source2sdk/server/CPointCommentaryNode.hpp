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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8d0
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
            CUtlSymbolLarge m_iszPreCommands; // 0x7d8            
            CUtlSymbolLarge m_iszPostCommands; // 0x7e0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0x7e8            
            CUtlSymbolLarge m_iszViewTarget; // 0x7f0            
            // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTarget;
            char m_hViewTarget[0x4]; // 0x7f8            
            // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTargetAngles;
            char m_hViewTargetAngles[0x4]; // 0x7fc            
            CUtlSymbolLarge m_iszViewPosition; // 0x800            
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0x808            
            // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPositionMover;
            char m_hViewPositionMover[0x4]; // 0x80c            
            bool m_bPreventMovement; // 0x810            
            bool m_bUnderCrosshair; // 0x811            
            bool m_bUnstoppable; // 0x812            
            uint8_t _pad0813[0x1]; // 0x813
            source2sdk::entity2::GameTime_t m_flFinishedTime; // 0x814            
            Vector m_vecFinishOrigin; // 0x818            
            QAngle m_vecOriginalAngles; // 0x824            
            QAngle m_vecFinishAngles; // 0x830            
            bool m_bPreventChangesWhileMoving; // 0x83c            
            bool m_bDisabled; // 0x83d            
            uint8_t _pad083e[0x2]; // 0x83e
            Vector m_vecTeleportOrigin; // 0x840            
            source2sdk::entity2::GameTime_t m_flAbortedPlaybackAt; // 0x84c            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0x850            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0x878            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x8a0            
            uint8_t _pad08a1[0x3]; // 0x8a1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x8a4            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0x8a8            
            uint8_t _pad08ac[0x4]; // 0x8ac
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0x8b0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0x8b8            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0x8c0            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0x8c4            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0x8c8            
            uint8_t _pad08c9[0x7];
            
            // Datamap fields:
            // void InputStartCommentary; // 0x0
            // void InputStartUnstoppableCommentary; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CPointCommentaryNodeSpinThink; // 0x0
            // void CPointCommentaryNodeUpdateViewThink; // 0x0
            // void CPointCommentaryNodeUpdateViewPostThink; // 0x0
            // void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCommentaryNode) == 0x8d0);
    };
};
