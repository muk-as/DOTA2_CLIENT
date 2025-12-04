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
        // 
        // static metadata: MNetworkVarNames "float m_flRadius"
        #pragma pack(push, 1)
        class CSoundEventSphereEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flRadius; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CSoundEventSphereEntitySoundEventSphereThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventSphereEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventSphereEntity) == 0x_);
    };
};
