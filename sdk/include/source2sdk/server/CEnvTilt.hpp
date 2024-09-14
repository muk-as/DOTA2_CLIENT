#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvTilt : public server::CPointEntity
    {
    public:
        float m_Duration; // 0x4b8        
        float m_Radius; // 0x4bc        
        float m_TiltTime; // 0x4c0        
        entity2::GameTime_t m_stopTime; // 0x4c4        
        
        // Datamap fields:
        // void InputStartTilt; // 0x0
        // void InputStopTilt; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvTilt because it is not a standard-layout class
    static_assert(sizeof(CEnvTilt) == 0x4c8);
};
