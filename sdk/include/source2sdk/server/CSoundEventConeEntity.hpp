#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundEventEntity.hpp"

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
        class CSoundEventConeEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            float m_flEmitterAngle; // 0x_            
            float m_flSweetSpotAngle; // 0x_            
            float m_flAttenMin; // 0x_            
            float m_flAttenMax; // 0x_            
            CUtlSymbolLarge m_iszParameterName; // 0x_            
            
            // Datamap fields:
            // void CSoundEventConeEntitySoundEventConeThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventConeEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventConeEntity) == 0x_);
    };
};
