#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvTilt : public source2sdk::server::CPointEntity
        {
        public:
            float m_Duration; // 0x4d8            
            float m_Radius; // 0x4dc            
            float m_TiltTime; // 0x4e0            
            source2sdk::entity2::GameTime_t m_stopTime; // 0x4e4            
            
            // Datamap fields:
            // void InputStartTilt; // 0x0
            // void InputStopTilt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvTilt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvTilt) == 0x4e8);
    };
};
