#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPhysicsShake.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x528
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvShake : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_limitToEntity; // 0x4d8            
            float m_Amplitude; // 0x4e0            
            float m_Frequency; // 0x4e4            
            float m_Duration; // 0x4e8            
            float m_Radius; // 0x4ec            
            source2sdk::entity2::GameTime_t m_stopTime; // 0x4f0            
            source2sdk::entity2::GameTime_t m_nextShake; // 0x4f4            
            float m_currentAmp; // 0x4f8            
            Vector m_maxForce; // 0x4fc            
            uint8_t _pad0508[0x8]; // 0x508
            source2sdk::server::CPhysicsShake m_shakeCallback; // 0x510            
            
            // Datamap fields:
            // void m_pShakeController; // 0x508
            // void InputStartShake; // 0x0
            // void InputStopShake; // 0x0
            // float InputAmplitude; // 0x0
            // float InputFrequency; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvShake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvShake) == 0x528);
    };
};
