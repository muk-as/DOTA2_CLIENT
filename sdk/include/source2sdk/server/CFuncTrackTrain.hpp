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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTrackTrain : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathTrack> m_ppath;
            char m_ppath[0x_]; // 0x_            
            float m_length; // 0x_            
            Vector m_vPosPrev; // 0x_            
            QAngle m_angPrev; // 0x_            
            Vector m_controlMins; // 0x_            
            Vector m_controlMaxs; // 0x_            
            // metadata: MNotSaved
            Vector m_lastBlockPos; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_lastBlockTick; // 0x_            
            float m_flVolume; // 0x_            
            float m_flBank; // 0x_            
            float m_oldSpeed; // 0x_            
            float m_flBlockDamage; // 0x_            
            float m_height; // 0x_            
            float m_maxSpeed; // 0x_            
            float m_dir; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSoundMove; // 0x_            
            CUtlSymbolLarge m_iszSoundMovePing; // 0x_            
            CUtlSymbolLarge m_iszSoundStart; // 0x_            
            CUtlSymbolLarge m_iszSoundStop; // 0x_            
            CUtlSymbolLarge m_strPathTarget; // 0x_            
            float m_flMoveSoundMinDuration; // 0x_            
            float m_flMoveSoundMaxDuration; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextMoveSoundTime; // 0x_            
            float m_flMoveSoundMinPitch; // 0x_            
            float m_flMoveSoundMaxPitch; // 0x_            
            source2sdk::server::TrainOrientationType_t m_eOrientationType; // 0x_            
            source2sdk::server::TrainVelocityType_t m_eVelocityType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnNext; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x_            
            bool m_bManualSpeedChanges; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            float m_flDesiredSpeed; // 0x_            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flSpeedChangeTime; // 0x_            
            float m_flAccelSpeed; // 0x_            
            float m_flDecelSpeed; // 0x_            
            // metadata: MNotSaved
            bool m_bAccelToSpeed; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextMPSoundTime; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputStop; // 0x_
            // void InputStartForward; // 0x_
            // void InputStartBackward; // 0x_
            // void InputToggle; // 0x_
            // void InputResume; // 0x_
            // void InputReverse; // 0x_
            // float InputSetSpeed; // 0x_
            // float InputSetSpeedDir; // 0x_
            // float InputSetSpeedReal; // 0x_
            // float InputSetMaxSpeed; // 0x_
            // float InputSetSpeedDirAccel; // 0x_
            // CUtlSymbolLarge InputMoveToPathNode; // 0x_
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x_
            // void InputLockOrientation; // 0x_
            // void InputUnlockOrientation; // 0x_
            // void CFuncTrackTrainNext; // 0x_
            // void CFuncTrackTrainFind; // 0x_
            // void CFuncTrackTrainNearestPath; // 0x_
            // void CFuncTrackTrainDeadEnd; // 0x_
            // int32_t volume; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrackTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrackTrain) == 0x_);
    };
};
