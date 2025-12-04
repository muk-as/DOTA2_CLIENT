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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvShake : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_limitToEntity; // 0x_            
            float m_Amplitude; // 0x_            
            float m_Frequency; // 0x_            
            float m_Duration; // 0x_            
            float m_Radius; // 0x_            
            source2sdk::entity2::GameTime_t m_stopTime; // 0x_            
            source2sdk::entity2::GameTime_t m_nextShake; // 0x_            
            float m_currentAmp; // 0x_            
            Vector m_maxForce; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CPhysicsShake m_shakeCallback; // 0x_            
            
            // Datamap fields:
            // void m_pShakeController; // 0x_
            // void InputStartShake; // 0x_
            // void InputStopShake; // 0x_
            // float InputAmplitude; // 0x_
            // float InputFrequency; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvShake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvShake) == 0x_);
    };
};
