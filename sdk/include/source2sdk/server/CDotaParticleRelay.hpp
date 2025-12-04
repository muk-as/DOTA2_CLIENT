#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CDotaParticleRelay : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_particleSystemName; // 0x_            
            
            // Datamap fields:
            // void InputStart; // 0x_
            // void InputStop; // 0x_
            // void InputStopImmediate; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaParticleRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaParticleRelay) == 0x_);
    };
};
