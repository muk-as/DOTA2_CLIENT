#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8b8
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
    class CPointCommentaryNode : public server::CBaseAnimatingActivity
    {
    public:
        CUtlSymbolLarge m_iszPreCommands; // 0x7c0        
        CUtlSymbolLarge m_iszPostCommands; // 0x7c8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0x7d0        
        CUtlSymbolLarge m_iszViewTarget; // 0x7d8        
        // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTarget;
        char m_hViewTarget[0x4]; // 0x7e0        
        // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTargetAngles;
        char m_hViewTargetAngles[0x4]; // 0x7e4        
        CUtlSymbolLarge m_iszViewPosition; // 0x7e8        
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0x7f0        
        // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPositionMover;
        char m_hViewPositionMover[0x4]; // 0x7f4        
        bool m_bPreventMovement; // 0x7f8        
        bool m_bUnderCrosshair; // 0x7f9        
        bool m_bUnstoppable; // 0x7fa        
        [[maybe_unused]] std::uint8_t pad_0x7fb[0x1]; // 0x7fb
        entity2::GameTime_t m_flFinishedTime; // 0x7fc        
        Vector m_vecFinishOrigin; // 0x800        
        QAngle m_vecOriginalAngles; // 0x80c        
        QAngle m_vecFinishAngles; // 0x818        
        bool m_bPreventChangesWhileMoving; // 0x824        
        bool m_bDisabled; // 0x825        
        [[maybe_unused]] std::uint8_t pad_0x826[0x2]; // 0x826
        Vector m_vecTeleportOrigin; // 0x828        
        entity2::GameTime_t m_flAbortedPlaybackAt; // 0x834        
        entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0x838        
        entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0x860        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x889[0x3]; // 0x889
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x88c        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0x890        
        [[maybe_unused]] std::uint8_t pad_0x894[0x4]; // 0x894
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0x898        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0x8a0        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0x8a8        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0x8ac        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0x8b0        
        [[maybe_unused]] std::uint8_t pad_0x8b1[0x7];
        
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
    static_assert(sizeof(CPointCommentaryNode) == 0x8b8);
};
