#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncRotator_Rotate_t.hpp"
#include "source2sdk/server/RotatorHistoryEntry_t.hpp"
#include "source2sdk/server/RotatorQueueEntry_t.hpp"
#include "source2sdk/server/RotatorTargetSpace_t.hpp"
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
        #pragma pack(push, 1)
        class CFuncRotator : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hRotatorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRotatorTarget;
            char m_hRotatorTarget[0x_]; // 0x_            
            bool m_bIsRotating; // 0x_            
            bool m_bIsReversing; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTimeToReachMaxSpeed; // 0x_            
            float m_flTimeToReachZeroSpeed; // 0x_            
            float m_flDistanceAlongArcTraveled; // 0x_            
            float m_flTimeToWaitOscillate; // 0x_            
            source2sdk::entity2::GameTime_t m_flTimeRotationStart; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Quaternion m_qLSPrevChange; // 0x_            
            Quaternion m_qWSPrev; // 0x_            
            Quaternion m_qWSInit; // 0x_            
            Quaternion m_qLSInit; // 0x_            
            Quaternion m_qLSOrientation; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnRotationStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnRotationCompleted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnOscillate; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartArrive; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartDepart; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndArrive; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndDepart; // 0x_            
            bool m_bOscillateDepart; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nOscillateCount; // 0x_            
            source2sdk::server::CFuncRotator_Rotate_t m_eRotateType; // 0x_            
            source2sdk::server::CFuncRotator_Rotate_t m_ePrevRotateType; // 0x_            
            bool m_bHasTargetOverride; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Quaternion m_qOrientationOverride; // 0x_            
            source2sdk::server::RotatorTargetSpace_t m_eSpaceOverride; // 0x_            
            QAngle m_qAngularVelocity; // 0x_            
            Vector m_vLookAtForcedUp; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_strRotatorTarget; // 0x_            
            bool m_bRecordHistory; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecRotatorHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorHistory;
            char m_vecRotatorHistory[0x_]; // 0x_            
            bool m_bReturningToPreviousOrientation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecRotatorQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorQueueEntry_t> m_vecRotatorQueue;
            char m_vecRotatorQueue[0x_]; // 0x_            
            // m_vecRotatorQueueHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorQueueHistory;
            char m_vecRotatorQueueHistory[0x_]; // 0x_            
            
            // Datamap fields:
            // void InputStart; // 0x_
            // void InputStop; // 0x_
            // void InputStartForward; // 0x_
            // void InputStartReverse; // 0x_
            // void InputReturnToPreviousOrientation; // 0x_
            // void InputReturnToInitialOrientation; // 0x_
            // int32_t InputSetRotateType; // 0x_
            // float InputPitch; // 0x_
            // float InputYaw; // 0x_
            // float InputRoll; // 0x_
            // CUtlSymbolLarge InputSetRotatorTarget; // 0x_
            // float InputSetSpeed; // 0x_
            // void CFuncRotatorRotateThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotator) == 0x_);
    };
};
