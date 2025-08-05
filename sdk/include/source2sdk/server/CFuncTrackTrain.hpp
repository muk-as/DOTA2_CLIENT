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
        // Size: 0x948
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTrackTrain : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathTrack> m_ppath;
            char m_ppath[0x4]; // 0x7f0            
            float m_length; // 0x7f4            
            Vector m_vPosPrev; // 0x7f8            
            QAngle m_angPrev; // 0x804            
            Vector m_controlMins; // 0x810            
            Vector m_controlMaxs; // 0x81c            
            Vector m_lastBlockPos; // 0x828            
            std::int32_t m_lastBlockTick; // 0x834            
            float m_flVolume; // 0x838            
            float m_flBank; // 0x83c            
            float m_oldSpeed; // 0x840            
            float m_flBlockDamage; // 0x844            
            float m_height; // 0x848            
            float m_maxSpeed; // 0x84c            
            float m_dir; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            CUtlSymbolLarge m_iszSoundMove; // 0x858            
            CUtlSymbolLarge m_iszSoundMovePing; // 0x860            
            CUtlSymbolLarge m_iszSoundStart; // 0x868            
            CUtlSymbolLarge m_iszSoundStop; // 0x870            
            CUtlSymbolLarge m_strPathTarget; // 0x878            
            float m_flMoveSoundMinDuration; // 0x880            
            float m_flMoveSoundMaxDuration; // 0x884            
            source2sdk::entity2::GameTime_t m_flNextMoveSoundTime; // 0x888            
            float m_flMoveSoundMinPitch; // 0x88c            
            float m_flMoveSoundMaxPitch; // 0x890            
            source2sdk::server::TrainOrientationType_t m_eOrientationType; // 0x894            
            source2sdk::server::TrainVelocityType_t m_eVelocityType; // 0x898            
            uint8_t _pad089c[0x14]; // 0x89c
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_OnNext; // 0x8d8            
            source2sdk::entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x900            
            bool m_bManualSpeedChanges; // 0x928            
            uint8_t _pad0929[0x3]; // 0x929
            float m_flDesiredSpeed; // 0x92c            
            source2sdk::entity2::GameTime_t m_flSpeedChangeTime; // 0x930            
            float m_flAccelSpeed; // 0x934            
            float m_flDecelSpeed; // 0x938            
            bool m_bAccelToSpeed; // 0x93c            
            uint8_t _pad093d[0x3]; // 0x93d
            source2sdk::entity2::GameTime_t m_flNextMPSoundTime; // 0x940            
            uint8_t _pad0944[0x4];
            
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
        
        static_assert(sizeof(source2sdk::server::CFuncTrackTrain) == 0x948);
    };
};
