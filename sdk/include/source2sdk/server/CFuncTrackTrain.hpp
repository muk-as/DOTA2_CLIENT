#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TrainOrientationType_t.hpp"
#include "source2sdk/server/TrainVelocityType_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathTrack;
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
        // Size: 0x920
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTrackTrain : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathTrack> m_ppath;
            char m_ppath[0x4]; // 0x7c8            
            float m_length; // 0x7cc            
            Vector m_vPosPrev; // 0x7d0            
            QAngle m_angPrev; // 0x7dc            
            Vector m_controlMins; // 0x7e8            
            Vector m_controlMaxs; // 0x7f4            
            Vector m_lastBlockPos; // 0x800            
            std::int32_t m_lastBlockTick; // 0x80c            
            float m_flVolume; // 0x810            
            float m_flBank; // 0x814            
            float m_oldSpeed; // 0x818            
            float m_flBlockDamage; // 0x81c            
            float m_height; // 0x820            
            float m_maxSpeed; // 0x824            
            float m_dir; // 0x828            
            uint8_t _pad082c[0x4]; // 0x82c
            CUtlSymbolLarge m_iszSoundMove; // 0x830            
            CUtlSymbolLarge m_iszSoundMovePing; // 0x838            
            CUtlSymbolLarge m_iszSoundStart; // 0x840            
            CUtlSymbolLarge m_iszSoundStop; // 0x848            
            CUtlSymbolLarge m_strPathTarget; // 0x850            
            float m_flMoveSoundMinDuration; // 0x858            
            float m_flMoveSoundMaxDuration; // 0x85c            
            source2sdk::entity2::GameTime_t m_flNextMoveSoundTime; // 0x860            
            float m_flMoveSoundMinPitch; // 0x864            
            float m_flMoveSoundMaxPitch; // 0x868            
            source2sdk::server::TrainOrientationType_t m_eOrientationType; // 0x86c            
            source2sdk::server::TrainVelocityType_t m_eVelocityType; // 0x870            
            uint8_t _pad0874[0x14]; // 0x874
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x888            
            source2sdk::entity2::CEntityIOOutput m_OnNext; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x8d8            
            bool m_bManualSpeedChanges; // 0x900            
            uint8_t _pad0901[0x3]; // 0x901
            float m_flDesiredSpeed; // 0x904            
            source2sdk::entity2::GameTime_t m_flSpeedChangeTime; // 0x908            
            float m_flAccelSpeed; // 0x90c            
            float m_flDecelSpeed; // 0x910            
            bool m_bAccelToSpeed; // 0x914            
            uint8_t _pad0915[0x3]; // 0x915
            source2sdk::entity2::GameTime_t m_flNextMPSoundTime; // 0x918            
            uint8_t _pad091c[0x4];
            
            // Datamap fields:
            // void InputStop; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputToggle; // 0x0
            // void InputResume; // 0x0
            // void InputReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedDir; // 0x0
            // float InputSetSpeedReal; // 0x0
            // float InputSetMaxSpeed; // 0x0
            // float InputSetSpeedDirAccel; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // void InputLockOrientation; // 0x0
            // void InputUnlockOrientation; // 0x0
            // void CFuncTrackTrainNext; // 0x0
            // void CFuncTrackTrainFind; // 0x0
            // void CFuncTrackTrainNearestPath; // 0x0
            // void CFuncTrackTrainDeadEnd; // 0x0
            // int32_t volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrackTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrackTrain) == 0x920);
    };
};
