#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x18e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_VisageFamiliar : public source2sdk::server::CDOTA_BaseNPC_Creep
        {
        public:
            source2sdk::server::CountdownTimer ctTimer; // 0x18c8            
            source2sdk::client::ParticleIndex_t m_nFXAmbient; // 0x18e0            
            uint8_t _pad18e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_VisageFamiliar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_VisageFamiliar) == 0x18e8);
    };
};
