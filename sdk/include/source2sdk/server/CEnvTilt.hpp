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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvTilt : public source2sdk::server::CPointEntity
        {
        public:
            float m_Duration; // 0x_            
            float m_Radius; // 0x_            
            float m_TiltTime; // 0x_            
            source2sdk::entity2::GameTime_t m_stopTime; // 0x_            
            
            // Datamap fields:
            // void InputStartTilt; // 0x_
            // void InputStopTilt; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvTilt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvTilt) == 0x_);
    };
};
